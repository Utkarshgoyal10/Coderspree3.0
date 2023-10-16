#include<iostream>
using namespace std;

int main() {
	long n;
	cin>>n;
	long a=0,b=0,c;
	while(n>0)
	{
		c=n%10;
		if(c%2==0)
		a=a+c;
		else
		b=b+c;
		n=n/10;
	}
	cout<<a<<" "<<b;
	// Write your code here
	
}