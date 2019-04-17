//
// Created by 蒋印豪 on 2018/12/3.
//

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <limits>
#include <math.h>

using namespace std;

/*
 * Complete the 'primeQuery' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY first
 *  3. INTEGER_ARRAY second
 *  4. INTEGER_ARRAY values
 *  5. INTEGER_ARRAY queries
 */
int printVec(vector<int> ans){
    for (int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}

bool isPrime(int n){
    if (n<2) return false;
    int sq=sqrt(n);
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return false;
    }
    return true;
}
int search(map<int, vector<int>>& tree, int cur, vector<int>& subtree, vector<int> values) {
    // if already calculated, just return the value
    if (subtree[cur] != -1) return subtree[cur];
        // if not been calculated
    else
    {
        subtree[cur] = 0;
        // sum the values of it's children
        for (int i=0;i<tree[cur].size();i++)
        {
            subtree[cur] += search(tree, tree[cur][i], subtree, values);
        }
        // calculate itself
        if (isPrime(values[cur - 1])) subtree[cur]++;
        return subtree[cur];
    }
}

void initial(map<int, vector<int>> &tree, int parent, int cur) {
    for (int i=0;i<tree[cur].size();i++)
    {
        if (parent != tree[cur][i]){
            initial(tree, cur, tree[cur][i]);
        }
        else if(parent == tree[cur][i])
        {
            tree[cur].erase(tree[cur].begin()+i);
            i--;
        }
    }
}

vector<int> primeQuery(int n, vector<int> first, vector<int> second, vector<int> values, vector<int> queries) {
    map<int,vector<int>> tree;

    vector<int> ans;
    // create the undirectional graph called tree
    int nnodes=first.size();
    for (int i = 0; i < nnodes; i++)
    {
        tree[first[i]].push_back(second[i]);
        tree[second[i]].push_back(first[i]);
    }

    initial(tree, -1, 1);

    // store the num of prime subtree node in subtree[n+1]
    vector<int> subtree(n + 1, -1);
    int nquery=queries.size();
    for (int i=0;i<nquery;i++)
    {
        if (subtree[queries[i]] == -1) ans.push_back(search(tree, queries[i], subtree, values));
        else ans.push_back(subtree[queries[i]]);
    }
    return ans;
}

int main()
{
    vector<int> first={6,8,3,6,4,1,8,5,1};
    vector<int> second={9,9,5,7,8,8,10,8,2};
    vector<int> values={17,29,3,20,11,8,3,23,5,15};
    vector<int> queries={4};
    printVec(primeQuery(10, first, second, values, queries));
//    cout<<isPrime(20)<<endl;
    return 0;
}