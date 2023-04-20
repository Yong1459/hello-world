#include<iostream>
#include<cstring>
using namespace std;
void zhuanhuan(int a, char b[]){
	if(a<60){
		strcpy(b, "E");
	}
	else if(a>=60 && a<70){
		strcpy(b, "D");
	}
	else if(a>=70 && a<80){
		strcpy(b, "C");
	}
	else if(a>=80 && a<90){
		strcpy(b, "D");
	}
	else if(a>=90 ){
		strcpy(b, "A");
	}
}
int main()
{
	int a;
	char b[1];
	cin>>a;
	zhuanhuan(a,b);
	cout<<b;
} 
