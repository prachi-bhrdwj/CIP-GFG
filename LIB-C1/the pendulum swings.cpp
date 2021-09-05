//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete this function

vector<int> thePendulum(vector<int>v)
{
     vector<int>res;
     sort(v.begin(),v.end());
 
     int cnt = 0;
     for(int i = 0; i < v.size(); i+=2)
     {
         if(i < v.size()-1)
         {
             int b = v[i+1];
             int a = v[i];
             if(cnt % 2 == 0)
             {
                 res.insert(res.begin(),a);
                 res.insert(res.begin(),b);
             }
             else
             {
                 res.push_back(a);
                 res.push_back(b);
             }
         }
        cnt++;
     }
     if(v.size() % 2 != 0)
     {
        if(cnt % 2 != 0)
         res.insert(res.begin(),v[v.size()-1]);
        else
         res.push_back(v[v.size()-1]);
     }
     return res;
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
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        
        vector<int> ans=thePendulum(v);
        
        for(auto x:ans)
        cout<<x<<" ";
        
        cout<<endl;
        
        
    }
    return 0;
    
}  // } Driver Code Ends
