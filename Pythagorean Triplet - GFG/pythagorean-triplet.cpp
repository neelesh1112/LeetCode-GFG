//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    
	    //***********************************
	    //Brute force  
	    // O(n^3)
	   // for(int i=0; i<n-2; i++){
	   //     for(int j=i+1; j<n-1; j++){
	   //         for(int k=i+2; k<n; k++){
	   //             int x = arr[i]*arr[i];
	   //             int y = arr[j]*arr[j];
	   //             int z = arr[k]*arr[k];
	                
	   //             if(x == y+z || y == x+z || z == x+y){
	   //                 return true;
	   //             }
	   //         }
	   //     }
	   // }
	    
	   // return false;
	   
	   
	   //***************************************
	   
	   // Better approach
	   // O(nlogn)
	   
	   for(int i =0; i<n; i++){         //O(n)
	       arr[i] = arr[i]*arr[i];
	   }
	   sort(arr, arr+n); // O(nlogn)
	   
	   //for(int i =0; i<n; i++){
	   //    cout<<arr[i]<<" ";
	   //}
	   
	   
	   for(int i = n-2; i>=0; i--){     
	        int high = i;
	        int leftPtr = 0;
	        int rightPtr = n-1;
	        
	        
	       while(leftPtr < rightPtr){
	       if(arr[leftPtr] + arr[rightPtr] == arr[high]){
	           return true;
	       }
	       else if(arr[leftPtr] + arr[rightPtr] < arr[high]){
	           leftPtr++;
	       }
	       else{
	           rightPtr--;
	       }
	   }
	   }
	   
	   
	   return false;
	   
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

// } Driver Code Ends