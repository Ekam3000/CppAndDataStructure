/*3 5 6 7 10 

6       7       10      3       5*/
#include<iostream>
using namespace std;
void Rotation(int array[], int n,int d){
int j=0;
int temp;
while(j<d){
    int i=0;
    temp=array[0];
    while(i<(n-1)){
     array[i]=array[i+1];
     i++;
    }
  //  here imp point array[n-1] is used not array[i+1]
    array[n-1]=temp;
    j++;
}
}
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<endl;
    cout<<"enter rotation:";
    int d;
    cin>>d;
    cout<<endl;
    int array[10];
    cout<<"enter array elements:";
     for(int i=0;i<n;i++){
        cin>>array[i];
        cout<<endl;
    }
    Rotation( array, n, d);

     for(int i=0;i<n;i++){
        cout<<array[i];
        cout<<"\t";
    }
}
// also can be done by storing elements in another elements firstly in loop which starts from 'd' and end at n-1,
//then continue filling elements in another loop from 0 to 'd-1'