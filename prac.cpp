#include<bits/stdc++.h>
using namespace std;
int n,par[100000];
typedef long long ll;
const ll inf=1000000000000;
const ll M=1000000003;

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
    int choice;
    cout<< "Press 1 for Kruskal ,Press 2 for Prims and Press 3 to return "<<endl;
    while(cin>>choice)
    {



    if(choice==1)
    {
        int n,e;
        cout<<"Enter the number of nodes: ";
        cin>>n;
        cout<<endl;
        cout<<"Enter the number of edges: ";
        cin>>e;
        cout<<endl;
        cout<<"Node 1-> Node 2-> Weight"<<endl;
        int u,v,c;
        for(int i=0; i<n; i++)
        {
            par[i]=i;

        }
        while(e--)
        {
            cin>>u>>v>>c;
            edge.push_back(make_pair(c,make_pair(u,v)));
        }
        sort(edge.begin(),edge.end());
        int mst=0;
        for(int i=0; i<edge.size(); i++)
        {
            int u=edge[i].second.first;
            int v=edge[i].second.second;
            if(findrep(u)!=findrep(v))
            {
                Union(u,v);
                mst=mst+edge[i].first;
            }
        }
        cout<<"Minimum Cost: "<<mst<<endl;
    }
    else if (choice==2)
    {
        cout<<"Enter total node number: "<<endl;
        ll n;
        cin>>n;
        cout<<"Enter total edge number:(Each vertex are in (1 to n) "<<endl;
        ll e;
        cin>>e;

        vector<pair<ll,ll > > adj[n+1];
        cout<<"Enter edge and cost ( u v c ) format :"<<endl;
        for(ll i=1; i<=e; i++)
        {
            ll u,v,c;
            cin>>u>>v>>c;
            adj[u].push_back(make_pair(c,v));
            adj[v].push_back(make_pair(c,u));
        }

        cout<<"Enter the node where you want to start prims algorithm : ";
        ll src;
        cin>>src;

        bool visited[n+1];
        memset(visited,false,sizeof(visited));
        visited[src]=true;


        priority_queue<pair<ll,ll> > pq;

        for(ll i=0; i<adj[src].size(); i++)
        {
            pair<ll,ll> v=adj[src][i];
            if(!visited[v.second])
            {
                pq.push(make_pair(-v.first,v.second));
            }

        }

        ll mst=0;

        while(!pq.empty())
        {
            pair<ll,ll> u=pq.top();
            pq.pop();
            ll cst=-u.first;
            ll nd=u.second;
            if(!visited[nd])
            {
                mst+=cst;
                visited[nd]=true;

                for(ll i=0; i<adj[nd].size(); i++)
                {
                    pair<ll,ll> v=adj[nd][i];
                    if(!visited[v.second])
                    {
                        pq.push(make_pair(-v.first,v.second));
                    }
                }
            }
        }
        cout<<"Minimum Cost: "<<mst<<endl;

    }
    else if (choice==3)
    {
        return 0;
    }

}
}
/// Krushkal Algorithm Input///
/* number of nodes :
   6 (input)
   number of edges:
   9 (input)
   node 1 - node 2 - weight
    1 5 4
    5 4 9
    4 3 5
    3 6 8
    6 2 7
    2 1 2
    1 4 1
    2 4 3
    2 3 3


*/
/// Prims Algorithm Input///

/*
   number of nodes :
   6 (input)
   number of edges:
   9 (input)

   node 1 - node 2 - weight
    1 5 4
    5 4 9
    4 3 5
    3 6 8
    6 2 7
    2 1 2
    1 4 1
    2 4 3
    2 3 3


*/

