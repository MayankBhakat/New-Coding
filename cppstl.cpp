#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F(i,s,e) for(ll i=s;i<e;i++)
#define FR(i,e,s) for(ll i=e;i>=s;i--)
#define vl vector<ll>


ll sum(ll n)
{
    ll ans =0;
    while(n!=0)
    {
        ans+=n%10;
        n = n/10;
    }
    return ans;
}

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x=0,y;
        ll t = sum(n);
        ll k= t/2;
        ll r=0;
        ll f=n;
        // cout<<k<<endl;
        while(k>0 )
        {
            // cout<<n%10<<endl;
            if(n%10<k)
            {
                x+=pow(10,r)*(n%10);
                k-=n%10;
                n= n/10;
                r++;
            }
            else
            {
                x+=pow(10,r)*k;
                k-=k;
                n=n/10;
                r++;
            }
        }
        cout<<x<<" "<<f-x<<endl;
    }
    return 0;
}   