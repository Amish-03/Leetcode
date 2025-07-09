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
 #include<map>
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int,bool> seen;
        for(int num:nums)
        {
            seen[num]=1;
        }

        ListNode* cur=head;
        ListNode* prev=NULL;
        while(cur!=NULL)
        {
            if(seen[cur->val])
            {
                
                ListNode* temp=cur;
                cur=cur->next;
                if(prev)
                    prev->next=cur;
                else
                    head=cur;    
            }
            else
            {
                prev=cur;
                cur=cur->next;
            }

        }
        return head;
    }
};