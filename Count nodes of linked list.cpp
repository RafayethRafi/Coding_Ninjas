
int length(Node *head)
{
    Node* tmp = head;
    int cnt =0;
	while(tmp != NULL)
    {
        cnt++;
        tmp = tmp-> next;
    }

    return cnt;
}
