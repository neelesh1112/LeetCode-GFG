//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        int i = A.size();
        int j = B.size();
        int count = 0;
        //Base Condition
        // Check the size of both string is equal or not
        if(i!=j){
            return -1;
        }
        
        
        // Check the frequancy of both string is equal or not
        vector<int>hash(256,0);
        vector<int>hash2(256,0);
      
        for(auto it:A){
            hash[it]++;
        }
        for(auto it:B){
            hash2[it]++;
        }
        for(int i=0;i<256;i++){
            if(hash[i]!=hash2[i])
              return -1;
        }
        
        
        // Calculation
        while(i>=0){
            if(A[i] == B[j]){
                i--;
                j--;
            }
            else{
                i--;
                count++;
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends