/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    if(head == NULL) return NULL;
    
    if(head->next == NULL){
        // delete(head);
        return NULL;
    }

    Node* tmp = head;

    while(tmp->next->next != NULL){
        tmp = tmp->next;
    }

    tmp->next->prev = nullptr;
    tmp-> next = nullptr;

    return head;

    
}
