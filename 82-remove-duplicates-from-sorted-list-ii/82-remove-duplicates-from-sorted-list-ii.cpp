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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* dummy=new ListNode(0);
       ListNode* itr=dummy;
      itr->next=head;
      ListNode* curr=head->next;
      while(curr!=NULL){
        bool check=false;
        while(curr!=NULL && itr->next->val==curr->val){
          check=true;
          curr=curr->next;
        }
        if(check)itr->next=curr;
        else{
          itr=itr->next;
        }
      
      if(curr!=NULL){curr=curr->next;}
      }
        
      
    
  return dummy->next;}
};