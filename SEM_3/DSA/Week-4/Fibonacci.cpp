#include<iostream>
using namespace std;
int fib(int n)
{
	if(n<=1)
		return n;
	else
		return fib(n-1)+fib(n-2);
	
}

int main()
{
	int n;
	cout<<"\nEnter the number of fibonacci terms you want:";
	cin>>n;
	
	cout<<"\nThe fibonacci series upto "<<n<<" terms is \n";
	for(int i=0;i<n;i++)
		cout<<fib(i)<<"\t";
		
	return 0;
}
