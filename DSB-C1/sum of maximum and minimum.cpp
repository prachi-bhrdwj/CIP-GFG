//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


//Complete this function
int findMin(int arr[], int n)
{
    if(n == 1)
     return arr[0];
    else
      return min(arr[n-1], findMin(arr,n-1));
}

int findMax(int arr[], int n)
{
    if(n == 1)
     return arr[0];
    else
     return max(arr[n-1], findMax(arr,n-1));
}
int sumOfMaxandMin(int arr[],int n)
{
    if(n == 0) return 0;
    if(n == 1)
     return arr[0]+arr[0];
    int mn = findMin(arr,n);
    int mx = findMax(arr,n);
   return mx + mn;
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
	        
	   cout<<sumOfMaxandMin(arr,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
