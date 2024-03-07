int searchInLinkedList(Node<int> *head, int k) {
    Node<int>*tmp = head;
    
    while(tmp != NULL){
        if(tmp->data == k) return 1;
        tmp = tmp->next;
    }

    return 0;
}
