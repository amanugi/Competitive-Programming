#include <iostream>
using namespace std;

bool Is_Connected(int** edges,int V,int sv,bool* visited){
    visited[sv] = true;
    
    for(int i=0;i<V;i++){
        if(edges[sv][i] == 1 && !visited[i]){
            Is_Connected(edges,V,i,visited);
        }
    }
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
    for(int i=0;i<E;i++){
        int a,b;
        cin >> a >> b;
        edges[a][b] = 1;
        edges[b][a] = 1;
    }
    
    bool* visited = new bool[V];
    for(int i=0;i<V;i++){
        visited[i] = false;
    }
    
    Is_Connected(edges,V,0,visited);
    
    int flag=0;
    for(int i=0;i<V;i++){
        if(visited[i]==false){
             flag = 1;
             break;
        }
    }
    
    if(flag==1)
         cout<<"false";
        else
            cout<<"true";
    
  return 0;
}
