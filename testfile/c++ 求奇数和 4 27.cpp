#include<iostream>
using namespace std;

int even(int n){
	if(n%2==0){
		return 1;
	}
	else
	return 0;
}

int main()
{
	int a[30]={0},b=0,num=0;
	for(int i=0;num==0;i++){
		cin>>a[i];
		if(a[i]<=0){
			a[i]=0;
			num=1;
		}
		else{
			if(even(a[i])==1){
				i--;
			}
		}
	}
	for(int i=0;a[i]!=0;i++){
		b=b+a[i];
	}
	cout<<b;
}
