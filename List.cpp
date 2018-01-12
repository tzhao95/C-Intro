#include "List.h"
#include <cstdlib>

#include <iostream>

using namespace std;

List::List() { //constructor function
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void List::AddNode(int addData){
	nodePtr n = new node;
	n->next = NULL;
	n->data = addData;

	if(head != NULL) {
		curr = head;
		while(curr->next != NULL){
			curr = curr->next;
		}
		curr->next = n;
	}
	else {
		head = n;
	}
}

void List::DeleteNode(int delData){
	nodePtr delPtr = NULL;
	temp = head;
	curr = head;
	while(curr->next != NULL && curr->data != delData) {
		temp = curr;
		curr = curr->next;
	}
	if(curr->next == NULL) {
		cout << delData << " isn't here" << endl;
		delete delPtr;
	}
	else {
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;
		delete delPtr;
		cout << delData << "has been deleted" << endl;
	}
}

void List::PrintList() {
	curr = head;
	while(curr != NULL) {
		cout << curr->data << endl;
		curr = curr->next;
	}
}