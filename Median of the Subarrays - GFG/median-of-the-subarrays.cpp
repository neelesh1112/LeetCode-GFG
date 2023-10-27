//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
  
  long solveMap(vector<int>& A, int N, int M) {
        unordered_map<int, int> map;
        int cur = 0;
        long total = 0, ans = 0;
        map[cur] = 1;

        for (int i = 0; i < N; i++) {
            int x;
            if (A[i] >= M)
                x = 1;
            else
                x = -1;

            if (x == -1)
                total -= map[cur - 1];
            else
                total += map[cur];

            cur += x;
            ans += total;
            map[cur] = map[cur] + 1;
        }

        return ans;
    }
    long long countSubarray(int N,vector<int> A,int M) {
        // code here
        long v1 = solveMap(A, N, M);
        long v2 = solveMap(A, N, M + 1);
        return (v1 - v2);
        
        
        
        
        
        
        //************************************************************************************************
        
        
        
        // TC -> O(n^2), SC -> O(n)
        
        // long long count =0;
        // for(int i=0; i<N; i++){
        //     vector<int> temp;
        //     for(int j = i; j<N; j++){
        //         temp.push_back(A[j]);
        //         sort(temp.begin(), temp.end());
        //         //Not even size subarray
        //         if(temp.size()%2 != 0){
        //             if(temp[temp.size()/2] == M){
        //                 count++;
        //             }
        //         }
        //         else{
        //             if(temp[temp.size()/2 - 1] == M){
        //                 count++;
        //             }
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
        int N, M;
        cin>>N>>M;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,M);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends