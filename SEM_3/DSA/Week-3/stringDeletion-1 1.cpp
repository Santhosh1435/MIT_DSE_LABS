#include<iostream>
using namespace std;
int main(){
	char str[100];
	char del[100];
	char strnew[200];
	int lensub;
	int j;
	int flag;int n;
	cout<<"Enter a string :\n";
	cin>>str;
	cout<<"Enter the string that must be deleted:\n";
	cin>>del;
	int count=0;
	for(int j=0;del[j]!=0;j++){
		count++;
	}
	for(int i=0;str[i]!='\0';i++){
		int k=i;
		while(str[i]==del[j]){
			i++,j++;
			if(j==count){
			 flag=1;
				break;
			}
		}
		j=0;
		if(flag==0){
			i=k;
		}
		else{
			flag=0;
			}
			
		strnew[n++]=str[i];	
		}
		strnew[n]='\0';
	cout<<"new string after deleting is :"<<strnew;	
	return 0;
}
