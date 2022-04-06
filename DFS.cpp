#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>adjlist[100];
    vector<int>t;
    int node1,node2,n,d,e,visited[100]={0},par[100]={0},level[100]={0},edge,s,v;
    cout<<"Enter the node:";
    cin>>n;
    cout<<"Enter the edge:";
    cin>>edge;
    for(int i=0;i<edge;i++)
    {

        cin>>node1>>node2;
        adjlist[node1].push_back(node2);
        adjlist[node2].push_back(node1);

    }
   
    cout<<"START:";
    cin>>s;
    stack<int>stk;
   stk.push(s);

  vector<int> dfs;

  while(!stk.empty())
  {
      int top=stk.top();
      stk.pop();

      if(visited[top]==false)
      {
          visited[top]=true;
           dfs.push_back(top);
      }

      for(int  i=0;i<adjlist[top].size();i++)
      {
          if(visited[adjlist[top][i]]==false)
          {
              stk.push(adjlist[top][i]);
          }
      }
  }

  for(int i=0;i<n;i++)
  {
      cout<<dfs[i]<<" ";
  }
  cout<<"\n";
  return 0;
}
