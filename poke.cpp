#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>v1={2,6,2,4,8,9};
  auto it=find(v1.begin(),v1.end(),4);   //how is it 3 as v1 vector should store elements like an array
  cout<<(it-v1.begin());
}



