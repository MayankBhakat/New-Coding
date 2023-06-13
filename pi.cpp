#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==-1){
            continue;
        }
        else{
            int count=1;
            int cd=0;
            bool b=1;
            for(int j=i+1;j<n;j++){
                if(a[j]==a[i] and count==1){
                    a[j]=-1;
                    cd=j-i;
                    count++;
                }
                else if(a[j]==a[i]){
                    if(j-i==cd){

                        count++;
                    }
                    else{
                        b=0;
                    }
                }
            }
            if(b==1){
                cout<<count 
            }
        }
    }
    return 0;
}