// deleting-Head-of-singly-linked-list
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*next;
	
};
//in printALL function i give a peremeter (Node*ptr) that means node pointer, and we point ptr to Head.  
void printAll(Node*ptr){//pointes to head of link list
	while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
Node* delete_head(Node* Head){
 // Move the head pointer to the next node 
   Node* temp = Head;  //temp pointer equal to head
    Head = Head->next;
    delete temp;
    return Head;
}



int main(){
	//creating nodes
	struct Node*Head=new Node;//node one
	struct Node*second=new Node;//node two
	struct Node*third=new Node;//node third
	//giving data to nodes  
	Head->data=1;
	second->data=2;
	third->data=3;
	//giving values to pointer next
    Head->next=second;
	second->next=third;
	third->next=NULL;
	cout<<" Linked list before deletion : "<<endl;
    printAll(Head);
	cout<<" Linked list After deletion : "<<endl;

	Head=delete_head(Head);
    printAll(Head);
    
    
    
	return 0;
}
  ![image](https://user-images.githubusercontent.com/96110915/162791614-55f8e45c-9d14-47f3-8f2d-019e0994ca12.png)


