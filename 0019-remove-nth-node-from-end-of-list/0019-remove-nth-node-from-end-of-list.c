/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int count = 0;
    struct ListNode* cur = head;

    // First pass to count the number of nodes in the list
    while (cur != NULL) {
        count++;
        cur = cur->next;
    }

    // If we need to remove the head node
    if (count == n) {
        struct ListNode* newHead = head->next;
        free(head);
        return newHead;
    }

    // Second pass to find the (count - n)th node
    struct ListNode* prev = head;
    cur = head->next;
    for (int i = 1; i < count - n; i++) {
        prev = prev->next;
        cur = cur->next;
    }

    // Remove the nth node from the end
    prev->next = cur->next;
    free(cur);
    return head;
}