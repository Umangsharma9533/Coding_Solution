#include <iostream>
using namespace std;
struct Node{
    int val;
    Node* next;
    
};
struct Edge
{
    int src,dest;
};
class Queue
{
    public:
    int rear,front,capacity;
    int *arr;
    Queue(int c)
    {
        front=0;
        rear=0;
        capacity=c;
        arr=new int;
    }
    ~Queue()
    {
        delete[] arr;
    }
    public:
    void enqueue(int data)
{
    if (rear==capacity)
    {
        cout<<"Stack overflow";
        return;
    }
    else
    {
    arr[rear]=data;
    rear++;
    }
    return;
}
void dequeue()
{
    if(front==rear)
    {
        cout<<"Stack underflow";
        return;
    }
    else
    {
        for(int i=0;i<rear-1;i++)
        {
            arr[front]=arr[front+1];
        }
        rear--;
        return;
    }
}
void printQueue()
{
    for(int i=0;i<rear;i++)
    {
        cout<<arr[i];
    }
}
    int top();
};

class Graph{
    Node * addAdjNode(int des,Node *head)
    {
        Node *new_node=new Node;
        new_node->val=des;
        new_node->next=head;
        return new_node;
    }
    public:
    Node ** head;
    int N;
    Graph(Edge edge[],int n,int N)
    {
        head=new Node*[N];
        this->N=N;
        for(int i=0;i<N;i++)
        {
            head[i]=nullptr;
        }
        for(int i=0;i<n;i++)
        {
            int src=edge[i].src;
            int destina=edge[i].dest;
            Node *new_node=new Node;
            new_node=addAdjNode(destina,head[src]);
            head[src]=new_node;
        }
    }
    ~Graph()
    {
        for(int i=0;i<N;i++)
        {
            delete[]head[i];
        }
        delete head;
    }
};
void printlist(Node *ptr,int i)
    {
        while (ptr!=nullptr)
        {
            cout<<"("<<i<<","<<ptr->val<<")";
            ptr=ptr->next;
        }
        cout<<endl;
    }
int main()
{
    Queue queue(3);
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.printQueue();
    Edge edges[] =
	{
		// pair (x, y) represents edge from x to y
		// (x, y, w) -> edge from x to y having weight w
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
		

		// print all its neighboring vertices
		printlist(graph.head[i],i);
	}

    return 0;
}