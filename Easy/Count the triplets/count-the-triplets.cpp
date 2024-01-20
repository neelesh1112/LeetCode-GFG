//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    set<int>s;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            s.insert(arr[i]);
        }
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n&&i!=j;j++)
          {
              if(s.find((arr[i]+arr[j]))!=s.end())
              ans++;
          }
      }
      return ans;
	}
};

//{ Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// } Driver Code Ends