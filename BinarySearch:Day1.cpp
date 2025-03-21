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

// TC:O(Log n);
// SC:1;

// Given a sorted array arr[] and an integer x, find the index (0-based) of the largest element in arr[] that is less than or equal to x. This element is called the floor of x. If such an element does not exist, return -1.

// Note: In case of multiple occurrences of ceil of x, return the index of the last occurrence.

class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
       int n=arr.size();
       for(int i=n-1;i>=0;i--){
           if(arr[i]<=x)
           return i;
       }
       return -1;
    }
};

// TC:O(n);
// SC:1;
