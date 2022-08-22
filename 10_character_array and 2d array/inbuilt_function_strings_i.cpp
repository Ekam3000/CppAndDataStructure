#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char a[10];
	char b[10];
	int c;
	cout<<"\n enter the string 'a' and 'b':";
	cin>>a>>b;
	cout<<"\n 1. string length :";
	cout<<"\n 2. string upper :";
	cout<<"\n 3. string lower :";
	cout<<"\n 4. string reverse :";
	cout<<"\n 5. string compare :";
	cout<<"\n 6. string copy :";
	cout<<"\n 7. string concatinate :";
	cout<<"\n choose your choice-";
	cin>>c;
	if(c==1){	
	int y;
	int z;
		z=strlen(b);
	   	y=strlen(a);
	    cout<<"\n result:"<<y;
	    cout<<"\n result:"<<z;
	}
	if(c==2){
		strupr(a);
		strupr(b);
		cout<<"\n result:"<<a;
		cout<<"\n result:"<<b;
	}
	if(c==3){
		strlwr(a);
		strlwr(b);
		cout<<"\n result:"<<a;
	    cout<<"\n result:"<<b;
	}
	if(c==4){
		strrev(a);
		strrev(b);
		cout<<"\n result:"<<a;
		cout<<"\n result:"<<b;
	}
	if(c==5){
		int x;
		x=strcmp(a,b);
		if(x==0)
		cout<<"\n strings are comparable."; // if the strings are exact same.
		else
		cout<<"\n sorry beta aapko strings compare nii karni aate";
	}
	if(c==6){
		strcpy(b,a);
		cout<<"\n result:"<<b;
	}
	if(c==7){
		strcat(a,b);
		cout<<"\n result: "<<a;
	}
	return 0;
}
