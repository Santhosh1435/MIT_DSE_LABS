#include<iostream>
using namespace std;
int main(){
	char s1[100];
	char s2[50];
	int loc;
	int i;
	cout<<"Enter a string\n";
	cin>>s1;
	cout<<"Enter the string to be inserted\n";
	cin>>s2;
	cout<<"Enter the location at which string is to be inserted\n";
	cin>>loc;
	char temp[100];
	for(i=0;s1[i]!=0;i++){
		temp[i]=s1[i];
	}
	temp[i]='\0';
	int lensub;
	for(lensub=0;s2[lensub]!='\0';lensub++);
	int j=0;
	for(i=loc;i<loc+lensub;i++)
	s1[i]=s2[j++];
	for(i=loc;temp[i]!='\0';i++)
	s1[i+lensub]=temp[i];
	s1[i+lensub+1]='\0';
	cout<<"The modified string is "<<s1;
	return 0;
}
