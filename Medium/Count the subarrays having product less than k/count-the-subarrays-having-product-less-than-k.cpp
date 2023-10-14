//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long long countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(k<=1){
            return 0;
        }
        long long product=1;
        long long count=0;
        int i=0;
        for(int j=0;j<n;j++){
            product*=a[j];
            while(product>=k){
                product/=a[i];
                i++;
            }
            count+=j-i+1;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends