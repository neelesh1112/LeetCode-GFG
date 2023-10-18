//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
        // largest number
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>ans)
            ans=arr[i];
        }
        
        // Secound largest number
        int secound=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=ans)
            secound =max(secound,arr[i]);
        }
        
        return secound;	    
	    
	    
	    
	    //************************************************
	   // sort(arr, arr+n);
	   // return arr[n-2];
	   
	   
	   
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
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends