// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1#

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int ar[], int n, int s)
    {
        // Your code here
        int sum = 0,st = 0;
        for(int i = 0;i<n;i++){
            sum += ar[i];
            while(sum > s)
            {
                sum -= ar[st];
                st++;
            }
            if(sum == s){
                return {st+1,i+1};
            }
            
        }
        return {-1};
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends