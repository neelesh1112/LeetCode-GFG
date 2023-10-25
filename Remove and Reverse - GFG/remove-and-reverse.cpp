//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string str) {
        // code here
        int n = str.size();
        unordered_map<char, int> freq;
        for(auto itr : str)
            freq[itr]++;
        int st = 0, end = n-1, dir = 0;
        while(st<=end){
            if (dir == 0){
                if (freq[str[st]] == 1)
                    st++;
                else{
                    freq[str[st]]--;
                    str[st] = '$';
                    st++;
                    dir = 1;
                }
            }
            else{
                if (freq[str[end]] == 1)
                    end--;
                else{
                    freq[str[end]]--;
                    str[end] = '$';
                    end--;
                    dir = 0;
                }
            }
        }
        string ans;
        for(auto itr : str)
            if (itr != '$')
                ans.push_back(itr);
        if (dir == 1)
            reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends