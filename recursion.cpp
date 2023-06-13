#include<bits/stdc++.h>
#define ll long long
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
//Number to string-->string s=to_string(a);
//String to number-->ll a=atoi(s.c_str());

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

bool comp(pair<ll,ll>p1,pair<ll,ll>p2){
    if(p1.first<p2.first){
        return true;
    }
    if(p1.first==p2.first){
        if(p1.second<p2.second){
            return true;
        }
    }
    return false;
}

int main(){
    ll n,m;
    cin>>n>>m;
    ll arr2[100000];
    for(int i=1;i<=n;i++){
        cin>>arr2[i];
        
    }
    // sort(mp.begin(),mp.end(),comp);
    
    ll arr[2][2000];
    ll ii=1;
    for(int ii=1;ii<=m;ii++){
        ll small=100000,small2=1;
        ll big=0,big2=1;
        for(ll j=1;j<=n;j++){
            if(arr2[j]>big){
                big=arr2[j];
                big2=j;
                
            }
            if(arr2[j]<small){
                small=arr2[j];
                small2=j;
                
            }
           
        }
         arr[0][ii]=big2;
         arr2[big2]--;
         
        arr[1][ii]=small2;
        arr2[small2]++;
        if(arr2[big2]==arr2[small2]){
            break;
        }
    }
    ll max=arr2[1],min=arr2[1];
    for(int i=1;i<=n;i++){
        if(max<arr2[i]){
            max=arr2[i];
        }
        if(min>arr2[i]){
            min=arr2[i];
        }
    }
    cout<<max-min<<" "<<m<<endl;
    
    for(int i=1;i<=as;i++){
        cout<<arr[0][i]<<" "<<arr[1][i]<<endl;
    }
    

}