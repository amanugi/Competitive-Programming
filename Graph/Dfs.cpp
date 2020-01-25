#include <bits/stdc++.h>
#include <queue>
using namespace std;

 void print_DfS(int** edges , int V , int sv , int* visited){        // sv -> starting vertex
    
     cout<<sv<<endl;
     visited[sv] = true;
    
     for(int i=0;i<V;i++){
          if(i == sv){
              continue;
          }   
         
         if(edges[sv][i] == 1 && !visited[i]){
           /*  if(visited[i]){
                 continue;
             } */
            
           print_Dfs(edges,V,i,visited);                  //  Recursive Call
         }
     }
 }


void DFS(int**edges , int V){
    bool* visited = new bool[V];
    for(int i=0;i<V;i++){
        visited[i] = false;
    }
        
    for(int i=0;i<V;i++){
        if(!visited[i]){                             // Graph may have more than 1 component , 
                                                 // so we should call print_BFS fun for every unvisited node 
            print_Dfs(edges , V , i , visited);
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
        edges[i] = new int[V];        
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
    

    DFS(edges,V); 
    
    for(int i=0;i<V;i++){
        delete [] edges[i];
    }
    
    delete [] edges;
}

