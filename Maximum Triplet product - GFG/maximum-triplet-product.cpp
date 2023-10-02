//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	// Complete the function
    sort(arr, arr + n); // Sort the array in non-decreasing order
    long long product1 = arr[n-1] * arr[n-2] * arr[n-3]; // Compute product of last three elements
    long long product2 = arr[0] * arr[1] * arr[n-1]; // Compute product of first two and last element
    return max(product1, product2); // Return the maximum of the two products
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends