#include<iostream>
#include<cstdio>
using namespace std;
int zhuanhua(char a){
	if(a=='A' || a=='B' || a=='C'){
		return 2;
	}
	else if(a=='D' || a=='E' || a=='F'){
		return 3;
	}
	else if(a=='G' || a=='H' || a=='I'){
		return 4;
	}
	else if(a=='J' || a=='K' || a=='L'){
		return 5;
	}
	else if(a=='M' || a=='N' || a=='O'){
		return 6;
	}
	else if(a=='P' || a=='Q' || a=='R' || a=='S'){
		return 7;
	}
	else if(a=='T' || a=='U' || a=='V'){
		return 8;
	}
	else if(a=='W' || a=='X' || a=='Y' || a=='Z'){
		return 9;
	}
}
int main()
{
	char a[7];
	cin>>a;
	for(int i=0;i<7;i++){
		cout<<zhuanhua(a[i]);
	}
}
