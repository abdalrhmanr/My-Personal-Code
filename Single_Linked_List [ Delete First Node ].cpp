using namespace std;

struct Node{
  int data;
  Node* next;
};

void DeleteFirstNode(Node * &head)
{
  
   Node* Current = head;
  
  if(head == NULL)
  {
    return;
  }
  
 
   head =  Current->next;
   delete Current;
   return;
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
 
DeleteFirstNode(20,head);


}
