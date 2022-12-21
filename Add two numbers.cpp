class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* tempHead = new ListNode(0);
        ListNode* temp = tempHead;
        int c=0;
        while(l1!=NULL || l2!=NULL || c!=0){
            int a,b;
            if(l1){
                a=l1->val;
            }
            else{
                a=0;
            }
            if(l2){
                b=l2->val;
            }
            else{
                b=0;
            }
            int s = a+b+c;
            c=s/10;
            temp->next = new ListNode(s % 10);
            temp=temp->next;
            if(l1){
                l1=l1->next;
            }
            else{
                l1=nullptr;
            }
            if(l2){
                l2=l2->next;
            }
            else{
                l2=nullptr;
            }
        }
        return tempHead->next;
    }
};
