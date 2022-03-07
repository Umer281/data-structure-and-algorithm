// 3. Longest Substring Without Repeating Characters
// Medium

// Share
// Given a string s, find the length of the longest substring without repeating characters.

 

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

// Constraints:

// 0 <= s.length <= 5 * 104
// s consists of English letters, digits, symbols and spaces.

//solution 


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0){
            return 0;
        }
        if(s.length()==1){
            return 1;
        }
        // if(s.length()==2 && s[0] !=s[1]){
        //     return 2;
        // }
        map <int,int> m;
        int n = s.length();
        int i=0;
        int j=0;
        int count = 0;
        int ans =INT_MIN;
        while(j<s.length()){
            
            if(m[s[j]]==0){
                m[s[j]]+=1;  
                count = (j-i)+1;
                j++;
              
            }else{ 
                m[s[i]] =0;
                i++;         
            }
                
                 
                ans =max(count,ans);
        }
       
        
        return ans;
    }
};