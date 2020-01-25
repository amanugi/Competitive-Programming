#include<bits/stdc++.h>
using namespace std;

bool HasDfsPath(int** edges,int V,int v1,int v2,bool* visited){
    
    visited[v1] = true;
    
    if(edges[v1][v2]==1)
        return true;
    
    for(int i=0;i<V;i++){
        if(edges[v1][i]==1 && !visited[i]){
             if(HasDfsPath(edges,V,i,v2,visited))                // Recursive Call 
                 return true;
        }
    }
    return false;
}

bool DFS(int** edges,int V,int V1,int V2){
    bool* visited = new bool[V]();
    
    // for(int i=0;i<V;i++){
    //      visited[i] = false;   
    // }
    HasDfsPath(edges,V,V1,V2,visited);
}

int main() {
    int V, E;
    cin >> V >> E;
    
    int** edges = new int*[V];
    for(int i=0;i<V;i++){
        edges[i] = new int[V];
        for(int j=0;j<V;j++){
            edges[i][j] = 0;
        }
    }
    
    while(E--){
        int a,b;
        cin >> a >> b;
        edges[a][b] = 1;
        edges[b][a] = 1;
    }
    
    int V1,V2;
    cin >> V1 >> V2;
    
    if(DFS(edges,V,V1,V2))
        cout << "true" << endl;
    else 
        cout << "false" << endl;

  return 0;
}
