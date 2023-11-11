//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        vector<int>v;
        bool f = false;
        int cnt = 0;
        int firstIndex, lastIndex;
        for(int i=0; i<n; i++){
            if(arr[i] == x){
                cnt++;
                if(f != true){
                    f = true;
                    firstIndex = i;
                }
            }
        }
        if(cnt == 0){
            v.push_back(-1);
        }
        else{
            // lastIndex = firstIndex+cnt;
            v.push_back(firstIndex);
            v.push_back(firstIndex+cnt-1);
        }
        
        
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends