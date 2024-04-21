// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<bool>check(n,false);
        for(int i = 0;i < n;i++){
            int ele = nums[i];
            check[ele] = true;
        }
        for(int i = 0;i < n;i++){
            if(check[i] != true) return i;
        }
        return -1;
    }
};
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>nums;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    Solution solve;
    int missing = solve.missingNumber(nums);
    cout<<"Missing number : "<<missing;
}