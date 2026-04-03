/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(head==NULL) return NULL;
    struct ListNode* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    } 

    if(n==count){
        struct ListNode* del1=head;
        head=head->next;
        free(del1);
        return head;
    }

    struct ListNode* temp1=head;
    for(int i=1;i<count-n;i++) temp1=temp1->next;
    struct ListNode* del=temp1->next;
    temp1->next=del->next;
    free(del);
    return head;
}
