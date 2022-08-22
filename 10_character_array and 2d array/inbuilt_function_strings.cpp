#include<iostream>
using namespace std;
#include<cstring>
int main(){
    char index[100];
    cin.getline(index,100);
    //strlen
    int length=strlen(index);
    cout<<"\n";
    cout<<length;
    cout<<endl;
    char array[100];
    cin.getline(array,100);
    cout<<endl<<array;
    //strcmp
    if(strcmp(index,array)==0){
        cout<<endl<<"true";
    }
    else
    cout<<endl<<"false";
    // strcpy
    cout<<"before copying:";
    cout<<"index:"<<index<<endl;
    cout<<"array:"<<array<<endl;
    strcpy(index,array);
     cout<<"after copying:";
    cout<<"index:"<<index<<endl;
    cout<<"array:"<<array<<endl;
    strcpy(index,"hello");
    cout<<"index:"<<index<<endl;
    cout<<"array:"<<array<<endl;
    // strncpy
    strncpy(index,array,3);
    cout<<"index:"<<index<<endl;
    cout<<"array:"<<array<<endl;
    char input1="abcd";
    char input2="xy";
    strncpy(input1,input2,4);
    cout<<"input1:"<<input1<<endl;
    cout<<"input2:"<<input2<<endl;



}