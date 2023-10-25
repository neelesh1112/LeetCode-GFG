//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string convert(string s, int numRows) {
        //code
        vector<string>v(numRows);
        if(numRows == 1){
            return s;
        }
        int i =0;
        bool flag = false;
        for(auto ch : s){
            v[i]+=ch;
            if(i==0 || i==numRows-1){
                flag = !flag;  // Flip the value of flag -> if true then flip to flase and it true then flip to flase
            }
            if(flag){
                i++;
            }
            else{
                i--;
            }
        }
        string zigzag ="";
        for(auto str: v){
            zigzag+=str;
        }
        return zigzag;
    }
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.convert(str, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends