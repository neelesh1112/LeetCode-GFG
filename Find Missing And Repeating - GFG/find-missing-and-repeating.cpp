//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int counts[n+1]={0};
        int missing = -1;
        int repeating  = -1;
        //sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++) {
            counts[arr[i]]++;
        }

        // for (int i = n-1; i >= 0; i--) {
        //     if (counts[arr[i]] == 2) {
        //         ans[0]=arr[i];
        //         break;
        //     }
        // }

        // for (int i = 0; i <n; i++) {
        //     if(counts[arr[i]] == 0) {
        //         ans[1]=arr[i];
        //         break;
        //     }
        // }
        
        for(int i=1; i<=n; i++){
            if(counts[i] == 2){
               repeating = i;
            }
            else if(counts[i] == 0){
               missing  = i;
            }
        }

        return {repeating, missing};
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends