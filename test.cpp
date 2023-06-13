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
ll fac(ll x){
    if(x==0 || x==1){
        return 1;
    }
    return x*fac(x-1)%998244353;
}

int main(){
    int t;
    cin>>t;
    cout<<fac(t)<<" ";
    
}