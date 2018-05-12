//
// Created by Yinhao Jiang on 2018/5/12.
//
#include <iostream>
#include <vector>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> stack,min;
    MinStack() {

    }

    void push(int x) {
        if (stack.empty())
        {
            stack.push_back(x);
            min.push_back(x);
        }
        else
        {
            stack.push_back(x);
            min.push_back(min.back()>x?x:min.back());
        }
    }

    void pop() {
        if(!stack.empty())
        {
            stack.pop_back();
            min.pop_back();
        }
    }

    int top() {
        return stack.back();
    }

    int getMin() {
        return min.back();
    }
};

int main()
{
    MinStack obj = new MinStack();
    obj.push(123);
    obj.pop();
    int param_3 = obj.top();
    int param_4 = obj.getMin();
}
