// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            d = d % 16;
            int x = (1 << d) - 1;
            int a = (n & x);
            int b = (n & (x << (16 - d)));
            int y = ((n << d) | (b >> (16 - d)));
            int z =((n >> d) | (a << (16 - d)));
            return {y&65535,z&65535};
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends