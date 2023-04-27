#include<iostream>
using namespace std;
int gys(int a,int b,int c){
	int i=0;
	if(a>b){
		for(i=b;i>0;i--){
			if(a%i==0 && b%i==0){
				c=i;
				break;
			}
		}
	}
	else{
		for(i=a;i>0;i--){
			if(a%i==0 && b%i==0){
				c=i;
				break;
			}
		}
	}
	return c;
} 
int gbs(int a,int b,int c){
	int i=0;
	if(a>b){
		for(i=a;;i++){
			if(i%a==0 && i%b==0){
				c=i;
				break;
			}
		}
	}
	else{
		for(i=b;;i++){
			if(i%a==0 && i%b==0){
				c=i;
				break;
			}
		}
	}
	return c;
}
int main()
{
	int a,b,c1=0,c2=0;
	cin>>a>>b;
	c1=gys(a,b,c1);
	c2=gbs(a,b,c2);
	cout<<c1<<" "<<c2;
}


