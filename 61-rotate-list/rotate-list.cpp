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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL||k==0) return head;
        ListNode * curr=head;
            int s=0;
        while(curr!=NULL){
            curr=curr->next;
               s++;
        }

        if(k%s==0) return head;
        curr=head;
        ListNode * prev=NULL;
    
        while(curr!=NULL){
            ListNode* temp=curr->next;
           curr->next=prev;
            prev=curr;
               curr=temp;
              
        }
         curr=prev;
         ListNode* start=prev;
        ListNode * prev1=NULL;
        int i=0;
        if(k>s){
        k=k%s;
        }
        
        while(i<k&&curr){
             ListNode* temp=curr->next;
             curr->next=prev1;
             prev1=curr;
             curr=temp;
             i++;
        }
        ListNode * prev2=NULL;
        while(curr!=NULL){
             ListNode* temp=curr->next;
             curr->next=prev2;
             prev2=curr;
             curr=temp;
        }
        start->next=prev2;
        return prev1;

    }
};