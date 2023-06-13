#include <bits/stdc++.h>
using namespace std;
void sort_map(map<string,int>& m)
{
    vector<pair<int , string>> v;
    map<string , int> :: iterator it;
    for(it = m.begin(); it!=m.end();it++)
    {
        v.push_back(make_pair((*it).second,(*it).first));
    }
    sort(v.begin(),v.end());
    auto it2 = v.begin();
    cout<<it2->second<<" ";
    m.erase(it2->second);
}

int main()
{
    map<string , int> m;
    int n;
    cin>>n;
    int p,q;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        cin>>p;
        if(p==1)
        {
            cin>>q;
            m.insert({s,q});
        }
        if(p==2)
        {
            cin>>q;
            m[s]=q;
        }
        if(p==3 && s=="BUY")
        {
            sort_map(m);
            cout<<n;
        }
    }
    
    return 0;
}