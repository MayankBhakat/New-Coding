#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define mk make_pair
#define MOD 1000000007
#define MOD2 998244353
#define PI 3.1415926535897932384
#define gcd __gcd
#define endl '\n'
using namespace std;

/*
 " I AM VENGEANCE , I AM THE NIGHT , I AM THE BATMAN ! "
____ __ __ __ __ __ ___                             ___ __ __ __ __ __ ____
 `-._:  .:'   `:::  .:\           |\__/|           /::  .:'   `:::  .:.-'
     \      :          \          |:   |          /         :       /
      \     ::    .     `-_______/ ::   \_______-'   .      ::   . /
       |  :   :: ::'  :   :: ::'  :   :: ::'      :: ::'  :   :: :|
       |     ;::         ;::         ;::         ;::         ;::  |
       |  .:'   `:::  .:'   `:::  .:'   `:::  .:'   `:::  .:'   `:|
       /     :           :           :           :           :    \
      /______::_____     ::    .     ::    .     ::   _____._::____\
                    `----._:: ::'  :   :: ::'  _.----'
                           `--.       ;::  .--'
                               `-. .:'  .-'
                                  \    /
                                   \  /
                                    \/
*/

//************************************ORDERED SET********************************************************************************
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define ordered_set tree < long long ,  null_type ,  less<long long> ,  rb_tree_tag ,  tree_order_statistics_node_update >

//(DONT OPEN THESE 2 LINES)
// order_of_key(k);
// find_of_order(k);
//************************************ORDERED SET********************************************************************************


//****************************************BINARY EXPONENTATION************************************************************************

// int smpower(int a,int b,int M){
//    a = a%M;                     //if(a is near order 10^9 b is 10^9 and m is 10^9)
//    int ans=1;                   // TC=O(log(N))
//    while(b>0){
//       if(b&1){
//          ans = (ans * 1LL * a) % M;
//       }
//       a = (a * 1LL * a) % M;
//       b >>= 1;
//    }
//    return ans;
// }

// ************************************************************************************************************************************

// inline ll power(ll x, ll y, ll p )
// {
// 	ll res = 1;     
// 	x = x % p;                    //if(a is near order 10^18 b is 10^18 and m is 10^9)
// 	while (y > 0)                 // TC=O(log(N))
// 	{
// 		if (y & 1)
// 			res = (res * x) % p;
// 		y = y >> 1;
// 		x = (x * x) % p;
// 	}
// 	return res;
// }

// ************************************************************************************************************************************


// ll binExp(ll a,ll b,ll M){
//    ll ans = 1;
//    while(b > 0){                  //if(a is of order 10^18 b is 10^18 and m is 10^18).OPEN BOTH THIS AND BELOW
//       if(b&1){                                 //T C is O(log^2(n))
//          ans = multiply(ans, a ,M);
//       }
//       a = multiply(a, a ,M);
//       b >>= 1;
//    }
//    return ans;
// }

// ll multiply(ll a,ll b,ll M){
//    int ans=0;
//    while(b>0){
//       if(b&1){
//          ans= (ans + a) % M;
//       }
//       a = (a + a) % M;
//       b >>= 1;
//    }
//    return ans;
// }


//*************************************************************************************************************************************

//*********************************************Sieve of Eratosthenes******************************************************************
// bool seive(ll num){
//    vector<int>lp(1e7+10,1) ;
//    vector<int>hp(1e7+10,1);   
//    vector<bool>vec(1e7+10,1);
//    vec[0]=1;
//    vec[1]=1;
//    for(ll i=2;i<=1e7+1;i++){        //return 0 if not prime and 1 if prime
//       if(vec[i]==1){ 
//                 lp[i]=hp[i]=i;                     // TC is (n)log(log(n))
//          for(ll j=2*i;j<=1e7+1;j=j+i){
//             vec[j]=0;
//                hp[j]=i;               //array of highest prime(VERY IMPORTANT)
//                if(lp[j]==0){
//                   lp[j]=i;           //array of lowest prime(VERY IMPORTANT)
//                }
//          }
//       }
//    }
//    return vec[num];
// }

