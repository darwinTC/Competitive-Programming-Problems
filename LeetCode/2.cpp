/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int addvalue=0;
        ListNode *ans=new ListNode(0);
        ListNode *aux;
        aux=ans;
        int val1,val2;
        bool flag=true;
        while(l1!=NULL || l2!=NULL){
            val1=0;
            val2=0;
            if(l1!=NULL){val1=l1->val;l1=l1->next;}
            if(l2!=NULL){val2=l2->val;l2=l2->next;}
            aux->next=new ListNode((val1+val2+addvalue)%10);
            aux=aux->next;
            addvalue=(val1+val2+addvalue)/10;
        }
        if(addvalue>0) aux->next=new ListNode(1);
        return ans->next;
    }
};
