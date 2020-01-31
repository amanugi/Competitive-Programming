#include <bits/stdc++.h>
#include <queue>
using namespace std;

void getBFSPath(int** edges,int V,int v1,int v2,bool* visited){
    queue<int> q;
    q.push(v1);
    visited[v1] = true;
    int parent[V];
    
    while(!q.empty()){
        
        int currentVertex = q.front();
       // q.pop();
        if(currentVertex==v2){
			int path = currentVertex;
			while(path!=v1){
				cout<<path<<" ";
				path = parent[path];
			}
			cout<<v1<<endl;
        }
        q.pop();
        
        for(int i=0;i<V;i++){
            if(edges[currentVertex][i]==1 && !visited[i]){
                q.push(i);
                visited[i] = true;
                parent[i] = currentVertex;
            }
        } 
    }

   // return 0;
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
    bool* visited = new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    
    if(edges[V1][V2]){
        cout<<V2<<" "<<V1;
    }
    else{
        getBFSPath(edges,V,V1,V2,visited);
    }

  return 0;
}
