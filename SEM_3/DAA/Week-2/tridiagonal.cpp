#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	
	cout<<"Enter the size of the square matrix: ";
	cin>>n;
	
	cout<<"Enter the "<<(3*n)-2<<" elements of lower triangular matrix: ";
	int arr[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i-j>1 || i-j<-1)
				arr[i][j]=0;	
			else 
				cin>>arr[i][j];	
			}	
		}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	int b[((3*n)-2)]={};
	int k=0;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i-j==1 || i-j==0 || i-j==-1){
			b[k]=arr[i][j];
			k++;	
			}
		}
	}
	cout<<"Mapped 1D array is: ";
	for(i=0;i<k;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	int p,q;
	cout<<"Enter the index of the element you want to access: ";
	cin>>p>>q;
	if(p-q==1 || p-q==0 || p-q==-1){
	cout<<b[2*p+q];
	}
	else cout<<"0";
	return 0;
}
