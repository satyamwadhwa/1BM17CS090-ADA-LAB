/* program to accept the array of numbers and find the maximum element */

#include<iostream>
using namespace std;
 
 int main()
 {
	 int n;
	 cout<<"enter the number of element";
	 cin>>n;
	 int a[n];
	 cout<<"enter the element in the array";
	 int max=0;
	 for(int i=0;i<n;i++)
	 {
	 cin>>a[i];
	  if (a[i]>max)
	      max=a[i];
	 }
	 cout<<"the maximum number is"<<max<<endl;
	 return 0 ;
	 
 }