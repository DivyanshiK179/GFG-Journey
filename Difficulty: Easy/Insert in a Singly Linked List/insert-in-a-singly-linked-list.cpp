/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
}; */

class Solution {
  public:
    Node* insertPos(Node* head, int pos, int val) {
        Node *newNode=new Node(val);
        if(pos==1)
        {
            newNode->next=head;
            return newNode;
        }
        Node *temp=head;
        int i=1;
        while(i<pos-1 && temp!=NULL)
        {
            temp=temp->next;
            i++;
        }
        if(temp!=NULL)
        {
            newNode->next=temp->next;
            temp->next=newNode;
        }
        return head;
    }
};