// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.



//SOLUTION:
class Solution {
public:
    int search(vector<int>& nums, int target) {
    int n=nums.size();
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    while(end>=start){
        if(nums[mid]==target)
        return mid;

        if(nums[mid]>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
         mid=start+(end-start)/2;
    }
    return -1;
    }
};