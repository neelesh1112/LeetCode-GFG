//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    
    long long solution(long long n, vector<int>&v, long long x){
        long long ans = 0, sum =0;
        long long left = 0, right = 0;
        for(right=0; right<n; right++){
            sum+=v[right];
            while(sum>x){
                sum = sum - v[left];
                left++;
            }
            ans+=(right-left+1);
        }
        return ans;
        
    }
  
    long long countSubarray(int N,vector<int> A,long long L,long long R) {
        // code here
        
        long long count1 = solution(N, A, R);
        long long count2 = solution(N, A, L-1);
        return count1 - count2;
        
       
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        long long L,R;
        cin>>N>>L>>R;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,L,R);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends