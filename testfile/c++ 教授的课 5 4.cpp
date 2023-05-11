#include<iostream>
using namespace std;
int iscancel(int a[],int n,int k){
	int i,shu=0;
	for(i=0;i<n;i++){
		if(a[i]<=0){
			shu++;
		}
	}
	if(shu<k){
		return 1;
	}
	else if(shu>=k){
		return 0;
	}	
}
int main()
{
	int i=0,n,k,a[1000];
	cin>>n>>k;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
//	cout<<iscancel(a,n,k);
	if(iscancel(a,n,k)==1){
		cout<<"YES"; 
	}
	else if(iscancel(a,n,k)==0){
		cout<<"NO";
	}
}
