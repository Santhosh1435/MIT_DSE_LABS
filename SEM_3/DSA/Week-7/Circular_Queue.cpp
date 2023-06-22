#include<iostream>
using namespace std;

	int queue[10];
	int n=10;
	int front=-1;
	int rear =-1;
	int count=0;
void enqueue(int element){
	if(count==n){
		cout<<"Full";
	}
	else{
		queue[rear]=element;
		rear=(rear+1)%n;
		count++;
	}
}

void dequeue(){
	if(count==0){
		cout<<"Empty";
	}
	else{
		queue[front]=0;
		front=(front+1)%n;
		count--;
	}
}
bool isempty(){
	return(count==0);
}
int first(){
	return queue[front];
	
}
int size(){
	return(count);
}
void display(){
	
   if (count==0) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are :\n";
   if (front < rear) {
      while (front < rear){
         cout<<queue[front]<<" ";
         front++;
      }
   } else if(rear<=front) {
      while (front < n - 1) {
         cout<<queue[front]<<" ";
         front++;
      }
     int i=0;
      while (i <= rear) {
         cout<<queue[i]<<" ";
         i++;
      }
   }
   cout<<endl;
}
int main(){

	int element;
	int flag;
	do{
		cout<<"<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>"<<endl;
		cout<<"1->Queue an element"<<endl;
		cout<<"2->Dequeue an element"<<endl;
		cout<<"3->Empty or not empty"<<endl;
		cout<<"4->First element in the queue"<<endl;
		cout<<"5->Size of the queue"<<endl;
	    cout<<"6->Dispaly the queue"<<endl;
		cout<<"7->exit"<<endl;
		cout<<"Enter your choice"<<endl;
		
		cin>>flag;
		switch(flag){
			case 1:
				cout<<"Enter the element to be inserted"<<endl;
				cin>>element;
				enqueue(element);
				break;
			case 2:
				dequeue();
				cout<<"Dequeued"<<endl;
				break;
			case 3:
			    if(isempty()){
			    	cout<<"Queue is empty";
				}else{
					cout<<"Not Empty"<<endl;
				}
			    
				break;
			case 4:
			    cout<<first()<<endl;
			   
				break;
			case 5:
			    cout<<size()<<endl;
			    
				break;
			case 6:
			    display();
				break;
			default:
			     break;					
				
		}
	}while(flag!=7);
	return 0;
}
