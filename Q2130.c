/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middle(struct ListNode* head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

struct ListNode* reverse(struct ListNode* head){
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    struct ListNode *next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

int pairSum(struct ListNode* head) {
    struct ListNode* last=reverse(middle(head));
    int sum=0;
    while(head!=NULL && last!=NULL){
        if(sum<head->val+last->val)
        sum=head->val+last->val;

        head=head->next;
        last=last->next;
    }
    return sum;
}
