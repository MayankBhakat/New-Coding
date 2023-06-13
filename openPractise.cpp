#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,t,arr[100002];
    cin>>n;
    for(t=0;t<n;t++){
        cin>>arr[t];
    }

    unordered_set<int>st;
    for(t=0;t<n;t++){
        st.insert(arr[t]);
    }
    


    

    vector<vector<int>>v1;
    long long int a=0;
    long long int m;
    for(auto it:st){
        
        for(m=0;m<n;m++){
            v1[a].push_back(it);
            if(arr[m]==it){
                
                v1[a].push_back(m);
            }
            
        }
        a++;
        
        
    }
    map<int,int>mp;
    for(auto poke:v1){
        for(int m=1;m<poke.size();m++){
            if(poke.size()==2){
                mp[poke[0]]=0;
            }
            else if(poke.size()==3){
                int d=poke[2]-poke[1];
                mp[poke[0]]=d;
            }
            else{
                int d=poke[2]-poke[1];
                for(int er=3;er<poke.size();er++){
                    if((poke[er]-poke[er-1])!=d){
                        break;
                    }
                }
                mp[poke[0]]=d;
            }
        }
    }
    cout<<mp.size()<<endl;
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;

    }




}