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

// Given an unsorted array arr[] of integers and an integer x, find the floor and ceiling of x in arr[].

// Floor of x is the largest element which is smaller than or equal to x. Floor of x doesn’t exist if x is smaller than smallest element of arr[].
// Ceil of x is the smallest element which is greater than or equal to x. Ceil of x doesn’t exist if x is greater than greatest element of arr[].

// Return an array of integers denoting the [floor, ceil]. Return -1 for floor or ceiling if the floor or ceiling is not present.


class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int n= arr.size();
        int Floor=INT_MIN;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=Floor&&arr[i]<=x){
            Floor=arr[i];
            count++;
            }
        }
        if(count==0)
        Floor= -1;
        int count1=0;
        int Ceil=INT_MAX;
         for(int i=0;i<n;i++){
            if(arr[i]<=Ceil&&arr[i]>=x){
            Ceil=arr[i];
            count1++;
            }
        }
        if(count1==0)
        Ceil= -1;
        vector<int>v;
        v.push_back(Floor);
         v.push_back(Ceil);
         return v;
    }
};

// TC:O(n);
// SC:1;



// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int n=nums.size();
       for(int i=0;i<n;i++){
        if(nums[i]>=target)
        return i;
       }
       return n;
    }
};

// TC:O(n);
// SC:1;


