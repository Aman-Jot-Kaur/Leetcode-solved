/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {        
	ListNode *slow=head,*p1=NULL,*fast=head;
      while(--k){
        slow=slow->next;
      }
      p1=slow;
      slow=slow->next;
      while(slow!=NULL){
        fast=fast->next;
        slow=slow->next;
      }
swap(p1-> val,fast-> val);
	return head;
}
};