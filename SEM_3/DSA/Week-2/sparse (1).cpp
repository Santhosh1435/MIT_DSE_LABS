#include<iostream>
using namespace std;

struct Sparse{
	int r,c,v;
};
int main(){
	int i,j,m,n,count;

	cout<<"Enter the order of the matrix(m x n): ";
	cin>>m>>n;

	cout<<"Enter the elements of the matrix: ";
	int arr[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
			if(arr[i][j]!=0){
				count++;
			}
		}
	}
	struct Sparse S[count];
	S[0].r=m;
	S[0].c=n;
	S[0].v=count;
	int k=1;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(arr[i][j]!=0){
				S[k].r=i;
				S[k].c=j;
				S[k].v=arr[i][j];
				k++;
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}

	cout<<"Row\tColumn\tValue\n";

	for(i=0;i<k;i++){
		cout<<S[i].r<<"\t"<<S[i].c<<"\t"<<S[i].v<<"\n";

	}
	int b[S[0].r][S[0].c]={0};
	for(i=1;i<S[0].v+1;i++){
		b[S[i].r][S[i].c]=S[i].v;
	}
	cout<<"Reconstructed sparse matrix: \n";
	for(i=0;i<S[0].r;i++){
		for(j=0;j<S[0].c;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
