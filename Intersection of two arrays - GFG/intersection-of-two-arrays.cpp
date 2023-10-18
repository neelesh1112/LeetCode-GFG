//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        // O(n+m)
        int hash[100000]={0};
        
        for(int i=0;i<n;i++)
            hash[a[i]]=1;
        
        for(int j=0;j<m;j++)
            if (hash[b[j]]==1)
                hash[b[j]]=-1;
                
        int count=0;
        for(int k=0;k<100000;k++)
            if(hash[k]==-1)
                count++;
                
        return count;
        
  //********************************************
  //********************************************
  
        //O(n^2)
        // int count=0;
        // for(int i=0; i<n; i++){
        //     for(int j = 0; j<m; j++){
        //         if(a[i] == b[j]){
        //             //v.push_back(nums2[j]);
        //             count++;
        //         }
        //     }
        // }
        // return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends