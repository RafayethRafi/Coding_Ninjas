/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
    int n = arr.size();

    if(n ==0) return NULL;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i=1;i<n;i++){
        Node* newNode = new Node(arr[i],nullptr,prev);
        prev->next = newNode;
        prev = newNode;
    }

    return head;
}
