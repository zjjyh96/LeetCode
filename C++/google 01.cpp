// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

// if can jump return index, otherwise return -1
#include <iostream>
#include <vector>
#include <iostream>
#include <random>

using std::cout; using std::endl;
using std::default_random_engine;

using namespace std;

int jumpOdd(vector<int> &A, int J){
    int n=A.size();
    int min=100;
    int minindex=-1;
    for (int K=J+1;K<n;K++){
        if(A[J]<A[K] && A[K]-A[J]<min){
            min=A[K]-A[J];
            minindex=K;
        }
    }
    return minindex;
}

int jumpEven(vector<int> &A, int J){
    int n=A.size();
    int min=100;
    int minindex=-1;
    for (int K=J+1;K<n;K++){
        if(A[J]>A[K] && A[J]-A[K]<min){
            min=A[J]-A[K];
            minindex=K;
        }
    }
    return minindex;
}

bool jump(vector<int> &A, int index){
    int step=1;
    int n=A.size();
    // use these two vectors to store the next step, initalize them to -2
    vector<int> nextEven(n,-2),nextOdd(n,-2);
    // stop the loop only when there is no place to jump or jump to the end
    while(index!=-1 && index!=n-1){
        if (step%2==1) {
            if (nextOdd[index]==-2) {
                nextOdd[index]=jumpOdd(A,index);
            }
            index=nextOdd[index];
        }
        else {
            if (nextEven[index]==-2) {
                nextEven[index]=jumpEven(A,index);
            }
            index=nextEven[index];
        }
        step++;
    }
    // if can jump to the end, return true, else return false
    if (index==n-1) return true;
    else return false;
}

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n=A.size();
    int count=0;
    for (int i=0;i<n;i++){
        if (jump(A,i)) count++;
    }
    return count;
}

int main(){
    default_random_engine e;
    vector<int> A={1,1,1,1,1};
    for (int i=0;i<10000;i++) A.push_back(e());
    cout<<solution(A)<<endl;
    return 0;
}