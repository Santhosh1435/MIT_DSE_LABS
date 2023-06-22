#include<iostream>
using namespace std;
int gcd(int n1,int n2)
{
	if(n2==0)
		return n1;
	else
	{
		return gcd(n2,n1%n2);
		
		
	}
}
int main()
{
	int n1,n2;
	cout<<"Enter the two numbers :";
	cin>>n1>>n2;
	cout<<"The GCD of "<<n1<<" and "<<n2<<" = "<<gcd(n1,n2);
	
	return 0;
		
}
