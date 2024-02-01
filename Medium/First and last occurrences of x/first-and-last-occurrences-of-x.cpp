//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
    int findFirst(int nums[], int target, int size){
        int start = 0;
        int end = size-1;
        int first = -1;
        while(start <= end){
            int mid = start+(end-start)/2;
            if(nums[mid] == target){
                first = mid;
                end = mid-1;
            }
            else if(nums[mid] < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return first;
    }

    int findLast(int nums[], int target, int size){
        int start = 0;
        int end = size-1;
        int last =-1;
        while(start <= end){
            int mid = start+(end-start)/2;
            if(nums[mid] == target){
                last = mid;
                start = mid+1;
            }
            else if(nums[mid] < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return last;
    }
    
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int>ans;
        ans.push_back(findFirst(arr, x, n));
        ans.push_back(findLast(arr, x, n));

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends