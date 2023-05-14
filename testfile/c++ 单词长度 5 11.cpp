#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	
	char a[100];
	scanf("%[^.]",a);
//	printf("%s\n",a);
	int i=0;
	int c=0;
	int count=0;
	int n=0;
    for(i=0;a[i]!='\0';i++){
    	n++;
    }
	for(i=0;a[i]!='\0'&& i<n;i++){
//		printf("%d ",i);
		if(a[i]!=' '){
			count=0;
			for(c=i;a[c]!=' '&&a[c]!='\0';c++){
				count++;
			}
			i=c;
			cout<<count<<" ";
		}
//		printf("%s\n",a);
	}
	
	
    
}
