// You are climbing a staircase. It takes n steps to reach the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int climbStairs(int n){ // T.C -> O(n) && S.C -> O(1)
        int prev1 = 1,prev2 = 1;
        for(int i = 2;i <= n;i++){
            int temp = prev1 + prev2;
            prev1 = prev2;
            prev2 = temp;
        }
        return prev2;
    }
};
int main(){
    int n;
    cout<<"Enter no. of steps : ";
    cin>>n;
    Solution solve;
    cout<<"No. of distinct ways are : "<<solve.climbStairs(n);
}