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
#define inti __int128_t  //Set editor to GNU 20 64 bits
using namespace std;

/*
 " I AM VENGEANCE , I AM THE KNIGHT , I AM THE BATMAN ! "
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
//*****************************************nCr%mod******************************************************************************
/* Iterative Function to calculate (x^y)%p
in O(log y) */
 long long power( long long x, 
                              long long y,long long p)
{
     long long res = 1; // Initialize result
  
    x = x % p; // Update x if it is more than or
    // equal to p
  
    while (y > 0) 
    {
      
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
  
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
  
// Returns n^(-1) mod p
 long long modInverse( long long n,  
                                    long long p)
{
    return power(n, p - 2, p);
}
  
// Returns nCr % p using Fermat's little
// theorem.
 long long nCrModPFermat(long long n,
                                 long long r, long long p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;

  
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
     long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
  
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}

//********************************************************************************************************************************
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
// vector<ll> seive(ll num){
//    vector<ll>lp(1e5+10,1) ;
//    vector<ll>hp(1e5+10,1);            //RETURN ALL NUMBERS WITH PRIME 1 AND COMP 0;
//    vector<ll>vec(1e5+10,1);
//    vec[0]=0;
//    vec[1]=0;
//    for(ll i=2;i<1e5+10;i++){        //return 0 if not prime and 1 if prime
//       if(vec[i]==1){ 
//                 lp[i]=hp[i]=i;                     // TC is (n)log(log(n))
//          for(ll j=2*i;j<=1e5+1;j=j+i){
//             vec[j]=0;
//                hp[j]=i;               //array of highest prime(VERY IMPORTANT)
//                if(lp[j]==1){
//                   lp[j]=i;           //array of lowest prime(VERY IMPORTANT)
//                }
//          }
//       }
//    }
//    return vec;
// }
// vector<ll> seive3(ll num){
//    vector<ll>lp(1e5+10,1) ;         //RETURNS PRIME ARRAY
//    vector<ll>hp(1e5+10,1);   
//    vector<ll>vec(1e5+10,1);
//    vector<ll>vec2;
//    vec[0]=0;
//    vec[1]=0;
//    for(ll i=2;i<1e5+10;i++){        //return 0 if not prime and 1 if prime
//       if(vec[i]==1){ 
//                 lp[i]=hp[i]=i;                     // TC is (n)log(log(n))
//                 vec2.pb(i);
//          for(ll j=2*i;j<=1e5+1;j=j+i){
//             vec[j]=0;
//                hp[j]=i;               //array of highest prime(VERY IMPORTANT)
//                if(lp[j]==1){
//                   lp[j]=i;           //array of lowest prime(VERY IMPORTANT)
//                }
//          }
//       }
//    }
//    return vec2;
// }
// vector<ll> seive2(ll num){
//    vector<ll>lp(1e5+10,1) ;        //RETURN LOWEST PRIME
//    vector<ll>hp(1e5+10,1);   
//    vector<ll>vec(1e5+10,1);
//    vec[0]=0;
//    vec[1]=0;
//    for(ll i=2;i<1e5+10;i++){        //return 0 if not prime and 1 if prime
//       if(vec[i]==1){ 
//                 lp[i]=hp[i]=i;                     // TC is (n)log(log(n))
//          for(ll j=2*i;j<=1e5+1;j=j+i){
//             vec[j]=0;
//                hp[j]=i;               //array of highest prime(VERY IMPORTANT)
//                if(lp[j]==1){
//                   lp[j]=i;           //array of lowest prime(VERY IMPORTANT)
//                }
//          }
//       }
//    }
//    return lp;
// }

//*************************************************************************************************************************************
//***********************************************MOST efficient prime factorization****************************************************

// map<ll,ll> prime_factors(ll n,vector<ll>& sie,vector<ll>& lp,vector<ll>& poke2){




    
    
//        map<ll,ll>mp;
//         ll num=n;
//         ll k=sqrt(num); 
        
//         ll j=0;
//         while(num!=1){
//            bool snake=true;
//            if(num<1e5){        //After number reduces below 1e5(check lowest prime array)
//             snake=false;
//             mp[lp[num]]++;
//             num=num/lp[num];
//             continue;
//            }
//             for(;poke2[j]<=k;j++){         //numbers between 1e9-1e5(using array of prime)
//                 if(sie[poke2[j]] && num%poke2[j]==0){
//                     snake=false;
//                     mp[poke2[j]]++;
//                     num=num/poke2[j];
//                     break;
//                 }
//             }
//             if(snake){       //Num is prime
//             mp[num]++;
            
//            num=1;
//         }
            
//         }
//         return mp;

//     }

   


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
// *****************************************Sparse_Table DS****************************************************************************
// ll log(ll n,ll base){
//     if(n<base){
//         return 0;
//     }
//     n=n/base;
//     return log(n,base)+1;
// }
// vector<ll>arr(n);
//  for(ll i=0;i<n;i++){        //Input Array(0 indexed)No need to add this if already inputed
//     cin>>arr[i];
//  }
//  ll p=log(n,2);    


                    //FILLING UP THE TABLE


//  vector<vector<ll>>sparse(n,vector<ll>(p+1,-1));
//  for(ll i=0;i<n;i++){
//     sparse[i][0]=i;
//  }
//  for(ll j=1;pon[j]<=n;j++){
//     for(ll i=0;i+pon[j]-1<n;i++){
//         if(arr[sparse[i][j-1]]>arr[sparse[i+pon[j-1]][j-1]]){        //Storing Maximum of a segment of array
//             sparse[i][j]=sparse[i][j-1];
//         }
//         else{
//             sparse[i][j]=sparse[i+pon[j-1]][j-1];
//         }
//     }
//  }
                        //Making a query(Between index i and j including both)
                
// ll sze=log(j-i+1,2);
// ll ans=max(arr[sparse[i][sze]],arr[sparse[max(j-pon[sze]+1][sze]]);  (VERY IMP.Add 1 to Abcissa if array is one 
                                                                //indexed as Sparse table is 0 index otherwise u get RunTime error)


// ************************************************************************************************************************************
//*********************************************Bnary to Decimal************************************************************************

// ll Bin_to_Dec(vector<ll>& poke){
//     ll ans=0;
//     ll power=1;
//     ll n=poke.size();
//     for(ll i=n-1;i>=0;i--){
//         if(poke[i]==1){
//             ans+=power;
//         }
//         power=power*2;
//     }
//     return ans;
// }
//*************************************************************************************************************************************

//******************************************Decimal to Binary***************************************************************************

// vector<ll>Dec_to_Bin(ll n){
//     vector<ll>ans;
//     if(n==0){
//         ans.pb(0);
//         return ans;
//     }
//     while(n>0){
//         if(n%2==1){
//             ans.pb(1);
//         }
//         else{
//             ans.pb(0);
//         }
//         n=n/2;
//     }
//     reverse(ans.begin(),ans.end());
//     return ans;
// }

//*************************************************************************************************************************************
// __builtin_popcount = int              Number of set bits
// __builtin_popcountl = long int
// __builtin_popcountll = long long
//*************************************************************************************************************************************
                              // SEGMENT TREE(Normal Version)

// void segment_tree(vector<ll>& arr,vector<ll>& seg_tree,ll index,ll low,ll high){
//   if(low==high){
//     seg_tree[index]=arr[low];
//     return;
//   }
//   ll mid=(high+low)/2;
//   segment_tree(arr,seg_tree,2*index+1,low,mid);
//   segment_tree(arr,seg_tree,2*index+2,mid+1,high);
//   seg_tree[index]=seg_tree[2*index+1]+seg_tree[2*index+2];

// }

// void point_update(vector<ll>& arr,vector<ll>& seg_tree,ll index,ll low,ll high,ll node,ll val){
  
//   if(node>=low && node<=high){
    
//     if(low==high){
//     seg_tree[index]=val;
    
//     return;
//   }
//   ll mid=(high+low)/2;
//   point_update(arr,seg_tree,2*index+1,low,mid,node,val);
//   point_update(arr,seg_tree,2*index+2,mid+1,high,node,val);
//   seg_tree[index]=seg_tree[2*index+1]+seg_tree[2*index+2];

//   }
// }

// ll range_sum(vector<ll>& arr,vector<ll>& seg_tree,ll index,ll low,ll high,ll left,ll right){

//   if(left<=low && right>=high){
//     return seg_tree[index];
//   }
//   if(low<left && high<left || low>right && high>right){
    
//     return 0;
//   }
//   ll mid=(high+low)/2;
//   ll lef=range_sum(arr,seg_tree,2*index+1,low,mid,left,right);
//   ll righ=range_sum(arr,seg_tree,2*index+2,mid+1,high,left,right);
//   return lef+righ;

// }
//************************************************************************************************************************************************
                                      // SEGMENT TREE(Lazy Propagation)
// void segment_tree(vector<ll>& arr,vector<ll>& seg_tree,vector<ll>& lazy,ll index,ll low,ll high){
//   if(low==high){
//     seg_tree[index]=arr[low];
//     return;
//   }
//   ll mid=(high+low)/2;
//   segment_tree(arr,seg_tree,lazy,2*index+1,low,mid);
//   segment_tree(arr,seg_tree,lazy,2*index+2,mid+1,high);
//   seg_tree[index]=seg_tree[2*index+1]+seg_tree[2*index+2];

// }

// void range_update(vector<ll>& arr,vector<ll>& seg_tree,vector<ll>& lazy,ll index,ll low,ll high,ll left,ll right,ll val){
//   if(lazy[index]!=0){
//     seg_tree[index]+=(high-low+1)*lazy[index];
//     if(low!=high){
//       lazy[2*index+1]+=lazy[index];
//       lazy[2*index+2]+=lazy[index];
//     }
//     lazy[index]=0;
//   }
//   if(right<low || left>high || low>high){
//     return;
//   }
//   if(low>=left && high<=right){
//     seg_tree[index]+=(high-low+1)*val;
//     if(low!=high){
//       lazy[2*index+1]+=val;
//       lazy[2*index+2]+=val;

//     }
//     return ;

//   }

//   ll mid=(low+high)/2;
//   range_update(arr,seg_tree,lazy,2*index+1,low,mid,left,right,val);
//   range_update(arr,seg_tree,lazy,2*index+2,mid+1,high,left,right,val);
//   seg_tree[index]=seg_tree[2*index+1]+seg_tree[2*index+2];

// }

// ll range_sum(vector<ll>& arr,vector<ll>& seg_tree,vector<ll>& lazy,ll index,ll low,ll high,ll left,ll right){

//   if(lazy[index]!=0){
//     seg_tree[index]+=(high-low+1)*lazy[index];
//     if(low!=high){
//       lazy[2*index+1]+=lazy[index];
//       lazy[2*index+2]+=lazy[index];
//     }
//     lazy[index]=0;
//   }
//   if(right<low || left>high || low>high){
     
//     return 0;
//   }
//   if(low>=left && high<=right){
   
//     return seg_tree[index];
//   }
//   ll mid=(low+high)/2;
//   ll lef=range_sum(arr,seg_tree,lazy,2*index+1,low,mid,left,right);
//   ll righ=range_sum(arr,seg_tree,lazy,2*index+2,mid+1,high,left,right);
//   return lef+righ;

// }
//************************************************************************************************************************************************

void dfs(vector<vector<char>>& arr,vector<vector<ll>>& vis,string ans,int x,int y,vector<pair<ll,string>>& box,ll sizer=0){
    ll n=arr.size();
    ll m=arr[0].size();
    if(arr[x][y]=='B'){
        box.pb({sizer,ans});
        return ;
    }
    
    int xnode[4]={-1,0,1,0};
    int ynode[4]={0,1,0,-1};
    char dir[4]={'U','R','D','L'};
    for(ll i=0;i<4;i++){
        int newx=x+xnode[i];
        int newy=y+ynode[i];
        if(newx>=0 && newx<n && newy>=0 && newy<m &&  vis[newx][newy]==0 && (arr[newx][newy]=='.' || arr[newx][newy]=='B')){
            ans+=dir[i];
            vis[newx][newy]=1;
            dfs(arr,vis,ans,newx,newy,box,sizer+1);
            ans.pop_back();
            vis[newx][newy]=0;
        }
    }
    
}
int main(){  
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,m;
    cin>>n>>m;
  vector<vector<char>>arr(n,vector<char>(m));
  ll xA,yA;
  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
        cin>>arr[i][j];
        if(arr[i][j]=='A'){
        xA=i;
        yA=j;
    }
    }
   
  }
  
  ll count=0;
  vector<vector<ll>>vis(n,vector<ll>(m,0));
  string ans="";
  vis[xA][yA]=1;
  vector<pair<ll,string>>box;
  
  dfs(arr,vis,ans,xA,yA,box,0);
  if(box.size()==0){
    cout<<"NO"<<endl;
  }
  else{sort(box.begin(),box.end());
  cout<<"YES"<<endl;
  cout<<box[0].first<<endl;
  cout<<box[0].second<<endl;
  }
  
  
 
}