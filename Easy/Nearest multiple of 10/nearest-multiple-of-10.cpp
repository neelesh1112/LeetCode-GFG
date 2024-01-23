//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    string roundToNearest(string N) 
    { 
        // Complete the function
        int size=N.length();
        int count=0;
        int num=N[size-1]-48;
        int carry=0;
  
        if(num<=5)
        {
           N[size-1]='0';
        }
        else
        {
            int i=size-1;
            carry=10-num;
            do
            {
                if(N[i]-48 + carry >=10)
                {
                    N[i]='0';
                    carry=1;
                }
                else
                {
                    N[i]= N[i] + carry;
                    carry=0;
                }
                 i--;
            }
            while(carry>0 && i>=0);
            
            if(carry ==1)
            {
                 N.insert(0,"1");
            }
        }
        return N;
    }  

};

//{ Driver Code Starts.

int main() {
    
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout << ob.roundToNearest(s) << endl;
    }
    
	return 0;
}
// } Driver Code Ends