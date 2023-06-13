#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
    int i;
    char arr[202];
    if(a==b){
        for(i=0;i<a+b;i=i+2){
            arr[i]='G';
            arr[i+1]='B';
        }
        arr[i-1]='\0';
        cout<<arr;
        
    }
    else if(a>b){
        for(i=0;i<2*b;i=i+2){
            arr[i]='B';
            arr[i+1]='G';
        }
        for(;i<a+b;i++){
            arr[i]='B';
        }
        arr[i]='\0';
        cout<<arr;
    }
    else if(a<b){
        for(i=0;i<2*a;i=i+2){
            arr[i]='G';
            arr[i+1]='B';
        }
        for(;i<a+b;i++){
            arr[i]='G';
        }
        arr[i]='\0';
        cout<<arr;
    }
}