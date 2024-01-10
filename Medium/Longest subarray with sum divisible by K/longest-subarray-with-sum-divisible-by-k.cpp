//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
        int mx = 0;
        int i = 0, j = 0, sum = 0;
        map<int, int> mp;
        while (j < n)
        {
            sum += arr[j];
            int r = sum%k;
            
            //condn1
            if(r<0)
            {
                r = r+k;
            }
            //condn2
            if(r==0)
            {
                mx = max(mx,j-i+1);
                
            }
            else if(r>0)   //condn3
            {
                if(mp.find(r) != mp.end())
                {
                    mx = max(mx,j-mp[r]);
                }
                else
                {
                    mp[r] = j;
                }
                
            }
            j++;
        }
        return mx;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends