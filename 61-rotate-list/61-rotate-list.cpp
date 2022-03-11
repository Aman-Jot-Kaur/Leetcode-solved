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
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==NULL || head->next==NULL ||k==0){
         return head;
       } 
      ListNode *dummy=head;
      int l=0;
      while(++l && dummy->next){
        dummy=dummy->next;
      }
      dummy->next=head;
      k=k%l;
      k=l-k;
      while(k--){
        dummy=dummy->next;
      }
      head=dummy->next;
      dummy->next=NULL;
      
    
  return head;}
};