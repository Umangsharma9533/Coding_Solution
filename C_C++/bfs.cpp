#include <stdio.h>
#include<bits/stdc++.h> 
#include<vector>
#include <queue>
using namespace std;
void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 
void printGraph(vector<int>adj[],int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<i<<"Edges connected are";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<"->";
        }
        cout<<endl;
    }
}
void printArray(int a[],int v)
{
    
    for(int i=0;i<v;i++)
    {
        cout<<i<<"level"<<"   "<<a[i]<<" ";
        cout<<endl;
    }
}
void BFS(vector<int>adj[],int s,int v)
{
    int level[v];
    int visited[v]={0};
    queue<int>q;
    q.push(s);
    level[s]=0;
    visited[s]=1;
   
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=0;i<adj[p].size();i++)
        {
            if(visited[adj[p][i]]==0)
            {
                level[adj[p][i]]=level[p]+1;
                q.push(adj[p][i]);
                visited[adj[p][i]]=1;
            }
        }
    }
    printArray(level,v);
}
int main()
{
    int V=5;
    int u,v;
    vector<int>adj[V];
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    printGraph(adj,V);
    int s;
    cin>>s;
    BFS(adj,s,V);
    return 0;
}
