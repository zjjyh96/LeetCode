//
// Created by Yinhao Jiang on 2018/5/4.
//

#include <iostream>
using namespace std;


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        int flag=0;
//        ListNode *head,*ptr;
//        ListNode *node=new ListNode(0);
//        head=node;
//        ptr=node;
//
//        while(l1!=NULL || l2!=NULL)
//        {
//            ListNode *node=new ListNode(0);
//            ptr->next=node;
//            if (flag==1)
//            {
//                node->val+=1;
//                flag=0;
//            }
//            if (l1!=NULL)
//            {
//                node->val+=l1->val;
//                l1=l1->next;
//            }
//            if (l2!=NULL)
//            {
//                node->val+=l2->val;
//                l2=l2->next;
//            }
//            if (node->val>=10)
//            {
//                node->val-=10;
//                flag=1;
//            }
//        }
//
//        if (flag==1 && l1==NULL && l2==NULL)
//        {
//            ListNode *node=new ListNode(0);
//            ptr->next=node;
//            node->val=1;
//            flag=0;
//        }
//        return head;


        int carry = 0;
        ListNode* sum = new ListNode(0);
        ListNode* head = sum;
        while(l1 != NULL || l2 != NULL) {
            if(l1 != NULL) {
                sum->val += l1->val;
                l1 = l1->next;
            }

            if(l2 != NULL) {
                sum->val += l2->val;
                l2 = l2->next;
            }

            sum->val += carry;
            if(sum->val >= 10) {
                sum->val -= 10;
                carry = 1;
            } else {
                carry = 0;
            }

            if(l1 != NULL || l2 != NULL) {
                sum->next = new ListNode(0);
                sum = sum->next;
            }
        }

        if(carry == 1) {
            sum->next = new ListNode(1);
        }
        return head;
    }
};

int main()
{
    ListNode *l1;
    ListNode *temp1=new ListNode(5);
    ListNode *temp2=new ListNode(5);
    l1=temp1;
    l1->next=temp2;
    ListNode *l2;
    ListNode *temp3=new ListNode(5);
    ListNode *temp4=new ListNode(5);
    l2=temp3;
    l2->next=temp4;

    ListNode *l;
    Solution ans;
    l=ans.addTwoNumbers(l1,l2);
    cout<<l->val<<"->"<<l->next->val<<"->"<<l->next->next->val;

    return 0;


}

