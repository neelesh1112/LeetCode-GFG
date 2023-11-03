//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    
        bool check(int p, int n){
            int temp = p, count = 0, f =5;
            while(f<=temp){
                count+=temp/f;
                f *=5;
            }
            return (count >= n);
        }
        int findNum(int n)
        {
        //complete the function here
        
            if(n==1){
                return 5;
            }
            int start= 0;
            int end = 5*n;
            while(start<end){
                int mid = (start+end)/2;
                if(check(mid, n)){
                    end = mid;
                }
                else{
                    start = mid+1;
                }
                
            }
            
            return start;
        
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends