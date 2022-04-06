#include <bits/stdc++.h>
using namespace std;
int n,par[100000];
int findrep(int r)
{
    if(par[r]==r)
        return r;
    else
        return findrep(par[r]);
}
void Union(int u,int v)
{
    int p=findrep(u);
    int q=findrep(v);
    cout<< "P="<<p<<"  Q="<<q<<endl;
    if(p!=q)
    {
        par[p]=q;
    }
    return;
}
vector < pair <int, pair < int,int > > > edge;
int main()
{
    int n, e;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << endl;
    cout << "Enter the number of edges: ";
    cin >> e;
    cout << endl;
    cout << "Node 1-> Node 2-> Weight" << endl;
    int u, v, c;
    for (int i = 0; i < n; i++)
    {
        par[i] = i;
    }
    while (e--)
    {
        cin >> u >> v >> c;
        edge.push_back(make_pair(c, make_pair(u, v)));
    }
    sort(edge.begin(), edge.end());
    int mst = 0;
    for (int i = 0; i < edge.size(); i++)
    {
        int u = edge[i].second.first;
        int v = edge[i].second.second;
        if (findrep(u) != findrep(v))
        {
            Union(u, v);
            mst = mst + edge[i].first;
        }
    }
    cout << "Minimum Cost: " << mst << endl;
}