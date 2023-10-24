//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        int hash[256] = {0};
        int left=0, right = 0, len = 0;
        while(right<S.length()){
            hash[S[right]]++;
            while(hash[S[right]]>1){
                hash[S[left]]--;
                left++;
            }
            len = max(len, right-left+1);
            right++;
        }
        return len;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends