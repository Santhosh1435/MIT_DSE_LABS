
#include<iostream>
using namespace std;


class EMPLOYEE{
	int Employee_Number;
	int Basic;
	char Employee_Name[50];
	int DA;
	int IT;
	int Net_Sal;
	int Gross_Sal;
	
	
	public:
		readdata()
		{
			cout<<"\nEnter employee number:";
			cin>>Employee_Number;
			
			cout<<"Enter the basic amount:";
			cin>>Basic;
			cout<<"Enter employee name:";
			cin>>Employee_Name;
		}
		GrossSalary(){
			DA=0.12*Basic;
			Gross_Sal=Basic+DA;
		}
		NetSalary()
		{
			IT=(Gross_Sal*0.18);
			Net_Sal=Gross_Sal-IT;
			
		}
		display()
		{
			cout<<"The Gross salary ="<<Gross_Sal;
			cout<<"\nThe net salary ="<<Net_Sal;
			cout<<"\n";
		}
	
};
int main()
{	
	int i,n;
	cout<<"\nEnter no.of employees: ";
	cin>>n;
	EMPLOYEE e[n];
	for(i=0;i<n;i++)
	{
		e[i].readdata();
		e[i].GrossSalary();
		e[i].NetSalary();
		e[i].display();
	}
	
	
	return 0;
}
