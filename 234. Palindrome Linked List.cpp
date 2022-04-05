class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        vector<int> v;
        while(temp!=0){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int n= v.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            if(v[i]!=v[j]) return false;
            else {
                i++;
                j--;
            }
        }
        return true;
    
    }
};
