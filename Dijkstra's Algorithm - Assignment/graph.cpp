#include "graph.h"

//DO NOT TOUCH
Graph::Graph()
{

}

//DO NOT TOUCH
void Graph::AddVertex(int key){
    vertex_list_.push_back(new Vertex(key));
    num_vertexes_++;
}

//DO NOT TOUCH
void Graph::AddEdge(char from, char to, int weight){
    Vertex *vfrom = GetVertex(from);
    Vertex *vto = GetVertex(to);
    vfrom->AddEdge(vto, weight);
}

//DO NOT TOUCH
Vertex* Graph::GetVertex(char key){
    int i = 0;
    while(i < num_vertexes_){
        if(vertex_list_[i]->GetKey() == key){
            return vertex_list_[i];
        }
        i++;
    }

    AddVertex(key);
    return vertex_list_[i];
}

bool Graph::IsAdjacent(char from, char to){
    Vertex *vfrom = GetVertex(from);

    if(vfrom->HasEdge(to)){
        return true;
    }else{
        return false;
    }
}

void Graph::PrintNeighbors(char vertex){
    Vertex *vfrom = GetVertex(vertex);

    for(int i = 0; i < vfrom->GetNumEdges(); i++){
        std::cout<<vfrom->GetEdge(i)->GetTo()->GetKey()<<" ";
    }
    std::cout<<std::endl;
}

Vertex* Graph::DijkstrasAlgorithm(char start, char end){
    //The current vertex you are working on.
    Vertex* currentVertex = nullptr;

    //How many vertices we've visited.
    int visited = 0;

    //An array that keeps track of the already visited vertices.
    int visitedIndex[num_vertexes_] = {0};

}
