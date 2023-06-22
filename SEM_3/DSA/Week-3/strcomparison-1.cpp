#include<iostream>
using namespace std;
int main(){
	int flag;
	char s1[200];
	char s2[200];
	cout<<"enter string 1:";
	cin>>s1;
	cout<<"\nenter string 2:";
	cin>>s2;
	int count=0;
	for(int i=0;s1[i]!='\0';i++){
		count++;
	}
	int k=0;
	for(int i=0;s2[i]!='\0';i++){
		k++;
	}
	if(k=count){
		for(int i=0;i<k;i++){
			if(s1[i]==s2[i]){
			 flag=1;
			}
			else{
			  flag=2;
			  break;
			}
		}
	}else{
		cout<<"the entered strings are not equal\n";
	}
	if(flag==1){
		cout<<"entered strings are equal\n";
	}
	else{
		cout<<"entered string are not equal\n";
	}
	
	return 0;
}
