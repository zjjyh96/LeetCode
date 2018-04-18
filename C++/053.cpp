//
// Created by Yinhao Jiang on 2018/3/18.
//
#include <stdio.h>

int maxSubArray(int* nums, int numsSize) {
    int max=0,ans=nums[0];
    for(int i=0;i<numsSize;i++)
    {
        max+=nums[i];
        if (max>ans) ans=max;
        if (max<0) max=0;
    }
    return ans;
}
