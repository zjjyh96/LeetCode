//
// Created by Yinhao Jiang who wants to be more than a friend of Freda_Ren on 2018/5/23.
//

#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ptr;
        ptr=head;
        if (head==NULL) return head;
        while (ptr->next!=NULL)
        {
            if (ptr->val==ptr->next->val)
            {
                ptr->next=ptr->next->next;
            }
            else ptr=ptr->next;
        }
        return head;
    }
};

