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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> dis;
        ListNode * prev=head;
        ListNode *temp=head->next;
        int cnt=1;
        while(temp->next!=NULL){
            cnt++;
            if(temp->val>prev->val&&temp->val>temp->next->val){

                dis.push_back(cnt);               
            }
            else if(temp->val<prev->val&&temp->val<temp->next->val){
               
                dis.push_back(cnt);
            }
     
            prev=temp;
            temp=temp->next;
        }

        vector<int> ans(2,-1);
        if(int(dis.size())==1){
            return ans;
        }
        if(int(dis.size())==0){
            return ans;
        }
        ans[1]=dis[dis.size()-1]-dis[0];

    int minn=INT_MAX;
    for(int i=0;i<dis.size()-1;i++){
        minn=min(minn,dis[i+1]-dis[i]);
    }
    ans[0]=minn;
    return ans;
        
    }
};