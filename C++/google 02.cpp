//
// Created by 蒋印豪 on 2018/12/6.
//

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <algorithm>

bool compare(pair<int,int> a, pair<int,int> b){
    return (a.first<b.first)||(a.first==b.first && a.second<b.second);
}

int solution(vector<int> &S, vector<int> &E) {
    // write your code in C++14 (g++ 6.2.0)
    int n=S.size();
    if (n==0) return 0;
    vector<pair<int,int>> people;
    // sort the people according to there time of arrival
    for (int i=0;i<n;i++){
        people.push_back(pair<int,int>(S[i],E[i]));
    }
    std::sort(people.begin(),people.end(),compare);
    
    vector<int> chair;
    chair.push_back(people[0].second);
    for (int i=1;i<n;i++){
        int ichair=chair.size()-1;
        // find a chair to sit
        while (ichair>=0 && chair[ichair]>people[i].first) ichair--;
        // if there is no place to sit, add a chair
        if (ichair==-1) chair.push_back(people[i].second);
        // else put the people in the chair
        else chair[ichair]=people[i].second;
        std::sort(chair.begin(),chair.end());
    }
    return chair.size();
}