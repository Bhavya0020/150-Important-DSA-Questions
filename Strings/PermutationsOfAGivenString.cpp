#include <bits/stdc++.h>
using namespace std;
 // } Driver Code Ends
class Solution
{
	public:
	    vector<string> v;
	    void permutations( int n,string st, string s, vector<bool> &vis){
	        if(st.length() == n){
	            v.push_back(st);
	        }
	        for(int i = 0;i < n;i++ ){
	            if(!vis[i])
	            {
	                vis[i] = true;
	                st.push_back(s[i]);
	                permutations(n,st,s,vis);
	                st.pop_back();
	                vis[i] = false;
	            }
	       }
	    }
	    
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    string s;
		    sort(S.begin(),S.end());
		    int n = S.length();
		    vector<bool> vis(n,false);
		    permutations(n,s,S,vis);
		    return v;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends