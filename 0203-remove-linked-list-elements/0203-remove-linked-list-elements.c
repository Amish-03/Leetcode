/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    // Check if the list is empty
    if (head == NULL) {
        return NULL;
    }
    
    // Iterate through the list to remove nodes with value 'val'
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    struct ListNode* temp = NULL;

    while (cur != NULL) {
        // If the current node has the value 'val', remove it
        if (cur->val == val) {
            if (prev == NULL) {
                // If the current node is the head, update the head
                temp = cur;
                head = cur->next;
                cur = head;
                free(temp);
            } else {
                // If the current node is not the head, remove it by adjusting pointers
                temp = cur;
                prev->next = cur->next;
                cur = cur->next;
                free(temp);
            }
        } else {
            // Move to the next node
            prev = cur;
            cur = cur->next;
        }
    }

    return head;
}
