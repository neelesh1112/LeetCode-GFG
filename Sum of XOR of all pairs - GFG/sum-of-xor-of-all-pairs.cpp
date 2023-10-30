//{ Driver Code Starts
// An efficient C++ program to compute 
// sum of bitwise OR of all pairs
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
    	//Complete the function
    	   // long long sum=0;
        //     for(int i=0;i<n;i++){
        //         for(int j=i+1;j<n;j++){
        //             int k=arr[i]^arr[j];
        //             sum+=k;
        //         }
        //     }
        //     return sum;
        
        
        
        long long int res=0;
        vector<int>o(32,0),z(32,0);
        for(int i=0 ; i<n ; i++){
            int num=arr[i];
            int t=0;
            while(num){
                if(num%2!=0){
                    o[t]++;
                }
                t++;
                num=num/2;
            }
        }
        for(int i=0 ; i<32 ; i++){
            long long int t=(long long int)(n-o[i])*o[i];
            res+=t*pow(2,i);
            
        }
        return res;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 int n ;
	 cin>>n;
	 int arr[n+1];
	 for( int i=0;i<n;i++)
	    cin>>arr[i];
	 Solution ob;
	 cout<<ob.sumXOR(arr, n)<<endl;
	}	
	return 0;
}

// } Driver Code Ends