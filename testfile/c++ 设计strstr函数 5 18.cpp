#include<iostream> 
#include<cstdio>
using namespace std;
int ms(char a[],char b[]){
	int i=0,c=0,temp=0,d=0,sb=0;
	for(c=0;b[c]!='\0';c++){
	}
	for(i=0;a[i]!='\0';i++){
		if(a[i]==b[0]){
			for(d=0;d<c;d++){
				if(a[i+d]==b[d]){
					temp=1;
				}
				else{
					temp=0;
					break;
				}
			}
			if(temp==1){
				break;
			}
		}
	}
	if(temp==0){
		cout<<"-1";
	}
	else
	cout<<i;
	} 
int main(){
	char a[500],b[500];
	cin>>a>>b;
	ms(a,b);
}