//*************************************************************************************************************************************

//**************************************DSU(Rank and Size)*****************************************************************************

// class DisjointSet {
//     vector<int> rank, parent, size; 
// public: 
//     DisjointSet(int n) {
//         rank.resize(n+1, 0); 
//         parent.resize(n+1);
//         size.resize(n+1); 
//         for(int i = 0;i<=n;i++) {
//             parent[i] = i; 
//             size[i] = 1; 
//         }
//     }

//     int findUPar(int node) {
//         if(node == parent[node])
//             return node; 
//         return parent[node] = findUPar(parent[node]); 
//     }

//     void unionByRank(int u, int v) {
//         int ulp_u = findUPar(u); 
//         int ulp_v = findUPar(v); 
//         if(ulp_u == ulp_v) return; 
//         if(rank[ulp_u] < rank[ulp_v]) {
//             parent[ulp_u] = ulp_v; 
//         }
//         else if(rank[ulp_v] < rank[ulp_u]) {
//             parent[ulp_v] = ulp_u; 
//         }
//         else {
//             parent[ulp_v] = ulp_u; 
//             rank[ulp_u]++; 
//         }
//     }

//     void unionBySize(int u, int v) {
//         int ulp_u = findUPar(u); 
//         int ulp_v = findUPar(v); 
//         if(ulp_u == ulp_v) return; 
//         if(size[ulp_u] < size[ulp_v]) {
//             parent[ulp_u] = ulp_v; 
//             size[ulp_v] += size[ulp_u]; 
//         }
//         else {
//             parent[ulp_v] = ulp_u;
//             size[ulp_u] += size[ulp_v]; 
//         }
//     }
// }; 

//*************************************************************************************************************************************


//Binary Search for desired position

// int BinSearch(ll *arr,int n,ll k){
//     int beg=0;
//     int end=n-1;
//     int mid;
//     while(beg<=end){
//         mid=beg+(end-beg)/2;
//         if(arr[mid]==k){
//             return mid;
//         }
//         else if(arr[mid]>k){
//             end=mid-1;
//         }
//         else{
//             beg=mid+1;
//         }
//     }
// return -1;
// }

//Binary Search for index of first occurance of k

// int BinSearch(ll *arr,int n,ll k){
//     int beg=0;
//     int end=n-1;
//     int mid;
//     while(beg<=end){
//         mid=beg+(end-beg)/2;
//         if(arr[mid]==k && (mid==0||arr[mid-1]!=k)){
//             return mid;
//         }
//         else if(arr[mid]>=k){
//             end=mid-1;
//         }
//         else{
//             beg=mid+1;
//         }
//     }
// return -1;
// }


//Binary Search for index of last occurance of k

// int BinSearch(ll *arr,int n,ll k){
//     int beg=0;
//     int end=n-1;
//     int mid;
//     while(beg<=end){
//         mid=beg+(end-beg)/2;
//         if(arr[mid]==k && (mid==n-1||arr[mid+1]!=k)){
//             return mid;
//         }
//         else if(arr[mid]>=k){
//             end=mid-1;
//         }
//         else{
//             beg=mid+1;
//         }
//     }
// return -1;
// }

// bool comp(pair<pair<ll,ll>,ll>p1,pair<pair<ll,ll>,ll>p2){
//     if(p1.first.first<p2.first.first){
//         return true;
//     }
//     if(p1.first.first==p2.first.first){
//         if(p1.first.second>p2.first.second){
//             return true;
//         }
//     }
//     return false;
// }

//Number to string-->string s=to_string(a);
//String to number-->ll a=atoi(s.c_str());

//3D vector of dimension 2*2*3 with all elements as 1
// vector<vector<vector<int> > > vect3d(2, vector<vector<int> > (2,vector<int>(3,1)));



int main(){   
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
   ll n;
   cin>>n;
   vector<ll>arr(n);
   for(ll i=0;i<n;i++){
    cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   ll gc=gcd(arr[0],arr[1]);
   for(ll i=2;i<n;i++){
    gc=gcd(arr[i],gc);
   }
  cout<<arr[n-1]/gc<<endl;
   
   
}
    
}