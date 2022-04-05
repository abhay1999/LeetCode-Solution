class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int start, int end) {
        if(!head|| start==end ) return head;
        ListNode dummy(0);
        dummy.next= head;
        ListNode* nodeBeforeSublist = &dummy;
        int pos=1;
        while(pos<start)
        {
            nodeBeforeSublist= nodeBeforeSublist->next;
            pos++;
        }
        auto workingptr = nodeBeforeSublist->next;
        while(start<end)
        {
           auto nodeToBeExtraxted = workingptr->next;
            workingptr->next= nodeToBeExtraxted->next;
            nodeToBeExtraxted->next= nodeBeforeSublist->next;
            nodeBeforeSublist->next= nodeToBeExtraxted;
            start++;
        }
        return dummy.next;
        
    }
};
