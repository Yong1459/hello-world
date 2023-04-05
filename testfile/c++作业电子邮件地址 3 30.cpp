#include<iostream>
using namespace std;
int main() 
{
    char email[50];
    cin>>email;
    int a=-1, d=-1;
    int a1=-1,d1=-1;
    int len=0,count1=0,count2=0;
    for (int i=0; email[i] !='\0';i++) {
        len++;
    }
    int chars = 1;
    for (int i = 0; i < len && email[i] != '\n'; i++) {
        char li= email[i];
        if(((li >= '0' && li <= '9') || (li >= 'a' && li <= 'z') || (li >= 'A' && li <= 'Z') || li == '_' || li == '-' || li == '@' || li == '.')==0) {
            	chars = 0;
                break;
        }
    }
    for (int i=0;i<len;i++) {
        if (email[i] =='@') {
        	count1++;
            a=i;
        }
        if(email[i]=='@' && count1==1){
        	a1=i;
        }
        if (email[i] =='.') {
        	count2++;
            d=i;
        }
         if(email[i]=='.' && count2==1){
        	d1=i;
        }
    }
    len=len-1;
    int va= (a!=-1 && a1>0 && a<len);
    int vd= (d!=-1 && d1>a+1 && d<len);

    if (chars==1 && va!=0 && vd!=0 && count1==1 && count2==1) {
        cout<<"yes"<<endl;
    } 
	else {
        cout<<"no"<<endl;
    }
    return 0;
}
