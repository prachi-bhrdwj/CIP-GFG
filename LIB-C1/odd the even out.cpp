
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//User function Template for C++

/*Function to erase pair with second element as odd
* v : argument as vector<pair<long long, long long>>
* Return type : vector<pair<long long, long long>>
*/
vector<pair<long long, long long>> vectorIterator(vector<pair<long long, long long>> v){
    
    int n = v.size();
    vector<int>temp(n,0);
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i].second % 2 == 0)
          temp[i] = true;
    }
    
    vector<pair<long long, long long>>res;
    for(int i =0; i < v.size(); i++)
    {
        if(temp[i] == 0)
        {
            res.push_back({v[i].first, v[i].second});
        }
    }
    
    return res;
    
}

// { Driver Code Starts.

// Driver code
int main() {
    
    long long testcase;
    cin >> testcase;
    
    while(testcase--){
        vector<pair<long long, long long>> v;
        
        // Number of pairs to be pushed to vector        
        long long N;
        cin >> N;
        
        // Taking input to vector v
        for(long long i = 0;i<N;i++){
            long long k, m;
            cin >> k >> m;
            v.push_back(make_pair(k, m));
        }
        
        // Calling function to delete required pair
        v = vectorIterator(v);
        
        // Printing size of vector
        cout << v.size() << endl;
        
        // Iterating through vector and printing the pairs
        if(v.size() != 0){
            for(auto k = v.begin(); k != v.end(); k++){
                cout << k->first << " " << k->second << " ";
            }
                cout << endl;
        }
        else{
            cout << "Empty" << endl;
        }
    }
    
	return 0;
}  // } Driver Code Ends
