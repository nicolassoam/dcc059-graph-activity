/**************************************************************************************************
 * Implementation of the TAD Graph
**************************************************************************************************/

#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include "Node.h"
#include <fstream>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <vector>

using namespace std;

class Graph{

    //Atributes
    private:
        int order;
        int number_edges;
        bool directed;
        bool weighted_edge;
        bool weighted_node;
        Node* first_node;
        Node* last_node;
        map<int, bool> verified; 



    public:
        //Constructor
        Graph(int order, bool directed, bool weighted_edge, bool weighted_node);
        //Destructor
        ~Graph();
        //Getters
        int getOrder();
        int getNumberEdges();
        bool getDirected();
        bool getWeightedEdge();
        bool getWeightedNode();
        Node* getFirstNode();
        Node* getLastNode();
        //Other methods
        void insertNode(int id);
        void insertEdge(int id, int target_id, float weight);
        void removeEdge(int id, int target_id);
        void removeNode(int id);
        bool searchNode(int id);
        Node* getNode(int id);
        bool depthFirstSearch(int initialId,int targetId);
        void breadthFirstSearch(ofstream& output_file);
        Graph* getComplement();
        Graph* getSubjacent();
        Graph* getUnion(Graph* graph);
        bool hasCircuit();
        bool connectedGraph();
        float** floydWarshall();
        float* dijkstra(int id);
        void writeDotFile(string file_name);
        set<pair<int,int>> GreedyConstructive();

    private:
        //Auxiliar methods
        
};

#endif // GRAPH_H_INCLUDED