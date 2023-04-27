#include<iostream>
using namespace std;
int main()
{
	int shi[20][1]={0};
	int a,b,i=0;
	while(cin>>a>>b){
		shi[a][0]=shi[a][0]+b;
	}
	for(i=19;shi[i][0]==0;i--){
	}
	i=i+1;
	for(int t=i;t>0;t--){
		if(shi[t][0]!=0 && t!=1){
			cout<<shi[t][0]<<"x"<<t<<"+";
		}
		else if(t==1){
			cout<<shi[t][0]<<"x"<<"+";
		}
	}
	cout<<shi[0][0];
}
