/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

struct ListNode* createNode(int value){
    struct ListNode* n=malloc(sizeof(struct ListNode));
    n->val=value;
    n->next=NULL;
    return n;
}
struct ListNode* sortList(struct ListNode* head) {
    if(head==NULL) return NULL;
    struct ListNode* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }

    int *arr=malloc(count*sizeof(int));
    temp=head;
    for(int i=0;i<count;i++){
        arr[i]=temp->val;
        temp=temp->next;
    }
    qsort(arr, count, sizeof(int), compare);

    struct ListNode* newHead=createNode(arr[0]);
    struct ListNode* temp1=newHead;
   
    for(int i=1;i<count;i++){
        temp1->next=createNode(arr[i]);
        temp1=temp1->next;
    }
    free(arr);
    return newHead;
}
