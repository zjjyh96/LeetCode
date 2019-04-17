//
// Created by Yinhao Jiang on 2018/10/22.
//

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
    ListNode * partition(ListNode * head, int x) {
        // write your code here
        ListNode *ptr,*ans,*temp;
        ListNode *smaller=new ListNode(-1);
        ListNode *greater=new ListNode(-1);

        ptr=head;
        ans=smaller;
        temp=greater;

        while(ptr!=NULL)
        {

            if (ptr->val<x)
            {
                smaller->next=ptr;
                smaller=smaller->next;
                ptr=ptr->next;
            }
            else
            {
                greater->next=ptr;
                greater=greater->next;
                ptr=ptr->next;
            }
        }
        greater->next=NULL;
        smaller->next=temp->next;
        ans=ans->next;
        // while (ans!=NULL)
        // {
        //     cout<<ans->val<<" ";
        //     ans=ans->next;
        // }
        return ans;
    }
};