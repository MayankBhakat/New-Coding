#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int arr[1000000];
   int i;
   for(i=0;i<n;i++){
    cin>>arr[i];
   }
   int a,d,j,currentP,prevP;
   int t=0,array[2][1000000];
   for(i=0;i<n && arr[i]!=0;i++){
        a=arr[i];
        bool pika=false;
     currentP=i,prevP=i;
        for(j=i+1;j<n;j++){
            
            if(arr[j]==a){
                currentP=j;
                d=j-i;
                pika=true;
                break;
            }}
            if(!pika){
                
                array[0][t]=a;
                array[1][t]=0;
                t++;}
            


        
        if(pika){
            arr[j]=0;
            j++;
            for(;j<n;j++){
                if(arr[j]==a){
                    arr[j]=0;
                    prevP=currentP;
                    currentP=j;
                }
                if((currentP-prevP)!=d){
                    pika=false;
                    break;
                }
            }
            if(pika){
                array[0][t]=a;
                array[1][t]=d;
                t++;
            }
        }}
   
   
      for(j=0;j<t;j++){
        cout<<array[0][j]<<" "<<array[1][j]<<endl;
      

   }}
   
