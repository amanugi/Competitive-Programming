#include <bits/stdc++.h>
#include <queue>
using namespace std;

void print_BFS(int** edges , int V , int sv, bool* visited){   // sv -> Starting Vertex
    
    queue<int> pendingVertices;
    
    pendingVertices.push(sv);
    visited[sv] = true;
    
    while(!pendingVertices.empty()){
        
        int currentVertex = pendingVertices.front();
        pendingVertices.pop();
        cout<<currentVertex<<" ";
        
        for(int i=0;i<V;i++){
           if(edges[currentVertex][i] == 1 && !visited[i]){        //  checking for adjacent vertices
               pendingVertices.push(i);
               visited[i] = true;
           }
        }
    }
}

void BFS(int**edges , int V){
    bool* visited = new bool[V];
    for(int i=0;i<V;i++){
        visited[i] = false;
    }
        
    for(int i=0;i<V;i++){
        if(!visited[i]){                             // Graph may have more than 1 component , 
                                                 // so we should call print_BFS function for every unvisited node 
            print_BFS(edges , V , i , visited);
        }
    }
    delete [] visited;
}

int main()
{
  int V, E;
  cin >> V >> E;

 int** edges = new int*[V];
    for(int i=0;i<V;i++){
        edges[i] = new int[V];         // Adjacency Matrix
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
     
    BFS(edges,V);
    
    for(int i=0;i<V;i++){
        delete [] edges[i];
    }
    
    delete [] edges;
}
