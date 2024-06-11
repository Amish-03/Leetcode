/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void reorderList(struct ListNode* head) {
    if (head == NULL || head->next == NULL || head->next->next == NULL) {
        return; // No reordering needed for empty list or list with 0 or 1 nodes
    }
    
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    while (cur->next != NULL) {
        prev = cur;
        cur = cur->next;
    }
    prev->next = NULL; // Break the link of the last node with the second last node

    struct ListNode* nextNode = head->next;
    head->next = cur; // Reorder the first node to point to the last node
    cur->next = nextNode; // Reorder the last node to point to the second node
    
    reorderList(nextNode); // Recursively reorder the remaining list
}
