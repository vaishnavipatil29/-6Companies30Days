// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    int p2=0;
	    int p3=0;
	    int p5=0;
	    
	    vector<ull> ans;
	    ull ugly;
	    
	    ans.push_back(1);
	    
	    while(ans.size()<n)
	    {
	        ull min_no = min(2*ans[p2], 3*ans[p3] );
	        min_no = min(min_no,  5*ans[p5]);
	        //cout<<min_no <<" ";
	        
	        ans.push_back(min_no);
	        ///cout<<ans.size() <<endl;
	        if (min_no == 2*ans[p2])
	        {
	            p2 ++;
	        }
	        if(min_no == 3*ans[p3])
	        {
	            p3 ++;
	        }
	        if(min_no == 5*ans[p5])
	        {
	            p5 ++;
	        }
	    }
	    
	    return ans[n-1];
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends