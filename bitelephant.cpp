#include<bits/stdc++.h>
using namespace std;
 
int main(){
    char poke[100002];
    cin>>poke;
    char poke2[100002];
    int i;
    for(i=0;i<strlen(poke);i++){
        if(poke[i]=='0'){
            break;
        }
        poke2[i]=poke[i];

    }
    if(i==strlen(poke)){
        poke2[i-1]='\0';
    }
    for(i=i+1;i<=strlen(poke);i++){
        poke2[i-1]=poke[i];
    }
    cout<<poke2;
}
    