class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* temp =head;
        ListNode* prev =NULL;
        ListNode* f = NULL;
        while(temp!=NULL){
            f =temp->next;
            temp->next =prev;
            prev =temp;
            temp =f;

        }
        return prev;

    }
};
