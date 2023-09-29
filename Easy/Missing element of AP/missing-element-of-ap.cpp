//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int arr[], int n) {
        
        int i=0;
        int j=1;
            
        int d =( (arr[n-1] - arr[0])/(n) ); // Find common difference(d) 
            
        while(j<n){
            if( arr[j] == arr[i] + d){
                i++;
                j++;
            }
            else{
                return (arr[i] +d);
            }
        }
        

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends