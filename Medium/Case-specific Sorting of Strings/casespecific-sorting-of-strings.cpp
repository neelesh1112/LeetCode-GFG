//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        list<char> U; // Uppercase list
        list <char> L; // Lowercase List
        
        for(int i=0; i<n; i++){
            if(int(str[i])>=65 and int(str[i]) <=90){
                U.push_back(str[i]);
            }
            else{
                L.push_back(str[i]);
                
            }
        }
        
        U.sort(); L.sort();
        
        for(int i=0; i<n; i++){
            if(int(str[i])>=65 and int(str[i])<=90){
                str[i] = U.front(); 
                U.pop_front();
                
            }
            else{
                str[i] = L.front(); 
                L.pop_front();
                
            }
        }
        
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends