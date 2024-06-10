/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 #include<math.h>
int getDecimalValue(struct ListNode* head) {
    int n=0;
    struct ListNode* cur=head;
    while(cur!=NULL)
    {
        n++;
        cur=cur->next;
    }
    int num=0;
    n--;
    cur=head;
    while(cur!=NULL)
    {
        num+=pow(2,n)*cur->val;
        n--;
        cur=cur->next;
    }

    return num;

}