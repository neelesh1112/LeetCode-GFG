//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& nums1, vector<int>& nums2)
    {
        // Your code goes here
        
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0, m1 = 0, m2 = 0;

        // Find median.
        for (int count = 0; count <= (n + m) / 2; count++) {
            m2 = m1;
            if (i != n && j != m) {
                if (nums1[i] > nums2[j]) {
                    m1 = nums2[j++];
                } else {
                    m1 = nums1[i++];
                }
            } else if (i < n) {
                m1 = nums1[i++];
            } else {
                m1 = nums2[j++];
            }
        }

        // Check if the sum of n and m is odd.
        if ((n + m) % 2 == 1) {
            return static_cast<double>(m1);
        } else {
            double ans = static_cast<double>(m1) + static_cast<double>(m2);
            return ans / 2.0;
        }
        
        
        
        //**************************************************************************************************
        
        // // Get the sizes of both input arrays.
        // int n = nums1.size();
        // int m = nums2.size();

        // // Merge the arrays into a single sorted array.
        // vector<int> merged;
        // for (int i = 0; i < n; i++) {
        //     merged.push_back(nums1[i]);
        // }
        // for (int i = 0; i < m; i++) {
        //     merged.push_back(nums2[i]);
        // }

        // // Sort the merged array.
        // sort(merged.begin(), merged.end());

        // // Calculate the total number of elements in the merged array.
        // int total = merged.size();

        // if (total % 2 == 1) {
        //     // If the total number of elements is odd, return the middle element as the median.
        //     return static_cast<double>(merged[total / 2]);
        // } else {
        //     // If the total number of elements is even, calculate the average of the two middle elements as the median.
        //     int middle1 = merged[total / 2 - 1];
        //     int middle2 = merged[total / 2];
        //     return (static_cast<double>(middle1) + static_cast<double>(middle2)) / 2.0;
        // }
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends