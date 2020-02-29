#include<bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;

void BFS(int**edges,int n,int sv ,bool* visited,vector<int> &v)
{
    queue<int> pendingVertices;
 
    pendingVertices.push(sv);
    visited[sv]=true;
    v.push_back(sv);
    
    while(!pendingVertices.empty())
    {
        int currentVertex=pendingVertices.front();
         pendingVertices.pop();
        //cout<<current<<" ";
        for(int i=0;i<n;i++)
        {
            if(i==currentVertex)
                 continue;
            if(edges[currentVertex][i] == 1 && !visited[i])
            {
                v.push_back(i);
                pendingVertices.push(i);
                visited[i]=true;
            }
        }
    }
}

void path(int** edges, int n , bool*visited)
{
    for(int i=0;i<n;i++)
    { 
        if(!visited[i])
        {   
          vector<int> ans;
            
         BFS(edges,n,i,visited,ans);
         sort(ans.begin(),ans.end());
            
         for(int i=0;i<ans.size();i++)
             cout<<ans[i]<<" ";
         cout<<endl;                
        }
    }          
}

int main()
{
    int n,e;
    cin>>n>>e;
 
    int**edges = new int*[n];
    for(int i=0;i<n;i++)
    {
        edges[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            edges[i][j]=0;
        }
    }
    while(e--)
    {
        int l,r;
        cin>>l>>r;
        edges[l][r]=1;
        edges[r][l]=1;
    }
 
    bool*visited=new bool[n];
    for(int i=0;i<n;i++)
        visited[i]=false;
 
    path(edges,n,visited);
    
    return 0;
}
