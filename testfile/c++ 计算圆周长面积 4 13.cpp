#include<iostream>
#include<cstdio>
using namespace std;
float zhouchang(int r){
	return 2*3.14*r;
}
float mianji(int r){
	return 3.14*r*r;
}
int main()
{
	int r,d;
	cin>>r;

	d=2*r;
	cout<<"ֱ��="<<d<<endl;
	printf("�ܳ�=%.2f\n",zhouchang(r)); 
	printf("���=%.2f",mianji(r)); 
}
