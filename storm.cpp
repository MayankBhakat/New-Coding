#include<bits/stdc++.h>
using namespace std;
 
int main(){
    char poke[100002];
    cin>>poke;
    char poke2[100002];
    vector<char>vec1(poke,poke+strlen(poke));
    bool snake=true;
    for(auto it=vec1.begin();it!=vec1.end();it++){
        if(*it==0){
            vec1.erase(it);
            it--;
            snake=false;
            break;
        }
    }
    if(snake){
        vec1.erase(vec.begin());
    }
    for(auto it:vec1){
        cout<<it;
    }
    
}
    


