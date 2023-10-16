//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        
        
    for(int i=0;i<n;i+=k){
        int s=i;
        int e=min(i+k-1,n-1);
        
        while(s<=e){
            swap(arr[s++],arr[e--]);
        }
    }           
        // vector<int>v;
        // int j=0;
        // for(int i=k-1; i>k/2; i--){
        //   swap(arr[j],arr[i]);
        //   j++;
        // }
        
        // for(int i=0; i<((n-k)/2); i++){
        //     swap(arr[k],arr[n-1]);
        //     k++;
        //     n--;
        // }
       
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends