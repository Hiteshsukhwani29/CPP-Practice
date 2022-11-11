class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *f = head; 
        ListNode *s = head;
        while(f!=NULL&&f->next!=NULL){
            f=f->next->next;
            s=s->next;
            if(f==s){
                return true;
            }
        }
        return false;
    }
};
