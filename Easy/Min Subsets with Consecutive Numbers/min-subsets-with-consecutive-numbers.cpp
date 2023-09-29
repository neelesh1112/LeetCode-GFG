//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int numofsubset(int arr[], int n)
    {
        // Your code goes here
       
        // 1.Sort the array.
        
        // 2.Iterate the array using a for loop till the (n-1)th element.
        
        // 3.compare if the (i+1)th element is equal to ( i )th element +1
        
        // 4.If the 3rd condition is not satisfied , increase the count by 1(initially take the count as 1 , as there will be 1 minimum subset).
        
        // 5.return the count.
        int count = 0;
        sort(arr, arr+n);
        for(int i = 0; i<n; i++){
            if(arr[i+1] != arr[i]+1){
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
// Driven Program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n+1];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
        Solution ob;
	    cout << ob.numofsubset(arr, n) << endl;
	}
	return 0;
}

// } Driver Code Ends