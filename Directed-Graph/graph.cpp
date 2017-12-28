#include "graph.h"

//DO NOT TOUCH
Graph::Graph()
{

}

//DO NOT TOUCH
void Graph::AddVertex(int key){                     //add new vertex to graph
    vertex_list_.push_back(new Vertex(key));
    num_vertexes_++;
}

//DO NOT TOUCH
void Graph::AddEdge(char from, char to, int weight){
    Vertex *vfrom = GetVertex(from);
    Vertex *vto = GetVertex(to);
    vfrom->AddEdge(vto, weight);                    //adds edge from origin to destination, gives weight
}

//DO NOT TOUCH
Vertex* Graph::GetVertex(char key){
    int i = 0;
    while(i < num_vertexes_){                   //to loop through vertex_list
        if(vertex_list_[i]->GetKey() == key){   //returns vertex from list if one matches key given
            return vertex_list_[i];
        }
        i++;                                    //increments key
    }

    AddVertex(key);
    return vertex_list_[i];
}

bool Graph::IsAdjacent(char from, char to){
    Vertex *vfrom = GetVertex(from);
    Vertex *vto = GetVertex(to);
    //HasEdge expects a character, not a Vertex pointer
    //Also, be sure to put this in an if and return the appropriate boolean value
    vfrom->HasEdge(vto);        //hits error here
}

void Graph::PrintNeighbors(char vertex){
    Vertex *home = GetVertex(vertex);
    //Instead of num_vertexes_, look and see what functions home has available to it.
    //Is there a better integer we could use there?
    for(int i=0; i<num_vertexes_; i++){
        //Once you get the above figured out, access the array (vector) in home at a specific index.
        //Look at GetEdge(int index);
        if(vertex_list_[i]->HasEdge(home))  //requires HasEdge to work, haven't gotten it to
            return vertex_list_[i];
    }

}
