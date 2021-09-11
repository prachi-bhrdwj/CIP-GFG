
#include <iostream>
#include <cmath>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

//s is the string. return the floor of average
int avgOfString(string s)
{
   int sm = 0;
   for(int i = 0;i < s.length(); i++)
   {
       sm += int(s[i]);
   }
   return floor(sm/s.length());
}


// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    cout<<avgOfString(s)<<endl;
	    
	}
	return 0;
}


  // } Driver Code Ends
