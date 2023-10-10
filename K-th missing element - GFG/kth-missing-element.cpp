//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int KthMissingElement(int a[], int n, int k);


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << KthMissingElement(a, n, k) << endl;
    
    }
    return 0;
}

// } Driver Code Ends


int KthMissingElement(int a[], int n, int k)
{
    // Complete the function
    // vector<int>ans;
    // int t=0;
    // for(int i=a[0]; i<=a[n-1]; i++)
    // {
    //     if(a[t]==i)
    //     {
    //         t++;
    //     }
    //     else
    //     {
    //         ans.push_back(i);
    //     }
    // }
    // if(ans.size()>=k)
    // {
    //     return ans[k-1];
    // }
    // return -1;
    
    
    
    // Optimise code
    k = a[0] + k;
    for(int i =1; i<n; i++){
        if(a[i]<=k) k++;
        else return k;
    }
    return -1;


}