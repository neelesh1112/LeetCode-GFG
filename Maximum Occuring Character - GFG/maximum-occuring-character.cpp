//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int n = str.length();
        map<char, int> m;
        for(int i=0; i<n; i++){
            m[str[i]]++;
        }
        
        int maxi = 0, ans;
        for(auto it: m){
            if(it.second>maxi){
                ans = it.first;
                maxi = it.second;
                
            }
        }
        
        return ans;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends