#include "graph.hpp"
#include "priority_queue.hpp"
#include <iostream>
#include "algorithm.hpp"

typedef int typ;

void main()
{
	cout << "Enter the number of vertexes" << endl;
	int n;
	cin >> n;
	cout << "Enter the number of edges" << endl;
	int m;
	cin >> m;
	Graph<typ> *graph = new Graph<typ>(n, m);
	typ *P = new typ(n); 
	for (int i = 0; i <= n;i++)
		P[i] = 0;
	cout << "Enter min and max value" << endl;
	typ min, max;
	cin >> min;
	cin >> max;
	graph->CreateGraph(min, max);
	system("cls");
	cout << "Graph: " << endl << endl;
	graph->Print();
	cout << "Enter the first vertex" << endl;
	int a;
	cin >> a;
	typ *dist = Algorithm<typ>::Dijkstra(a, P, graph);
	cout << "Result: " << endl << endl;
	for (int i = 0; i<n;i++)
		cout << i << ' ';
	cout << "Vertexes " << endl << endl;
	for (int i = 0; i < n; i++)
		if (dist[i] == max_heap)
			cout << 0 << ' ';
		else
			cout << dist[i] << ' ';
	cout << "Shortest ways " << endl << endl;
	for (int i = 0;i<n;i++)
		cout << P[i] << ' ';
	cout << "Previous vertexes " << endl << endl;

}
