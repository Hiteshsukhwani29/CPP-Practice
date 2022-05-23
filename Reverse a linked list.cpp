struct Node* reverseList(struct Node *head)
    {
        struct Node* previous,*next,*current;
        previous = NULL;
        next = NULL;
        current = head;
        
        while(current!=NULL){
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        head = previous;
        
        return head;
    }
