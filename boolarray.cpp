#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p=n;
        int arr[100002];
        while(p>-1){
            int root=ceil(sqrt(p));
            int poke=root*root;
            for(int i=poke+1-p;i<=p;i++){
                arr[i-1]=poke-i+1;
            }
            p=poke+1-p;
            if(p==1){
                goto p1;
            }
            if(p==2){
                goto p2;
            }
            if(p==5){
                goto p3;
            }
        }
        p1:
        arr[0]=0;
        goto lab1;

        p2:
        arr[0]=1;
        arr[1]=0;
        
        goto lab2;

        p3:
        arr[0]=4;
        arr[1]=3;
        arr[2]=2;
        arr[3]=1;
        arr[4]=0;
        goto lab3;


        lab1:
        lab2:
        lab3:
        for(int s=0;s<n;s++){
            cout<<arr[s]<<" ";
        }
        cout<<endl;
        
    }
        
    
}