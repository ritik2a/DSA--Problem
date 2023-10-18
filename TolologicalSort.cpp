//C++ program to implement Topological sort on a Directed Acyclic Graph

#include<bits/stdc++.h>
using namespace std;

void topoSort(vector<int> graph[],bool visited[],stack<int> &st,int i)
{
    visited[i]=true;
    int n=graph[i].size();
    for(int j=0;j<n;j++)
{
    if(!visited[graph[i][j]])
    topoSort(graph,visisted,st,graph[i][j]);
}
st.push(i);
}

void topologicalsort(vector<int> graph[],int v)
{
    bool visited[v];
    stack<int> st;
    for(int i=0;i<v;i++)
    visited[i]=false;
    for(int i=0;i<v;i++)
{
    if(!visited[i])
      topologicalsort(graph,visited,st,i);
}
while(!st.empty())
{
  cout<<st.top()<<" ";
  st.pop();
}
}

int main()
{
    int v,e,s,d;
    cin>>v>>e;
    vector<int> graph[v];
    for(int i=0;i<e;i++)]
{
    cin>>s>>d;
    graph[s].push_back(d);
}
topologicalsort(graph,v);
return 0;
}
