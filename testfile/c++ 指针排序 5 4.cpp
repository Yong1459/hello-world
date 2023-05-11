#include<iostream>
using namespace std;
void sort(int a[],int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int c=0;c<n-1;c++){
			if(a[c]>a[c+1]){
				temp=a[c];
				a[c]=a[c+1];
				a[c+1]=temp;
			}
		}
	}
}
int main(){
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
