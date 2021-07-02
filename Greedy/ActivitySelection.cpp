// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    static bool comp(pair<int,int> a,pair<int,int> b){
        return a.second < b.second;
        
    }
    int activitySelection(vector<int> s, vector<int> e, int n)
    {
        // Your code here
        vector<pair<int,int>> vp;
        for(int i = 0;i<n;i++){
            vp.push_back({s[i],e[i]});
        }
        sort(vp.begin(),vp.end(),comp);
        int ans = 1,st=0,et = 0;
        st = vp[0].first, et = vp[0].second; 
        for(int i = 1;i < n;i++){
            if(vp[i].first > et){
                st = vp[i].first;
                et = vp[i].second;
                ans++;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends