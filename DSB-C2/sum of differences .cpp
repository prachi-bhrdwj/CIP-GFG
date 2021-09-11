//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++



int sumOfDiff(int arr[],int n)
{
    int sm = 0;
    sort(arr,arr+n);
    int l = 0, r = n-1;
    while(l <= r)
    {
       if(l == r)
         sm += arr[l];
       
       sm += abs(arr[l]-arr[r]);
       
       l++;
       r--;
    }
    return sm;
}

// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<sumOfDiff(arr,n);
	    
	    cout<<endl;
	    
	    
	    
	}
	return 0;
}  // } Driver Code Ends
