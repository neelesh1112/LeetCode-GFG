//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string word1, string word2)
{
    // your code here
        int n = word1.length();
        int m = word2.length();
        int i = 0, j = 0;
        string ans = "";
        while(i < n && j < m) {
            ans += word1[i];
            ans += word2[j];
            i++;
            j++;
        }
        while(i < n) {
            ans += word1[i];
            i++;
        }
        while(j < m) {
            ans += word2[j];
            j++;
        }
        return ans;
}