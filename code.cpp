#include <iostream>

using namespace std;

 // Node Template
class Node{
public:
	int data;
	Node* next;
	bool isHead = false;
	
};



int main(){
	int r,s,t;

	cout << "Please enter the data for the linked list: ";
	// User enters data to be added to the linked list
	cin>>r>>s>>t;

	cout << "Elements have been appended to the linked list" << endl;

	//Initialization of Nodes

	Node* root = NULL;
	Node* sec = NULL;
	Node* third = NULL;

	root = new Node();
	root->data = r;
	root->next = sec;
	root -> isHead = true;

	sec = new Node();
	sec->data = s;
	sec->next= third;

	third = new Node();
	third -> data = t;
	third -> next= NULL;

	// In order to print linked list

	cout << root->data << " -> " << sec->data << " -> " << third ->data;

}

