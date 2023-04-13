#include<iostream>
using namespace std;
int panduan(int m){
	int n=0,t=m;
	while(m>0){
		n=n*10+m%10;
		m=m/10;
	}
	if(n==t){
		return 1;
	}

}
int main()
{
	int n=0,j=0;
	cin>>n;
	for(j=0;j<n;j++){
	
	int m=0,k=0,i=0,t=0;
	int a[30]={0};
	cin>>m>>k;
	for(i=0;i<k;i++){
		for(t=m;t<m+100;t++){
			if(panduan(t)==1){
				a[i]=t;
				m=t+1;
				break;
			}
		}
	}
	for(i=0;i<k;i++){
		cout<<a[i]<<" ";
	}
    }
}
