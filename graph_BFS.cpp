#include<iostream>
#include<list>
using namespace std;
class Graph{
    int V;
    list<int> *adj;
    public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
};

Graph::Graph(int V){
    this->V=V;
    adj = new list<int>[V];

}
void Graph::addEdge(int v, int w){
    // directied garph
    adj[v].push_back(w);
    // undirected graph;
    //adj[w].push_back(v);
}

void Graph::BFS(int s){
    bool *visited = new bool[V];   
    // intial no value visited so assign to zero value 
    for(int i = 0; i<V; i++)
        visited[i] = false;
        list<int>queue;
        // if element is visted then fill true
        visited[s] = true;
        queue.push_back(s);
        // iserting the element so need of iterartor
        list<int>::iterator i;
        while(!queue.empty()){
            s = queue.front();
            cout<<s<<" ";
            queue.pop_front();
            for(i = adj[s].begin(); i!=adj[s].end();i++){
                if(!visited[*i]){
                    visited[*i] = true;
                    queue.push_back(*i);
                }
            }
        }

    

}

int main(){
    
    int v,snode,enode,temp;
    // v - vertices 
    // snode - starting node
    // enode - ending node
    cin>>v;
    if(v == 0){
        cout<<"graph doesn't exist";
        return 0;
    }
    Graph g(v);
    cin>>snode>>enode;
    while(snode != -1 && enode != -1){
        g.addEdge(snode,enode);
        cin>>snode>>enode;
    }
    cin>>temp;
    cout<<"BFS :";
    
    g.BFS(temp);
    return 0;

}