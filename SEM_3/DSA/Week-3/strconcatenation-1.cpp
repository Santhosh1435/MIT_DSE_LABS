#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s1;
	string s2;
	string result;
	cout<<"Enter the first string";
	cin>>s1;
	cout<<"Enter the second string";
	cin>>s2;
	for(int i=0;s1[i]!='\0';i++){
		result=result+s1[i];
	}
	for(int i=0;s2[i]!='\0';i++){
		result=result+s2[i];
	}
	cout<<"After concatenation :"<<result;
	return 0;
}
