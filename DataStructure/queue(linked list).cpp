#include <iostream>
using namespace std;

typedef struct node{
	int *value;
	node *next;
}node;

typedef struct {
	int size;
	node *front;
	node *back;
}queue;

void push(queue *q, int d) {
	node *tmp = new node;
	
	if(q -> size == 0) {
		queue -> front = tmp;
		queue -> back = tmp;
		tmp -> value = d;	
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	queue q;
	q.size = 0;
	
	
	
}
