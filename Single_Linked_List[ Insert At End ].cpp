
struct Node{
    int data;
    Node* next;
  
};


void InsertAtEnd(int value,Node* &head)
{
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = NULL;
  
  if (head == NULL) 
  {
      head = newNode;
      return;
  }
  
  Node* current = head;
  
  while(current->next != NULL){
    current = current->next;
  }
  
  current->next = newNode;
}


int main() 
{
  Node* head;
  
  Node* Node1 = new Node();
  Node* Node2 = new Node();
  Node* Node3 = new Node();
  //------------------------------------
  Node1->data = 10;
  Node2->data = 20;
  Node3->data = 30;
  //------------------------------------
  Node1->next = Node2;
  Node2->next = Node3;
  Node3->next = NULL;
  
  head = Node1;
  
  InsertAtEnd(40,head);

    return 0;
}
