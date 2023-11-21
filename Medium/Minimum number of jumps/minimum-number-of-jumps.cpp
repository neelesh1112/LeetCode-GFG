//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n == 1)
            return 0;
        int ladder = arr[0];
        int stairs = arr[0];
        int jump = 1;
        for(int i=1;i<n;i++)
        {
            if(stairs <= 0)
                return -1;
            if(i + arr[i] > ladder)
                ladder = i + arr[i];
            stairs--;
            if(stairs == 0 && i != n-1)
            {
                jump++;
                stairs = ladder - i;
            }
        }
        return jump;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends