
using namespace std;

struct Node{
    int data;
    Node* next;
};


void InsertAfterThisValue(int position,int value,Node* &head)
{
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = NULL;

  if (head == NULL) 
  {
      cout << "List is empty - cannot insert after a value.\n";
      delete newNode;
      return;
  }
  
  Node* current = head;
  
  while(current != NULL)
  {
    if(current->data == position)
    {
      newNode->next = current->next;
      current->next = newNode;
      return;
    }
    
    current = current->next;
  }
  
  cout << "Value " << position << " not found.\n";
  delete newNode;
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
  
  InsertAfterThisValue(10,15,head);
  

    return 0;
}
