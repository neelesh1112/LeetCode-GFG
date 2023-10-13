//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        // Your code here
        // int i = 0;
        // int j = n-1;
        // while(i>=j){
        //     while(i>j){
        //         swap(arr[i],arr[j]);
        //         i++;
        //     }
        //     j--;
        //     i=i+2;
        // }
        
        long long temp[n];
        for(int i=0;i<n;i++)
        {
            temp[i]=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=temp[temp[i]]; 
        }
        /* 
       index 0   1   2   3   4
       arr   4   0   2   1   3
        
       index 0   1   2   3   4
       temp  4   0   2   1   3
       
       
        arr[0] = temp[temp[0]]  => temp[4] => arr[0] = 3
        arr[1] = temp[temp[1]]  => temp[0] => arr[1] = 4
        arr[2] = temp[temp[2]]  => temp[2] => arr[2] = 2
        arr[3] = temp[temp[3]]  => temp[1] => arr[3] = 0
        arr[4] = temp[temp[4]]  => temp[3] => arr[4] = 1
        
        
        Finally array will rearraged
        
        index   0   1   2   3   4
        arr     3   4   2   0   1
        
        
        
        */
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long A[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends