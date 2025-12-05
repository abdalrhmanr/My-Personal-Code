using namespace std;

struct Node{
    int data;
    Node* next;
    
};


void insertAtBeginning(int value,Node*& head)
{
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = NULL;

  if (head == NULL) 
  {
      head = newNode;
      return;
  }
  
  newNode->next = head;
  head = newNode;
}
  
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
  
  insertAtBeginning(40,head);
  
  
  
    cout << Node3->next->data;
    
    
    return 0;
}
