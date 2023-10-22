//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	   vector<int> neg;
       vector<int> pos;
       
       for(int i = 0;i<n;i++){
           if(arr[i]<0){
               neg.push_back(arr[i]);
           }
           else{
               pos.push_back(arr[i]);
           }
       }
       
       
       int i=0, j=0, k=0;
       while(i<pos.size() && j<neg.size()){
           arr[k++] = pos[i++];
           arr[k++] = neg[j++];
       }
       
       while(i<pos.size()){
           arr[k++] = pos[i++];
       }       
       while(j<neg.size()){
           arr[k++] = neg[j++];
       }       
       
    //   int x = 0;
    //   int y = 0;
    //   int size1 = neg.size();
    //   int size2 = pos.size();
    //   int i = 0;
    //   while(i<n){
    //       if(i%2==0){
    //           if(x== size2) break;
    //           arr[i] = pos[x];
    //           x++;
    //       }
    //       else{
    //           if(y == size1) break;
    //           arr[i] = neg[y];
    //           y++;
    //       }
    //       i++;
    //   }
       
    //   while(x != size2){
    //       arr[i] = pos[x];
    //       x++;
    //       i++;
    //   }
       
    //   while(y != size1){
    //       arr[i] = neg[y];
    //       y++;
    //       i++;
    //   }
          
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends