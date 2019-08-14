#include  <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int t,n ;
	int left ,right, mid;
	 
	 bool flag;
	 cin>>t;
	 while(t--)
      {  
		  flag = false;
	  cin >> n;
	  
	  left=1;
	  right=n;
	  
	  while(left <= right)
	  {
		  mid= (left + right) / 2;
		  if(mid * mid >n && (mid==left|(mid-1)*(mid-1) <=n)) {
			  cout << mid -1 <<endl;
		  break; }
			   
		  if (mid*mid > n) {
			  right=mid-1 ;
			  }else{ left =mid+1;
		  }
	  }
	}return 0;
}
