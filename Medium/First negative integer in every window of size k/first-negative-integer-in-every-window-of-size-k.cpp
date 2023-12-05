//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
    // vector<long long>v;
    // for(int i=0;i<n-k+1;i++)
    // {
    //     for(int j=i;j<i+k;j++)
    //     {
    //         if(a[j]<0){
    //             v.push_back(a[j]);
    //             break;}
    //             if(j==i+k-1){
    //         v.push_back(0);
    //         break;}
    //     }
    // }
    // return v;
    
                               
       int i=0;
       int j=0;
       vector<long long>ans;
        while(i+k<=n){
         if(j-i+1<=k&&arr[j]<0){
             ans.push_back(arr[j]);
         if(i==j)
         j++;
         i++;
         }
         else if(j-i+1<k&&arr[j]>=0){
             j++;
         }
         else if(j-i+1==k&&arr[j]>=0){
             ans.push_back(0);
             i++;
             j++;
         }
     }
     return ans;
                                                 
 }