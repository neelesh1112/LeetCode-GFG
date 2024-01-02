//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define ll long long int
class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        set<ll> s;
        s.insert(0);
        ll sum = 0,cur = 0;
        ll ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum += a[i];
            if(i < k-1) continue;
            if(i >= k) cur += a[i-k];
            s.insert(cur);
            ll it = *s.begin();
            ans = max(ans,sum - it);
        }
        return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends