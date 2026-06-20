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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p1 = list1;
        ListNode* p2 = list2;

        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        dummy->next=NULL;

        while(p1!=NULL && p2!=NULL)
        {
            if(p1->val <= p2->val)
            {
                tail->next=p1;
                tail=tail->next;
                p1=p1->next;

            }
            else
            {
                tail->next=p2;
                tail=tail->next;
                p2=p2->next;
            }
        }
        if(p1!=NULL)
        {
            tail->next=p1;
        }
        else
        {
            tail->next=p2;
        }
        return dummy->next;
      
    }
};
