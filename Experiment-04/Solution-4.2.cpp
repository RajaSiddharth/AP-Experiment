/*      Problem 2
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.

Example 2:
Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.

https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

*/
class Solution {
    public:
        int strStr(string haystack, string needle) {
            if(haystack.length()<needle.length())
                return -1;
            if(haystack.length()==needle.length()){
                if(haystack==needle)
                return 0;
                else
                return -1;
            }
            for(int i=0;i<=haystack.length()-needle.length();i++){
                string str=haystack.substr(i,needle.length());
                if(str==needle){
                    return i;
                }
            }
            return -1;
        }   
};