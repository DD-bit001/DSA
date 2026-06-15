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
    ListNode* deleteMiddle(ListNode* head) {
     ListNode * temp =head ;
     if(head->next==NULL){
        return NULL;
     }    int n=0;
     while(temp!=NULL){
        temp=temp->next;
        n++;
     }
     ListNode * temp1=head;
     ListNode * prev=NULL;
     int k=0;
     while(k<n/2){
prev=temp1;
k++;
temp1=temp1->next;
     }

prev->next=temp1->next;
temp1->next=NULL;
return head;
        
    }
};