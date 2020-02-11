#include <iostream>
using namespace std;
struct Node{
    int val,cost;
    Node* next;
};
struct Edge{
    int src,dest,weight;
};
class Graph{
    Node* getAdjustedNode(int dest,int weight,Node *head)
    {
        Node *new_node=new Node;
        new_node->val=dest;
        new_node->next=head;
        new_node->cost=weight;
        return new_node;
    }
    int N;
    public:
    Node **head;
    Graph(Edge edges[],int n , int N){
        head=new Node*[N];
        this->N =N;
        for(int i=0;i<N;i++)
        {
            head[i]=nullptr;
        }
        for (unsigned i=0;i<n;i++)
        {
            int source=edges[i].src;
            int destination=edges[i].dest;
            int wt=edges[i].weight;
            Node * new_node= new Node;
            new_node=getAdjustedNode(destination,wt,head[source]);
            head[source]=new_node;
        }
    };
    ~Graph()
    {
        for(int i=0;i<N;i++)
        {
            delete[] head[i];
        }
        delete head;
    };
};
void printList(Node* ptr,int i){
        while(ptr!=NULL)
        {
            cout<<"("<<i<<","<<ptr->val<<","<<ptr->cost<<")";
            ptr=ptr->next;
        }
        cout<<endl;
    }

int main()
{
    Edge edges[] =
	{
		// pair (x, y) represents edge from x to y
		// (x, y, w) -> edge from x to y having weight w
		{ 0, 1, 6 }, { 1, 2, 7 }, { 2, 0, 5 }, { 2, 1, 4 },
		{ 3, 2, 10 }, { 4, 5, 1 }, { 5, 4, 3 }
	};

	// Number of vertices in the graph
	int N = 6;

	// calculate number of edges
	int n = sizeof(edges)/sizeof(edges[0]);

	// construct graph
	Graph graph(edges, n, N);

	// print adjacency list representation of graph
	for (int i = 0; i < N; i++)
	{
		

		// print all its neighboring vertices
		printList(graph.head[i],i);
	}

    return 0;
}
