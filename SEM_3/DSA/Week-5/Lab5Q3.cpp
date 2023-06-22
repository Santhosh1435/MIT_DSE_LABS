#include<iostream>
#include<string.h>
using namespace std;
char stack[100];
int top=-1,n=100;
void push(int val){
	if (top>n-1){
		cout<<"Stack overflow\n ";
	}
	else {
		top++;
		stack[top]=val;
	
	
	}
} 
 char pop(){
	if(top<=-1){
		cout<<"Stack Underflow\n ";
	}
	else{
		
		top--;
	}
	return stack[top+1];
}
int main(){
	char str[50];
	cout<<"Enter the word/sentence to be chekced whether it is a palindrome or not\n";
	gets(str);
	for(int i=0;str[i]!='\0';i++){
		push(str[i]);
	}
	for(int i=0;i<top;i++){
		if(pop()==str[i]){
			continue;
		}
		else{
			cout<<"Not a palindrome\n";
			return 0;
		}
	}
	cout<<"Is a palindrome\n";
	return 0;
}
