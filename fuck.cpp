#include <bits/stdc++.h>
using namespace std;

long long int facx(int n){
	if(n<=0)return 0;
	long long int ans=1;
	ans=(n*(n+1))/2;
	return ans;
}

void solve(){
	long long int n, k , q;
	cin>>n;
	cin>>k>>q;
	vector<long long int> v(n);
	for(long long int i=0; i<n; i++){
		cin>>v[i];
	}
	int days=0;
	long long int ans=0;
	for(int i =0; i<n; i++){
		if(v[i]<=q)days++;
		else{
			ans += facx(days-k+1);
			days=0;			
		}
	}
	ans += facx(days-k+1);
	cout<<ans<<endl;
	return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	} 
	return 0;
}