//
// Created by Yinhao Jiang on 2018/10/18.
//
#include <iostream>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};

class Solution {
public:
    Node* insert(Node* head, int insertVal) {
        if (head==NULL) { //如果是个空链表的话，直接插入
            Node* temp=new Node(insertVal,head);
            head->next=temp;
            return head;
        }
        else{
            Node* cur,*last;
            cur=head;
            // 找到整个递增链表的最小位

            int min=cur->val;
            while(cur->val==cur->next->val) cur=cur->next;

            while(cur->val<=cur->next->val)
            {



            }
        }
    }
};