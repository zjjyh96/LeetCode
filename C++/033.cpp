//
// Created by 蒋印豪 on 2019-04-19.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0) return -1;
        int start = 0;
        int end = nums.size();
        while(start + 1 < end){
            cout<< start <<" " << end<< endl;
            int mid = start + (end - start)/2;
            // cout << mid;
            if(target == nums[mid]){
                return mid;
            }else if(target < nums[mid]){
                if(target > nums[start] && nums[start] < nums[mid]){
                    end = mid - 1;
                }
                else if(target < nums[start] && nums[start] > nums[mid]){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }else{
                cout<<mid<< endl;
                if(target > nums[end] && nums[mid] > nums[end]){
                    cout<< "1" <<endl;
                    start = mid + 1;
                }else if(target < nums[end] && nums[mid] < nums[end]){
                    cout<< "2" <<endl;
                    start = mid + 1;
                }else{
                    cout<< "3" <<endl;
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main(){
    vector<int> v = {4,5,6,7,0,1,2};
    Solution ans;
    cout<<ans.search(v, 2);
    return 0;
}