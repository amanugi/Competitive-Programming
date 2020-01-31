#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int>* getDFSPath(int**edges,int V,bool*visited,int v1,int v2){
    if(v1==v2){
       vector<int>* ans=new vector<int>;            // pointer vector
        ans->push_back(v2);
        return ans;
    }
    visited[v1]=true;
    for(int i=0;i<V;i++){
        if(edges[v1][i]==1 && !visited[i]){
            vector<int>* ans=getDFSPath(edges,V,visited,i,v2);
            if(ans!=NULL){
                ans->push_back(v1);
                return ans;
            }
        }
    }
    return NULL;
}

int main()
{
  int V, E;
  cin >> V >> E;

 int** edges = new int*[V];
    for(int i=0;i<V;i++){
        edges[i] = new int[V];              // Adjacency Matrix
        for(int j=0;j<V;j++){
            edges[i][j] = 0;
        }
    }
    
    for(int i=0;i<E;i++){
        int a,b;
        cin >> a >> b;
        edges[a][b] = 1;
        edges[b][a] = 1;
    }
    
    int V1,V2;
    cin >> V1 >> V2;
    bool*visited=new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    vector<int>* ans=getDFSPath(edges,V,visited,V1,V2);          
    if(ans!=NULL){
        for(int i=0;i<ans->size();i++){
            cout<<ans->at(i)<<" ";                         //  at(i) is same as a[i]
        }
    }

  return 0;
}
