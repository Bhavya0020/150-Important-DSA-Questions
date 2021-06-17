// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int ar[], int n){
        
        // Your code here
        int sum = INT_MIN,sum_sf = 0;
        for(int i = 0;i<n;i++){
            sum_sf += ar[i];
            if(sum_sf > sum){
                sum = sum_sf;
            }
            if(sum_sf < 0){
                sum_sf = 0;
            }
        }
        return sum;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends