#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        array<int,100005>arr;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        set<int>st;
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
        } 
        int sum=1;
        int sam=1;
        int it=arr[n-1];
        for(int i=n-1;i>0;i--){
            if(arr[i-1]<it){
                it=arr[i-1];
                sum++;
                sam++;
            }
            else if(arr[i-1]==it){
                sam++;
            }
            else{
                break;
            }
        } 
        int poke=st.size();
        int pika=st.size()-sum;
        

    }    
    
    
}

