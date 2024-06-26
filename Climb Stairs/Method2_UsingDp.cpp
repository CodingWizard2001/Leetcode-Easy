// You are climbing a staircase. It takes n steps to reach the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int climbStairs(int n){ // T.C -> O(n) && S.C -> O(n)
        vector<int>dp(n);
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2;i <= n;i++){
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};
int main(){
    int n;
    cout<<"Enter no. of steps : ";
    cin>>n;
    Solution solve;
    cout<<"No. of distinct ways are : "<<solve.climbStairs(n);
}