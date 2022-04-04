class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* pre= NULL;
        ListNode* temp;
        while(curr)
        {
            temp= curr->next;
            curr->next= pre;
            pre=curr;
            curr= temp;
            }
        return pre;
    }
};
