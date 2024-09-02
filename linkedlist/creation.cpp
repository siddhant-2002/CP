#include <bits/stdc++.h>
#include "ll.h"
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

node* insertAtHead(node* &head, int val){
    node* a = new node(val);
    a->next = head;
    head = a;
    return head;

}

node* insertAtTail(node* &head, int val){
    node* a = new node(val);
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = a;

    return head;
}

void insertAtPosition(node* &head, int val, int pos){

    node* a = new node(val);
    int position=1;
    if(pos == 1){
        insertAtHead(head,val);
    }
    node* temp = head;
    node*forward=NULL;
    while(position!=pos-1){
        temp = temp->next;
        forward = temp->next;
        position++;
    }
    temp->next = a;
    a->next = forward;
}

node* reverse(node* &head){
    
    if(head-> next == NULL || head  == NULL){
        return head;
    }

    node* newhead = reverse(head->next);

    node* front = head->next;

    front->next = head;
    head->next = NULL;

    return newhead;

}

node* reverseLinkedList(Node *head)
{
   // Initialize'temp' at
   // head of linked list
   Node* temp = head;  
   
   // Initialize pointer 'prev' to NULL,
   // representing the previous node
   Node* prev = NULL;  
   
   // Traverse the list, continue till
   // 'temp' reaches the end (NULL)
   while(temp != NULL){  
       // Store the next node in
       // 'front' to preserve the reference
       Node* front = temp->next;  
       
       // Reverse the direction of the
       // current node's 'next' pointer
       // to point to 'prev'
       temp->next = prev;  
       
        // Move 'prev' to the current
        // node for the next iteration
       prev = temp;  
       
        // Move 'temp' to the 'front' node
        // advancing the traversal
       temp = front; 
   }

}
void print(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    node *a = new node(10);
    // cout << a->data << endl;

    node* head = a;

    insertAtHead(head, 20);
    insertAtHead(head, 60);
    insertAtTail(head,30);
    insertAtPosition(head,40,3); 
    print(head);
    cout << endl;
    node* reversehead = reverse(head);

    print(reversehead);
    
}