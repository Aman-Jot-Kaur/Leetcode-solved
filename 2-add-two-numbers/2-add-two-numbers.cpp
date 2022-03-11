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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy=new ListNode();
        ListNode *ptr=dummy;
      int carry=0;
      while(l1!=NULL || l2!=NULL || carry){
        int ans=0;
        if(l1!=NULL){
          ans+=l1->val;
          l1=l1->next;
        }
        if(l2!=NULL){
          ans+=l2->val;
          l2=l2->next;
        }
        ans+=carry;
        carry=ans/10;
        ListNode *pt=new ListNode(ans%10);
        ptr->next=pt;
      ptr=ptr->next;
        
        
      }
      return dummy->next;
    }
};