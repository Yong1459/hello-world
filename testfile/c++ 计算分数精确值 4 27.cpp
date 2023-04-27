#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int d[200]={0};
	int a,b,c;
	scanf("%d/%d",&a,&b);
	for(int i=0;i<200;i++){
		if(a<b && a!=0){
			d[i]=a*10/b;
			a=a*10%b;
		}
		else if(a==0){
			break;
		}
		else if(a>b){
			a=a%b;
			i--;
		}
	}
	cout<<"0.";
	for(int i=0;i<200;i++){
		cout<<d[i];
	}
}
