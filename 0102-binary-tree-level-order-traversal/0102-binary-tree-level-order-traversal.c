/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#define MAX_SIZE 2000
struct TreeNode* queue[MAX_SIZE];
int front = 0, rear = 0;

void enqueue(struct TreeNode* node) {
    if (rear < MAX_SIZE) {
        queue[rear++] = node;
    }
}

struct TreeNode* dequeue() {
    if (front < rear) {
        return queue[front++];
    }
    return NULL;
}

int isQueueEmpty() {
    return front == rear;
}

int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
    if (!root) {
        *returnSize = 0;
        *returnColumnSizes = NULL;
        return NULL;
    }

    int** result = (int**)malloc(sizeof(int*) * MAX_SIZE); 
    *returnColumnSizes = (int*)malloc(sizeof(int) * MAX_SIZE); 
    *returnSize = 0;

    front = rear = 0;
    enqueue(root);

    while (!isQueueEmpty()) {
        int levelSize = rear - front;
        result[*returnSize] = (int*)malloc(sizeof(int) * levelSize);
        (*returnColumnSizes)[*returnSize] = levelSize;

        for (int i = 0; i < levelSize; ++i) {
            struct TreeNode* current = dequeue();
            result[*returnSize][i] = current->val;
            if (current->left) enqueue(current->left);
            if (current->right) enqueue(current->right);
        }
        (*returnSize)++;
    }

    return result;
}