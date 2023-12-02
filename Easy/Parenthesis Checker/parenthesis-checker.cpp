//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        for(int i=0;i<x.length();i++){
            int element=x[i];
            if(element=='(' || element=='[' || element=='{'){
                s.push(element);
            }else{
                if(!s.empty()){
                    if(s.top()=='(' && element==')' || s.top()=='[' && element==']' || s.top()=='{'&& element=='}'){
                        s.pop();
                    }else{
                        return false;
                    }
                }else{
                    return false;
                }
            }
        }
        if(s.empty()){
            return true;
        }else{
            return false;
        }
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends