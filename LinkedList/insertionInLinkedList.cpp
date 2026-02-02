#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
    void insertAtBeginning(Node *& head,int value){
        Node *newNode =new Node(value);
        newNode->next=head;
        head=newNode;
    }
    void insertAtEnd(Node *&head,int value){
        if(head==NULL){
            head=new Node(value);
            return;
        }
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new Node(value);
    }
    void insertAtPosition(Node *& head,int value,int pos){
        if(pos==1){
            insertAtBeginning(head,value);
            return;
        }else{
            Node *temp=head;
            for(int i=1;i<pos-1;i++){
                temp=temp->next;
            }
            Node * newNode=new Node(value);
            newNode->next=temp->next;
            temp->next=newNode;
        }
    }
    void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
};
int main(){
    Node *head=new Node(10);
    head->insertAtBeginning(head,5);
    head->insertAtEnd(head,15);
    head->insertAtEnd(head,30);
    head->insertAtPosition(head,25,4);
    head->printList(head);
    return 0;
}