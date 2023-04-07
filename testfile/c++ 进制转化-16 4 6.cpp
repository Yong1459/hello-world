#include<iostream>
using namespace std;
void zhuanhua(int a,char b[],int d)
{
	char c[20];
	for(int t=0;t<20;t++){
		c[t]='\0';
	}
	int i=0;
	while(a){
		if(d<=10){
			c[19-i]=a%d+48;
		    i++;
		    a=a/d;	
		}
		else{
			if(a%d>=10){
				c[19-i]=a%d+55;	
			}
			else{
				c[19-i]=a%d+48;
			}
			i++;
		    a=a/d;
		}
	}
	for(int t=0;t<20;t++){
		b[t]=c[t];
	}
	
}
int main()
{
	int a,n,d;
	cin>>n;
	char b[20][20];
	for(int f=0;f<n;f++){
		cin>>a>>d;
		zhuanhua(a,b[f],d);
	}
	for(int i=0;i<n;i++){
		for(int t=0;t<20;t++){
			cout<<b[i][t];
		}
		cout<<endl;
	}

}
