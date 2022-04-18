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
   Node* temp = Head;  // head move to next
    Head = Head->next;
    delete temp;
    return Head;
}
Node* deleteAtIndex(Node* Head,int index){
   Node* p = Head; 
   Node* q = Head->next; 
   for(int i=0;i<index-1;i++){//means p at zero and q at 1 and we we delete q
    p=p->next;
   	q=q->next;
   }
    p->next = q->next;
    delete q;
    return Head;
}
Node* deleteAtLast(Node* Head){
   Node* p = Head; 
   Node* q = Head->next; 
   while(q->next!=NULL){
    p=p->next;
   	q=q->next;
   }
    p->next = NULL;
    delete q;
    return Head;
}

Node* deleteAtvalue(Node* Head,int value){
   Node* p = Head; 
   Node* q = Head->next; 
  while(q->data!=value && q->next!=NULL){//means p at zero and q at 1 and we we delete q
    p=p->next;
   	q=q->next;
   }
    p->next = q->next;
    delete q;
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
	
	deleteAtvalue(Head,2);
//Head=deleteAtLast(Head);	
//Head=deleteAtIndex(Head,1);
//	Head=delete_head(Head);
    printAll(Head);
 
	return 0;
}

