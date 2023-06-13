#include <bits/stdc++.h>
using namespace std;


void addEdge(vector <int> adj[], int u, int v) {
  cout<<adj.size();           
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() 
{
    vector <int> adj[6];
    cout<<adj.size();  //array of vectors dont have this adj
    
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);

    
    
 

    return 0;
}