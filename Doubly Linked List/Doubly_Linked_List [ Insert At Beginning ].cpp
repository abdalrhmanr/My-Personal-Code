
using namespace std;

struct Node{
  int data;
  Node* next;
  Node* prev;
};


void InsertAtBeginning(int value, Node * &head)
{
  
  Node* newNode = new Node();
  newNode->data = value;
  
  newNode->next = head;
  newNode->prev = NULL;
  
  if(head != NULL)
  {
    head->prev = newNode;
  }

  head = newNode;
}



int main() 
{
    Node* head = NULL;
    
    Node* Node1 = new Node();
    Node* Node2 = new Node();
    Node* Node3 = new Node();
   
   //-----------------------
   
   Node1->data = 10;
   Node2->data = 20;
   Node3->data = 30;
   
   //------------------------
   
   Node1->next = Node2;
   Node1->prev = NULL;
   
   Node2->next = Node3;
   Node2->prev = Node1;
   
   Node3->next = NULL;
   Node3->next = Node2;
   
   head = Node1;
   //----------------
 
  InsertAtBeginning(20,head);
 
 
     return 0;
}
