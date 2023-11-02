//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        map<int,int> mp;
        vector<int> v;
        for(auto const &x:A1) mp[x]++;
        for(auto const &x:A2)
            while(mp[x]!=0)
            {
                v.push_back(x);
                mp[x]--;
            }
        for(auto &x:mp)
            while(x.second--)
                v.push_back(x.first);
        return v;
        
        
        
        
        
        
        
        
        //*********************************************************************************************
        // int count[1001] = {0}; // since numbers are from [0, 1000]

        // for (int& num : A1)
        //     count[num]++;

        // int i = 0;
        // // To follow the same ordering of arr2
        // for (int& num : A2) {
        //     while (count[num]-- > 0)
        //         A1[i++] = num;
        // }

        // // For remaining elements that were not in arr2
        // for (int j = 0; j < 1001; j++) {
        //     while (count[j]-- > 0) {
        //         A1[i++] = j;
        //     }
        // }

        // return A1;
    } 
};

//{ Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 

// } Driver Code Ends