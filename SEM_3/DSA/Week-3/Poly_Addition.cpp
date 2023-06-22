#include<iostream>
using namespace std;

struct poly{
	int coeff, exp;
};

int main(){
	int m,n;
	int i,j,k;
	cout<<"Enter the number of terms for first polynomial: ";
	cin>>m;
	cout<<"Enter the number of terms for second polynomial: ";
	cin>>n;
	struct poly p1[m], p2[n], p3[m+n];
	p1[0].coeff=m;
	p2[0].coeff=n;
	cout<<"Enter the coefficients and exponents of first poly: ";
	for(i=1;i<=m;i++){
		cin>>p1[i].coeff>>p1[i].exp;
	}
	cout<<"Enter the coefficients and exponents of second poly: ";
	for(i=1;i<=n;i++){
		cin>>p2[i].coeff>>p2[i].exp;
	}
	i=1;
	j=1;
	k=1;
	
	while(i<=m && j<=n){
		if(p1[i].exp==p2[j].exp){
			if(p1[i].coeff+p2[j].coeff!=0){
				p3[k].coeff=p1[i].coeff+p2[j].coeff;
				p3[k].exp=p2[j].exp;
				i++;j++;k++;
			}
		}
		else{
			if(p1[i].exp>p2[i].exp){
				p3[k].coeff=p1[i].coeff;
				p3[k].exp=p1[i].exp;
				i++;k++;
			}
			else if(p1[i].exp<p2[i].exp){
				p3[k].coeff=p2[j].coeff;
				p3[k].exp=p2[j].exp;
				j++;k++;
			}
		}
	}
		while(i<=m){
			p3[k].coeff=p1[i].coeff;
			p3[k].exp=p1[i].exp;
			i++;k++;	
		}
		while(j<=n){
			p3[k].coeff=p2[j].coeff;
			p3[k].exp=p2[j].exp;
			j++;k++;	
		}
	p3[0].coeff=k-1;
	p3[0].exp=0;
	cout<<"Coefficients\tExponents"<<endl;
	
	for(i=0;i<k;i++){
		cout<<p3[i].coeff<<"\t\t"<<p3[i].exp<<endl;
	}
	
	cout<<"Polynomial: ";
	for(i=0;i<k;i++){
		if(i==k-1){
			cout<<p3[i].coeff<<"x^"<<p3[i].exp;
		}
		else
		cout<<p3[i].coeff<<"x^"<<p3[i].exp<<"+";
	}
	return 0;
	
}
