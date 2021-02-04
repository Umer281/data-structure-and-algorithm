// Given an array nums of n integers and an integer target, are there elements a, b, c, and d in nums such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.

// Notice that the solution set must not contain duplicate quadruplets.

// Example 1:

// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
// Example 2:

// Input: nums = [], target = 0
// Output: []
 

// Constraints:

// 0 <= nums.length <= 200
// -109 <= nums[i] <= 109
// -109 <= target <= 109
#include<iostream>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> nums1;
        if(nums.size()==0 or nums.size()<4){ 
        return nums1;
        }
     
        
        int n=nums.size();
          for(int i=0;i<n-1;i++){ 
        
        
          for(int j=i+1;j<n-1;j++){ 
        
        int low=j+1;
        int high=n-1;
        while(low<high){ 
         
            if(nums[i]+nums[j]+nums[low]+nums[high]==target){ 
            vector <int> ans;
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            ans.push_back(nums[low]);
            ans.push_back(nums[high]);
            nums1.push_back(ans);
                
            int cur_low=nums[low];
            int cur_high=nums[high];
             low++;
             high--;
                cout<<cur_low<<"---"<<nums[low]<<endl;
                cout<<cur_high<<"---"<<nums[high]<<endl;
                cout<<endl;
            while( low<n-1 and cur_low==nums[low]) low++;
            while(high>low and cur_high==nums[high]) high--;
            
            }else if(nums[i]+nums[j]+nums[low]+nums[high]<target){ 
               low++;
            }else{ 
            high--;
            }
        
        
        }
        while(j<n-1 and nums[j]==nums[j+1]) j++;
              
            
        
        
        
        }
            while(i<n-1 and  nums[i]==nums[i+1]) i++;
        
        
        
        
        }
        return nums1;
    }