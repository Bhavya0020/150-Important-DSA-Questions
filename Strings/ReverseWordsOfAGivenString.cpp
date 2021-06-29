// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1# 

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        int i = 0, j =0;
        for(;i < s.length();i++){
            if(s[i] == '.'){
                reverse(s.begin() + j, s.begin() + i);
                j = i + 1;
            }
        }    
        reverse(s.begin() + j, s.begin() + i);
        reverse(s.begin(),s.end());
        return s;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends