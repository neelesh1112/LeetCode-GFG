//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
//Your code here

        int i=1;
        while(i<=n){
        int j=1;
        int h=n;
        while(j<=n){
            int k=1;
            while(k<=(n-i+1)){
                cout<<h<<" ";
                k++;
            }
            h--;
            j++;
        }
        i++;
        cout<<"$";
    }
}