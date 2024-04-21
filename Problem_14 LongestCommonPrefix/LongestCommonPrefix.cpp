// Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs){
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string s = "";
        string first = strs[0],last = strs[n - 1];
        for(int i = 0;i < min(first.size(),last.size());i++){
            if(first[i] == last[i]) s += first[i];
            else break;
        }
        return s;
    }
};
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<string>strs;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        string x;
        cin>>x;
        strs.push_back(x);
    }
    Solution solve;
    string commonPrefix = solve.longestCommonPrefix(strs);
    cout<<"Longest common prefix is : "<<commonPrefix;
}