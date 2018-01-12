#ifndef LIST_H
#define LIST_H

class List {
private:
	/*
	struct node{
		int data;
		node* next; //this stores the address of then next node
	};

	typdef struct node* nodePtr;
	*/
	//above code can be rewritten as below shortened
	typedef struct node{
		int data;
		node* next;
	}* nodePtr;

	nodePtr head;
	nodePtr curr;
	nodePtr temp;
public:
	List();//constructor function. used to define the variables of the class
	void AddNode(int addData);
	void DeleteNode(int delData);
	void PrintList();
};

#endif
