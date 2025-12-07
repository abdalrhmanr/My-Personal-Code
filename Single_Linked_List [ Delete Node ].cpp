
using namespace std;

struct Node{
  int data;
  Node* next;
};



void DeleteNode(int value, Node * &head)
{
  
   Node* Current = head, * Prev= head;
  
  if(head == NULL)
  {
    return;
  }
  
  if(Current->data == value)
  {
   head =  Current->next;
   delete Current;
   return;
  }
  
  while(Current != NULL && Current->data != value)
  {
    Prev = Current;
    Current = Current->next;
  }
  
  if (Current == NULL) return;
  
  Prev->next = Current->next;
  delete Current;
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
 Node2->next = Node3;
 Node3->next = NULL;
 
 head = Node1;
 //----------------
 
DeleteNode(20,head);
 
 
 

    cout << IsNodeFound << "\nHello, World!";
    return 0;
}
