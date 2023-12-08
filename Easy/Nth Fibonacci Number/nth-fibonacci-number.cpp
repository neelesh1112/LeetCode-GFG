//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        if(n<3)
        return n-1;

        int m = 1000000007;
        int f = 0, s = 1;

        for(int i = 1; i<n;i++){
            int t = ((f%m)+(s%m))%m;
            f = s%m;
            s = t%m;
        }

        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends