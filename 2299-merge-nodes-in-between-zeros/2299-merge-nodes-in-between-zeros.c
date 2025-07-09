/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head) {
    int a[200000];
    struct ListNode* cur=head;
    int sum=0;
    int i=0;
    while(cur!=NULL)
    {
        if(cur->val==0)
        {
            a[i]=sum;
            sum=0;
            i++;
        }
        else
            sum+=cur->val;
        cur=cur->next;
    }
    cur=head;
    struct ListNode* prev=NULL;
    int j;
    for(j=0;j<i;j++)
    {
        cur->val=a[j];
        prev=cur;
        cur=cur->next;
    }
    prev->next=NULL;
    head=head->next;
    return head;
}