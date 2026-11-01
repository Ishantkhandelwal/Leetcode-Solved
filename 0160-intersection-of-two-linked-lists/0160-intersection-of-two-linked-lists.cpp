/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return headB;
        ListNode* a = headA;
        ListNode* b = headB;

       while(a!=b)
       {
        if(a==NULL)
        {
            a=headB;
        }else{
            a=a->next;
        }
        if(b==NULL)
        {
            b=headA;
        }else{
            b=b->next;
        }
       }
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna