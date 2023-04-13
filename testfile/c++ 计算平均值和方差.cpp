#include<iostream>
#include<cstdio>
using namespace std;
float pj(float a[]){
	int i=0;
	float t=0;
	for(i=0;i<6;i++){
		t=t+a[i];
	}
	return t/6;
}
float fc(float a[]){
	int i=0;
	float t=0;
	for(i=0;i<6;i++){
		t=t+a[i];
	}
    t=t/6;
	float g1=0,g2=0;
	for(i=0;i<6;i++){
		g1=g1+(a[i]-t)*(a[i]-t);
	} 
	g2=g1/6;
	return g2;
}
int main()
{
	int n;
	float a[6];
	float b[20][2];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int t=0;t<6;t++){
			cin>>a[t];
		}
		b[i][1]=pj(a);
		b[i][2]=fc(a);
	}
	for(int i=0;i<n;i++){
		printf("%.2f %.2f",b[i][1],b[i][2]);
		cout<<endl;
	}
}

