// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    static bool comp(pair<int,int> a,pair<int,int> b){
        return a.second < b.second;
        
    }
    //be performed in a meeting room.
    int maxMeetings(int s[], int e[], int n)
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
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends