#include<iostream>
#include<cstdio>
using namespace std;
long long pow(int x,int n){
	long long int c=x;
	for(int i=1;i<n;i++){
		c=x*c;
	}
	return c;
}
int main()
{
	int x,n;
	scanf("%d,%d",&x,&n);
	cout<<pow(x,n);
}
