//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    for(int i=1;i<n-1;i++){
            int num = arr[i];
            int j=0; int k=n-1;int flag=0;int hlag=0;
            while(j<i){
             if(arr[j]>arr[i]){
                 flag=1;
                 break;
             }
             j++;
            }
            while(k>i){
                if(arr[k]<arr[i]){
                    hlag=1;
                    break;
                }
                k--;
            }
            if(flag==0&&hlag==0){
                return arr[i];
            }
        }
        return -1;
    
}