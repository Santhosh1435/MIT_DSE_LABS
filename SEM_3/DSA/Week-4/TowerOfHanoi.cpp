#include <iostream> 

using namespace std; 

void tower(int n,char source[],char auxillary[],char destination[]){ 

 	cout<<"\n";

	if(n==1){ 

	cout<<"Move Disk 1 from "<<source<<" to "<<destination<<"\n\n";	 

	return; 

} 
	tower(n-1,source,destination,auxillary); 

	cout<<"Move Disk "<<n<<" from "<<source<<" to "<<destination<<"\n\n"; 

	tower(n-1,auxillary,source,destination); 

} 

  
int main(){ 

	int N; 

	char s[]="Source"; 

	char a[]="Auxillary"; 

	char d[]="Destination"; 

	cout<<" Enter no of disks: ";
	cin>>N; 

	tower(N,s,a,d); 

return 0; 

} 
