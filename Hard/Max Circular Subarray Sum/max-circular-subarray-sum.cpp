//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int kadanes(int arr[], int n){
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            maxi = max(sum, maxi);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }    
    int circularSubarraySum(int arr[], int num){
        
        // your code here
        //find Max Subarray Sum
        int maxSubarraySum1= kadanes(arr, num);
        if(maxSubarraySum1 < 0) return maxSubarraySum1;
        //Find total sum of given array
        int totalSumOfArray = 0;
        for(int i=0; i<num; i++){
            totalSumOfArray += arr[i];
            // Reverse the sign of each element of given array
            arr[i] = -1*arr[i];
            //cout<<arr[i]<<" ";
        }
       // cout<<endl<<totalSumOfArray<<endl;
        // Again find the max of modified subarray sum
        int maxSubarraySum2 = kadanes(arr,num);
        //cout<<maxSubarraySum2<<endl;
        maxSubarraySum2 = maxSubarraySum2 + totalSumOfArray;
        
        return max(maxSubarraySum1,maxSubarraySum2);

    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends