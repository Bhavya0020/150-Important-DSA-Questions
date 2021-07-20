//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// function to swap odd and even bits
unsigned int swapBits(unsigned int n)
{
	
	// Your code here
// 	unsigned int x = 0;
    unsigned int odd = 0,even = 0;
	even = (n & 0xAAAAAAAA);
	odd = (n & 0x55555555);
	even >>= 1;
	odd <<=1;
	return (even | odd);
	
}

// { Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		//calling swapBits() method
		cout << swapBits(n) << endl;
	}
	return 0;
}  // } Driver Code Ends