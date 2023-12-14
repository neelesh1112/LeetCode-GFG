//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
       vector<int> ans = { -1 , -1 } ;
    
    // Speacial case
    int count = 1 ;
    
    for( int i = 0 ; i < n-2 ; i++ ){
        if( a[i] == a[i+1] ){
            count++ ;
        }
        
    }
    
    if( a[n-1] == a[n-2]){
            count++ ;
    }
    
    if( count == n ){
        return ans ;
    }
    
    int mini1 = INT_MAX ;
    int mini2 = INT_MAX ;
    
    for( int i = 0 ; i < n ; i++ ){
        if( a[i] < mini1 ){
            mini1 = a[i] ;
        }
    }
    
    ans[0] = mini1 ;
    
    for( int j = 0 ; j < n ; j++ ){
        if( a[j] < mini2 && a[j] != mini1 ){
            mini2 = a[j] ;
        }
    }
    
    ans[1] = mini2 ;
    
    return ans ;
}