#include <iostream>
using namespace std;
char stack[100], n=100, top=-1;
void push(char val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
char pop() {
	int y;
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
    	y=stack[top];
        top--;
   }
   return y;
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"\nStack is empty";
}
int main() {
	char str[100];int ch, val;char x;
	cout<<"enter string:\n";
	cin>>str;
	fflush(stdin);
	fflush(stdout);
	for(int i=0;str[i]!='\0';i++){
		x = str[i];
		push(x);
		fflush(stdin);
	}
	int buf=0;
	for(int i=0;str[i]!='\0';i++){
		x = pop();
		if(str[i]!=x){
			buf=1;
		}
	}
	if(buf==1){
		cout<<"not palindrome";
	}
	else{
		cout<<"Is palindrome";
	}
	display();
  
   return 0;
}
