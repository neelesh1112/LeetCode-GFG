//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        // code here
        vector<string> v;
        string s="";
        v.push_back(s);
        for(int i=1;i<=n;i++){
            s=v[i-1];
            if(s=="") v.push_back("1");
            else{
                string ans="";
                int count=1,flag=1;
                for(int i=0;i<s.size()-1;++i){
                    if(s[i+1]==s[i]){
                        count++;
                    }
                    else{
                        ans+=(count+'0');
                        ans+=s[i];
                        count=1;
                    }  
                }
                if(flag==1){
                    ans+=(count+'0');
                    ans+=s[s.size()-1];
                }
                v.push_back(ans);
            }
        }
        return v[n];
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends