/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        if(head==NULL) return NULL;
        int n = 0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        temp=head;
        ListNode* prev= NULL;
        ListNode* curr = head;


        for(int i=0;i<n;i++){
            ListNode* nextnode= curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        return prev;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna