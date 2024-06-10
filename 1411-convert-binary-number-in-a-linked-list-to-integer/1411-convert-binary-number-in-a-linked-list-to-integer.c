/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int num = 0;
    struct ListNode* cur = head;
    while (cur != NULL) {
        num = num * 2 + cur->val;  
        cur = cur->next;
    }
    return num;
}