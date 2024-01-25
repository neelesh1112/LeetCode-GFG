//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here 
         int count = 0;
        int sum = 0;
        vector<int> res;
        int sum1 = 0;
        for(int i=0;i<n;i++)
        {
            sum1 = sum1 + arr[i];
            sum = arr[i];
            count = 1;
            if(sum>x)
            {
                res.push_back(count);
                break;
            }
            if(x == 1 || sum>x)
            {
                res.push_back(count);
                break;
            }
            for(int j=i+1;j<n;j++)
            {
                sum = sum + arr[j];
                count++;
                if(sum>x)
                {
                    res.push_back(count);
                    break;
                }
            }
        }
        
        if(sum1<x)
        {
            res.push_back(0);
            return res[0];
        }
        
        sort(res.begin(), res.end());
        
        return res[0];
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends