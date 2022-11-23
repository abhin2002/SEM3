#include<iostream>
using namespace std;

int White = 0;
int Gray = 1;
int Black = 2;

class Graph{
    public:
    int n;
    bool** adj;
    int color;
    
    
    Graph(int n);
    void addEdge(int a,int b){
        adj[a-1][b-1] = true;
    }
    void print();
    void setColor(int i){
        color=i;
    }
};

Graph::Graph(int n){
    this->n = n;
    adj = new bool*[n];

    for(int i=0;i<n;i++)
        adj[i] = new bool[n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            adj[i][j] = false;
        }
    } 
}

void Graph::print(){

    cout<<"\nG : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    } 
}

void BFS(Graph G,int s){
    for(int i=0;i<G.n;i++){
        for(int j=0;j<G.n;j++){
            G.adj[i][j].setColor = false;
        }
    }
}
int main(){

    Graph g(6);
    
    g.addEdge(1,2);
    g.addEdge(1,4);
    g.addEdge(2,5);
    g.addEdge(4,2);
    g.addEdge(4,5);
    g.addEdge(3,5);
    g.addEdge(3,6);
    g.addEdge(6,6);

    g.print();
    return 0;
}
