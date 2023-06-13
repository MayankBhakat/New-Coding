#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

bool cmp(const pair<int,int>& a, const pair<int,int>& b)
{
    return a.second < b.second;
}

int main() {
    
    multimap <int, int> m;
    m.insert(make_pair(1, 8));
    m.insert(make_pair(1, 5));
    m.insert(make_pair(2, 4));
    m.insert(make_pair(2, 3));
    m.insert(make_pair(3, 1));

    sort(m.begin(), m.end(), cmp);
    return 0;
}
