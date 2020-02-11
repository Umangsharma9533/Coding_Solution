
#include <iostream>
using namespace std;
struct Node{
    int val;
    Node* next;
};
struct Edge{
    int src,dest;
};
class Graph{
    Node* getAdjustedNode(int dest,Node *head)
    {
        Node *new_node=new Node;
        new_node->val=dest;
        new_node->next=head;
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
            Node * new_node= new Node;
            new_node=getAdjustedNode(destination,head[source]);
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
void printList(Node* ptr){
        while(ptr!=NULL)
        {
            cout<<ptr->val<<"->";
            ptr=ptr->next;
        }
        cout<<endl;
    }

int main()
{
    Edge edges[] =
	{
		// pair (x, y) represents edge from x to y
		{ 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 1 },
		{ 3, 2 }, { 4, 5 }, { 5, 4 }
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
		// print given vertex
		cout << i << " --";

		// print all its neighboring vertices
		printList(graph.head[i]);
	}

    return 0;
}
