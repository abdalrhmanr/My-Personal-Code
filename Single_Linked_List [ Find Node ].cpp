using namespace std;

struct Node{
  int data;
  Node* next;
};

bool FindNode(int value, Node * head)
{
  
  if(head == NULL)
  {
    return true;
  }
  
  while(head != NULL)
  {
    if(head->data == value)
    {
      return 1;
    }
    
    head = head->next;
  }
  
  return false;
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
 
 bool IsNodeFound = FindNode(10,head);
 
cout << IsNodeFound << "\nHello, World!";
  
    return 0;
}
