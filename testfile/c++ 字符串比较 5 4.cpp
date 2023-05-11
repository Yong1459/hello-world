#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char a[10000]={"\0"},b[10000]={"\0"};
	int i=0,c=0,temp=0,j=0,count=0;
	gets(b);
	gets(a);
	for(i=0;a[i]!='\0';i++){
		j=0;
		c=0;
		if(a[i]==b[c]){
			temp=i;
			for(c=0;b[c]!='\0';c++){
				if(a[temp]==b[c]){
					temp++;
					j=1;
				}
				else{
					j=0;
					break;
				}
			}
		}
		if(j==1){
			cout<<i<<" ";
			count++;
		}
	}
	if(count==0){
		cout<<"-1";
	}

} 
