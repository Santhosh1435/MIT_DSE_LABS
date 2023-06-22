#include<iostream>
using namespace std;

	int queue[100];
	int n=100;
	int front=-1;
	int rear =-1;
	
void enqueue(int element){
	if(rear==n){
		cout<<"Overflow";
	}
	else{
		queue[rear]=element;
		rear++;
	}
}

void dequeue(){
	if(front==rear){
		cout<<"Under flow";
	}
	else{
		queue[front]=0;
		front++;
	}
}
bool isempty(){
	return(front==rear);
}
int first(){
	return queue[front];
	
}
int size(){
	return(rear-front);
}
void display(){
	for(int i=front;i<rear;i++){
		cout<<queue[i]<<" ";
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
