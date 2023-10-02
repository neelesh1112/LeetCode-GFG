//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* Function to replace every element with the
	next greatest element */
	void nextGreatest(int arr[], int n) {
	    // code here
	   vector<int> v;
	   v.push_back(-1);
	    int lar=arr[n-1];
	    for(int i=n-2;i>=0;i--){
	        v.push_back(lar);
	        if(arr[i]>lar){
	            lar = arr[i];   
	        }
	    }
	    reverse(v.begin(),v.end());
	    int i=0;
	    for(int t : v){
	        arr[i] = t;
	        i++;
	    }
	}


};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.nextGreatest(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends