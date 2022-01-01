// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        long long int start = 0;
        long long int end = 0;
        long long int cnt = 0;
        long long int prod = 1;
        
        while(end<n)
        {
            prod = prod * a[end];
            
            while(start<n and prod>=k )
            {
                prod = prod/a[start];
                start ++;
                
            }
            
            if(prod<k)
            {
                cnt = cnt + 1 + (end - start);
               
            }
             end++;
        }
        return cnt;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends