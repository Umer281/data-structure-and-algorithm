338. Counting Bits
Easy

6658

314

Add to List

Share
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

 

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> nums;
        for(int i=0;i<=n;i++){
             int pre_num =i;
            int count=0;
            while(pre_num>0){
                if(pre_num%2==1){
                    count++;
                }
                pre_num=pre_num/2;
                
            }
            nums.push_back(count);
            count=0;
        }
        return nums;
    }
};