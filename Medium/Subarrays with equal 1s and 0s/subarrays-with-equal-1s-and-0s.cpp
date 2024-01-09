//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    //Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        //Your code here
        unordered_map<int,int> mp;
        int cnt_z=0,cnt_o=0;
        long long cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==0)
            cnt_z++;
            else
            cnt_o++;
            if(cnt_z-cnt_o==0)
            cnt++;
            if(mp.find(cnt_z-cnt_o)!=mp.end())
            cnt+=mp[cnt_z-cnt_o];
            mp[cnt_z-cnt_o]++;
        }
        return cnt;
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
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n)<<"\n";
	}
	return 0;
}

// } Driver Code Ends