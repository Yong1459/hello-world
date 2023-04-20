#include<iostream>
#include<cstring>
using namespace std;
void zhuanhuan(int a, char b[]){
	if(a>=1 && a<=10){
		strcpy(b, "Children");
	}
	else if(a>=11 && a<=20){
		strcpy(b, "Teenagers");
	}
	else if(a>=21 && a<=40){
		strcpy(b, "Younth");
	}
	else if(a>=41 && a<=50){
		strcpy(b, "middle-aged");
	}
	else if(a>=51 && a<=80){
		strcpy(b, "Elderly");
	}
	else if(a>=81 && a<=100){
		strcpy(b, "Old man");
	}
}
int main()
{
	int a;
	char b[20];
	cin>>a;
	zhuanhuan(a,b);
	cout<<b;
} 
