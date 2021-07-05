// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        unordered_map<int,int> mp;
        vector<int> ans;
        deque<int> q;
        int ct = 0;
        for(int i = 0;i < n;i++){
            if(q.size() < k){
                q.push_back(A[i]);
                if(mp[A[i]] == 0){
                    ct++;
                }
                mp[A[i]]++;
            }
            if(q.size() == k){
                ans.push_back(ct);
                int x = q.front();
                q.pop_front();
                mp[x]--;
                if(mp[x] == 0){
                    ct--;
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends