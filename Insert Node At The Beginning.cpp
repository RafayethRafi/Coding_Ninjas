Node* insertAtFirst(Node* list, int newValue) {

    Node* ans = new Node(newValue,list);

    // ans -> next = list;
    return ans;
}
