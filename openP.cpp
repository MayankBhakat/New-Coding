#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  multiset<int>ms;
  for(int i=0;i<n;i++){
    cin>>i;
    ms.insert(i);
  }
  int a1,a2,a3,a4,a5,a6,a7;
  a1=ms.count(1);
  a2=ms.count(2);
  a3=ms.count(3);
  a4=ms.count(4);
  a5=ms.count(5);
  a6=ms.count(6);
  a7=ms.count(7);

  bool poke=true;
  if(a7!=0){
    cout<<1;
    poke=false;
  }
  if(a5!=0){
    cout<<2;
    poke=false;
  }
  if((a2+a3)==a1){
    cout<<3;
   
    if((a6+a4)!=a1 || a4>a2 ){
       cout<<4;
        poke=false;
    }
  }
  else{
    cout<<5;
    poke=false;
  }
  if(!poke){
    cout<<-1;
    return 0;
  }

  else{
   
    for(int i=1;i<=a4;i++){
        cout<<1<<" "<<2<<" "<<4<<endl;
    }
    for(int i=1;i<=a1-a3-a4;i++){
        cout<<1<<" "<<2<<" "<<6<<endl;
    }
     for(int i=1;i<=a3;i++){
        cout<<1<<" "<<3<<" "<<6<<endl;
    }
  }
}