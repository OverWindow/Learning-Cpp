#include <iostream>
#include <vector>
using namespace std;

typedef struct node{
	int value;
	node *next;
}node;

typedef struct {
	int size;
	node *top;
}stack;

void push(stack *stk, int d) {
	node *tmp = new node;
	
	if(stk -> size == 0) {
		stk -> top = tmp;
		tmp -> next = NULL;
	} else {
		tmp -> next = stk -> top;
		stk -> top = tmp;
	}
	stk -> size += 1;
	tmp -> value = d;
	return;
}

int pop(stack *stk) {
	node *tmp = new node;
	int d;
	
	if(stk->size == 0) {
		cout << "No node available to push" << endl;
		return -1;
	}
	
	d = stk -> top -> value;
	tmp = stk -> top;	
	stk -> top = stk -> top -> next;
	stk -> size -= 1;
	
	delete(tmp);
	return d;
}

int size(stack *stk) {
	return stk -> size;
}

int top(stack *stk) {
	return stk -> top -> value;
}


int main(void) {
	
	stack stk;
	vector<int> list = {1,2,3,4,5,6};
	
	stk.size = 0; 
	
	for(int i = 0; i < list.size(); i++) {
		push(&stk,list[i]);
	}
	
	for(int i = 0; i < list.size(); i++) {
		cout << "poped from stack: " << pop(&stk) << endl;
	}
	
	return 0;
}
