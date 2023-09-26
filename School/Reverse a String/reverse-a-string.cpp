//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string revStr(string& S) {
        // code here
        // int start=0;
        // int end = S.size()-1;
        // while(start>=end){
        //     swap(S[start], S[end]);
        //     start++;
        //     end--;
        // }
        // return s;
        
        
        
        //*******************
        //  reverse(S.begin(),S.end());
        // return S;
        
        
          
        string revStr="";
        for(int i=S.length()-1;i>=0;--i)
            revStr+=S[i];
        return revStr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}

// } Driver Code Ends