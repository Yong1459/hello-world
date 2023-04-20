#include<iostream>
using namespace std;
class shijian{
public:
	int a;
	int b;
	int s;
	int f;
};
int zhuanhuan(int a){
	int b=0,s=0,f=0;
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
			return f;
		}
		else{
			b=s*100+f;
			return b;
		}
		
			
	}
}
int main ()
{
	shijian a;
	cin>>a.a;
	if(a.a>=0 && a.a<=2359){
		cout<<zhuanhuan(a.a);
	}		
	else
	cout<<"error";
}
