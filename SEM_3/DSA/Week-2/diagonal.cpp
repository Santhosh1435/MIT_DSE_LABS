#include<iostream>
using namespace std;

int main(){
	int n,i,j;
	cout<<"Enter the size of the matrix: ";
	cin>>n;
	cout<<"Enter the "<<n<<" elements of the diagonal matrix: ";
	int arr[n][n];
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j)
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
	
	int b[(n*(n+1))/2]={};
	int k=0;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
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
	if(p==q){
		cout<<b[p];
	}
	else cout<<"0";
	return 0;
}
