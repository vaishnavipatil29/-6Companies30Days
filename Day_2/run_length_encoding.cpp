// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  int cnt = 0;
  string ans = "";
  for (int i = 0; i<src.size();i++)
  {
     //cout<<i<<endl;
      if(i==0)
      {
          
          cnt = 1;
        
      }
      else
      {
          if(src[i-1] == src[i])
          {
              cnt ++;
          }
          else
          {   
             ans += src[i-1];
             ans+=cnt + '0';
              
              cnt = 1;
          }
          
      }
      if(i==src.size()-1)
          {
               ans += src[i];
             ans+=cnt + '0';
          }
     
  }
   return ans;
}     
 
