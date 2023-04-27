#include<iostream>
using namespace std;
int panduan(int d[][200],int i,int j,int n){
	int duan=1;
	for(int t=0;t<n;t++){
		if(d[t][j]<d[i][j]){
			duan=0;
			break;
		}
		else
		duan=1;
	}
	return duan;
}

int main()
{
	int c[200][200];
	int a,b,i,j,e1,e2;
	int n=0;
	int num=0;
	int pan=0;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>c[i][j];
		}
	}
	i=0;
	j=0;
	for(i=0;i<n;i++){
		num=c[i][0];
		for(b=0;b<n;b++){
			if(c[i][b]>num){
				num=c[i][b];
			} 
		}
//		cout<<num<<" "; 
		for(b=0;b<n;b++){
			if(c[i][b]==num){
//				cout<<panduan(c,i,b,n)<<endl;
				if(panduan(c,i,b,n)==1){
					pan=1;
					e1=i;
					e2=b;
					break;
				}
				
			}
		}
	
	}
	if(pan==1){
		cout<<e1<<" "<<e2;
	}
	else if(pan==0){
		cout<<"NO";
	}
	
}
