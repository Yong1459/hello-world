#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int a[20][20];
	for(int i=0;i<20;i++){
		for(int t=0;t<20;t++){
			a[i][t]=0;
		}
	}
	a[0][0]=1;
	a[1][0]=1;
	a[1][1]=1;
	for(int i=2;i<num;i++){
		int t=0;
		a[i][0]=1;
		for(t=1;t<i+1;t++){
			a[i][t]=a[i-1][t-1]+a[i-1][t];
		}
	}
	for(int i=0;i<num;i++){
		for(int t=0;t<i;t++){
			cout<<a[i][t]<<" ";
		}
		cout<<endl;
	}
	
}
