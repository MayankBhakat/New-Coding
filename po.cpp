#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    int i=0;
    multimap<int,int>mp;
    int x,y;
    for(i=0;i<n;i++){
        cin>>x>>y;
        mp.insert(make_pair(x,y));
    }
    
    auto poke=mp.rbegin(); 
    int s=0;
    
    for(auto it=mp.rbegin();it!=mp.rend();it++){
        s++;
        if(s==k){
            poke=it;  //it effects here
            break;
        }
    }
    int sum=0;
    for(auto it=mp.rbegin();it!=mp.rend();it++){
        if(it->first==poke->first && it->second==poke->second){
            sum++;
        }
    }
    cout<<sum;
}