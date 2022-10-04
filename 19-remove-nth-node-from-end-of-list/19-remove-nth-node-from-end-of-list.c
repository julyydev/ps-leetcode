/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int length = 0;
    struct ListNode* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        length++;
    }
    
    if (length - n == 0) {
        head = head->next;
    }
    else {
        int index = 0;
        struct ListNode* temp = head;
        while (index != length - n - 1) {
            temp = temp->next;
            index++;
        }
        temp->next = temp->next->next;
    }
    
    
    return head;
}