#include<iostream>
using namespace std;

class Flight
{
	int Flight_Num;
	char Destination[50];
	float Distance;
	float Fuel=13.2;
	
	float calculate_fuel(int Distance)
	{
		if (Distance<=1000)
		Fuel=500;
		else if(Distance>1000 && Distance<=2000)
		Fuel=1100;
		else if(Distance>2000)
		Fuel=2200;
		
		return Fuel;
	}
	public:
		information_entry()
		{
			cout<<"Enter the flight number:";
			cin>>Flight_Num;
			cout<<"\nEnter the distance:";
			cin>>Distance;
			cout<<"\nEnter the destination:";
			cin>>Destination;
			Fuel=calculate_fuel(Distance);
			
		}
		
		display_info()
		{
			cout<<"\nTHE DETAILS OF THE FLIGHT ARE:";
			cout<<"\nThe flight number ="<<Flight_Num;
			cout<<"\n The fuel  ="<<Fuel<<"Liters";
			cout<<"\n The destination ="<<Destination;
		}
		
};

int main()
{
	Flight f;
	f.information_entry();
	f.display_info();
	
	return 0;
}








