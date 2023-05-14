#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	char a[32];
	char temp;
	cin>>a;
	for(int i=0;i<16;i++){
		temp=a[31-i];
		a[31-i]=a[i];
		a[i]=temp;
	}
    for(int i=0;i<32;i++){
		cout<<a[i];
	}
}
