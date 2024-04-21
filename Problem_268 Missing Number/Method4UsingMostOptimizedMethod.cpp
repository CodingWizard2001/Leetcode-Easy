// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int actualSum = (n * (n + 1)) / 2;
        int sum = 0;
        for(int i = 0;i < n;i++){
            sum += nums[i];
        }
        return actualSum - sum;
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