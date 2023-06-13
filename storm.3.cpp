#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<string>v;
   v[0]="poke";
   v[1]="storm";
   v[2]="klsjd";
   sort(v.begin(),v.end());
   for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
   }
}