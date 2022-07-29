#include<iostream>
using namespace std;
class s
{
    public:
    int *A;
    int size;
};
int main()
{
    s *B;
    B = new s;
    B->size=10;
    cout<<B->size;
    B->A=new int [B->size];
    cout<<"enter the members:"<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>B->A[i];
    }
    for(int i=0;i<4;i++)
    {
        cout<<B->A[i]<<" ";
    }
}