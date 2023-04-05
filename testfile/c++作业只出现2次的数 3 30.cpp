#include<iostream>
using namespace std;
void chengxu(int a[],int b[],int c){
	int count=0,d=0,p=0;
	for(int i=0;i<c;i++){
		count=0;
		for(int m=i+1;m<c;m++){
			if(a[m]==a[i]){
				count++;
			}
		}
		for(int m=i-1;m>=0;m--){
			if(a[m]==a[i]){
				p++;
			}
		}
		
		if(count==1 && p==0){
			b[d]=a[i];
			d++;
		}
	}
}
int main()
{
	int n,a[50],b[50]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	for(int i=0;i<50;i++){
		b[i]=999;
	}
	chengxu(a,b,n);
	for(int i=0;b[i]!=999;i++){
		cout<<b[i]<<" ";
	}
} 
