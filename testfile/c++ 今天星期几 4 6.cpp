#include<iostream>
using namespace std;
int main()
{
	char ew[7][20]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
    int a[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};  
	int y,m,d; 
	cin>>y>>m>>d;
	if(y%4==0&&y%100!=0||y%400==0)   
	a[2]=29;  
	int ans=d,i; 
	for(i=1;i<=m-1;i++){                    
		ans+=a[i];
	}
	int s,r;
	s=y-1+(y-1)/4-(y-1)/100+(y-1)/400+ans;
	r=s%7;
	for(i=0;i<=6;i++){
		if(r==i){
			cout<<ew[i]<<endl;
			break;
		}
	}
	
} 
