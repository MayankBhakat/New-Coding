#include<bits/stdc++.h>
using namespace std;

int func(int arr[200004],int m,int poke){
    
    int sum=poke;
    int i;
    for(i=0;i<m;i=i+2){
        if(sum<=arr[i]){
            sum=arr[i];
        }
        sum++;
    }
    if(m%2==1){
        i=i-3;
        if(sum<=arr[i]){
            sum=arr[i];
            sum++;
        }
        for(;i>=1;i=i-2){
            if(sum<=arr[i]){
            sum=arr[i];
        }
        sum++;

        }
    }
    else{
        i=i-1;
        if(sum<=arr[i]){
            sum=arr[i];
            sum++;
        }
        for(;i>=0;i=i-2){
            if(sum<=arr[i]){
            sum=arr[i];
        }
        sum++;

        }

    }
    return sum;
}
 
int main(){
    long long int m,t;
    cin>>t;
    int i;
    for(i=1;i<=t;i++){
       cin>>m;
       int arr[200004];
       int i;
       for(i=0;i<2*m;i=i+2){
        cin>>arr[i];
       }
       for(i=1;i<2*m;i=i+2){
        cin>>arr[i];
       }
       int array[200004];
       int poke=0;
       for(i=0;i<2*m;i++){
        
        array[i]=func(arr+i,2*m-i,poke);
        if(arr[i+1]>poke){
        poke=arr[i+1]+1;
    }
    else{
        poke++;
    }
       }
       sort(array,array+2*m);
       cout<<array[0]<<endl;
      
    }
}