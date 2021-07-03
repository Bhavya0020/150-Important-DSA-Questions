// https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    
    int findPlatform(int a[], int d[], int n)
    {
    	int ans = 0;
    	sort(a,a + n);
    	sort(d,d + n);
        int i = 0, j = 0,plat = 0,mx = 0;
        while(i < n){
            if(a[i] <= d[j]){
                i++;
                plat++;
            }
            else if(a[i] > d[j]){
                j++;
                plat--;
            }
            mx = max(mx,plat);
        }
        return mx;
    	return ans;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends