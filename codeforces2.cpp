#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define MOD 1000000007
#define MOD2 998244353
using namespace std;


int main(){    
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t;
cin>>t;
while(t--){
  ll n,q;
  cin>>n>>q;
  ll arr[200003];
  ll sum=0;
  ll xors=0;
  for(ll i=1;i<=n;i++){
    cin>>arr[i];
    sum=sum+arr[i];
    xors=xors^arr[i];
  }
  ll ans=sum-xors;
  ll sae,sae2;
  cin>>sae>>sae2;
  ll p=0;
  ll s=0;
  ll ck=0,qk=0;
  for(ll i=1;i<=n;i++){
    p=p+arr[i];
    s=s^arr[i];
    ll may=p,may2=s;
    if(p-s==ans){
      ck=1;
      qk=i;
      break;
    }
    bool snake=true;
    for(ll j=2;j<=n-i+1;j++){
      may=may-arr[j-1]+arr[j+i-1];
      may2=may2^arr[j-1]^arr[j+i-1];
      ck=j;
      qk=j+i-1;
      snake=false;
      break;
    }
    if(!snake){
      break;
    }
    
  }
  cout<<ck<<" "<<qk<<endl;
}

}