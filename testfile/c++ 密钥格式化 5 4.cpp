#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char a[1000];
	char b[1000];
	char m[1000][1000];
	int k=0;
	gets(a);
	cin>>k;
	int c=0;
	for(int i=0;a[i]!='\0';i++){
		if(a[i]!='-'){
			b[c]=a[i];
			c++;
		}	
	}
//	cout<<b<<endl;
	int i=0,n=0,d=0;
	for(i=1000;b[i]=='\0';i--){
	}
	cout<<i<<endl;
	for(d=i;d>=0;d=d-k){
		for(int e=0;e<k;e++){
			m[n][e]=b[d-k+1+e];
		}
		n++;
	}
	for(int f=0;f<=d;f++){
		cout<<b[f];
	}
	if(n!=0){
		for(int f=n-1;n>=0;f--){
				cout<<"-"<<m[f];
			
		}
	}
	
} 
