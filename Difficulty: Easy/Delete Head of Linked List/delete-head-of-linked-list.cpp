/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    Node *deleteHead(Node *head) {
        Node *newHead=head->next;
        delete head;
        return newHead;
    }
};
