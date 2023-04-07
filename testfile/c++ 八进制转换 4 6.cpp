#include<iostream>
using namespace std;
void zhuanhua(int a,char b[])
{
	char c[5];
	for(int t=0;t<5;t++){
		c[t]='0';
	}
	int i=0;
	while(a){
		c[4-i]=a%8+48;
		i++;
		a=a/8;
	}
	for(int t=0;t<5;t++){
		b[t]=c[t];
	}
	
}
int main()
{
	int a;
	char b[5]="\0";
	cin>>a;
	zhuanhua(a,b);
	for(int i=0;i<5;i++){
		cout<<b[i];
	}
}
