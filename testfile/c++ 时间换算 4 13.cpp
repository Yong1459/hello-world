#include<iostream>
using namespace std;
int main ()
{
	int a=0,b=0;
	int s=0,f=0;
	cin>>a;
	if(a>=0 && a<=2359){
		if(a<100){
			s=0;
			f=a;
		}
		else{
			s=a/100;
			f=a%100;
		}
		
		if(s<8){
			s=24-(8-s);
		}
		else{
			s=s-8;
		}
		
		if(s==0){
			cout<<f;
		}
		else{
			b=s*100+f;
			cout<<b;
		}
		
			
	}
	else
	cout<<"error";
}
