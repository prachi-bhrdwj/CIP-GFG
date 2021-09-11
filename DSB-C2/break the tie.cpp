#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function Template for C++

//User function Template for C++

/*
names[]: array of names
n: size of array
*/
bool cmp(pair<string,int>a, pair<string,int>b)
{
    if(a.second == b.second)
      return a.first < b.first;
    else
      return a.second > b.second;
}
string TieBreak(string names[], int n)
{
    map<string,int>m;
    for(int i = 0; i < n; i++)
      m[names[i]]++;
    
    vector<pair<string,int>>v;
    for(auto it : m)
    {
        v.push_back({it.first,it.second});
    }
    sort(v.begin(),v.end(),cmp);
    return v[0].first;
}



// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        string names[n];
        for(int i = 0; i < n; i++)
            cin>>names[i];
        cout << TieBreak(names,n) <<endl; 
    }
}
  // } Driver Code Ends
