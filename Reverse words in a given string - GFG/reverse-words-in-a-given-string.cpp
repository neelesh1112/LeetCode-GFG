//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int n=S.size();
        stack<string>s;
        string str="";
        for(int i=0;i<n;i++){
            if(S[i]!='.'){
              str+=S[i];
            }
            else{
                s.push(str);
                s.push(".");
                str="";
            }
            
        }
            while(!s.empty()){
                str+=s.top();
                s.pop();
            }
        
        return str;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends