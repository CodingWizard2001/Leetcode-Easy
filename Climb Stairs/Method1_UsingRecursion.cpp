// You are climbing a staircase. It takes n steps to reach the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include<iostream>
using namespace std;
class Solution {
public:
    int climbStairs(int n){ 
        // T.C -> O(n^2) && S.C -> O(n)
        if(n < 2) return 1;// Base Case
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};
int main(){
    int n;
    cout<<"Enter no. of steps : ";
    cin>>n;
    Solution solve;
    cout<<"No. of distinct ways are : "<<solve.climbStairs(n);
}