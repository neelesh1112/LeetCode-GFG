//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  vector<vector<int>> ans;
  void solve(int i,vector<int>& nums,vector<int>& temp,int k,int target){
        if(i>=nums.size()){
            if(temp.size()==k && target==0){
                ans.push_back(temp);
            }
            return;
        }
        if(nums[i]<=target){
            temp.push_back(nums[i]);
            solve(i+1,nums,temp,k,target-nums[i]);
            temp.pop_back();
        }
        solve(i+1,nums,temp,k,target);
    }
    vector<vector<int>> combinationSum(int K, int N) {
        // code here
        vector<int> nums;
        vector<int> temp;
        for(int i=1;i<=9;i++){
            nums.push_back(i);
        }
        solve(0,nums,temp,K,N);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends