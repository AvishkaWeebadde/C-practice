/*
int searchInsert(vector<int>& nums, int target) 
{
    auto k = lower_bound(nums.begin(), nums.end(), target)-nums.begin();
    return k;
}
*/

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0 ; int right = nums.size()-1;
        while(left < right) {
            int mid = (left+right)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target) right = mid-1;
            else left = mid+1;
        }
        return (nums[left] >= target) ? left : left+1;
    }
};