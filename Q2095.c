/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if(head==NULL || head->next==NULL) return NULL;
    struct ListNode* temp=head;
    int count=0,mid;
    while(temp!=NULL) {
        count++;
        temp=temp->next;
    }
    mid=count/2;
    
    struct ListNode* t1=head;
        for(int i=0;i<mid-1;i++) t1=t1->next;
        struct ListNode* del=t1->next;
        t1->next=del->next;
        free(del);
        return head;
}
