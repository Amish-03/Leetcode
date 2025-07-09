/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 #include<limits.h>
int pairSum(struct ListNode* head) {
    if(!head)
        return 0;
    if(!head->next)
        return 0;
    int a[1000000];
    int n=0;
    struct ListNode* cur=head;
    while(cur!=NULL)
    {
        a[n]=cur->val;
        n++;
        cur=cur->next;
    }
    int sum=0;
    int max=INT_MIN;
    for(int i=0;i<n/2;i++)
    {
        sum=a[i]+a[n-i-1];
        max=(sum>max)?sum:max;
    }
    return max;

    


    
}