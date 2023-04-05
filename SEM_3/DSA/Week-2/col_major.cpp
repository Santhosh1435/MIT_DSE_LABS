#include<iostream>
using namespace std;
int main(){
    int i;
    char str[]="LANJA";
    for(i=0;str[i]!='\0';i++);
    cout<<i;
    return 0;
}

	/*int n,i,j;
	cout<<"Enter the size of the matrix: ";
	cin>>n;

	cout<<"Enter the "<<n*n<<" elements of the diagonal matrix: ";
	int arr[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}

	int b[(n*n)]={};
	int k=0;

	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			b[k]=arr[i][j];
			k++;
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
	cout<<b[(q*n)+p];

	return 0;
}
*/
