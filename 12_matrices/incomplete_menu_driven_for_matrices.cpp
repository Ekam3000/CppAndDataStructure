#include<iostream>
using namespace std;
int ch;
class Matrices
{
    public :
    int *A;
    int n;

    Matrices()
    {
        n=2;
        A=new int[2];
    }
    Matrices(int n1)
    {
    this->n=n1;
    A=new int[n];
    }
    ~Matrices()
    {
      delete []A;
    }

    void get(int i,int j)
    {
        if(i==j)
        {
          cout<<"your "<<i<<" "<<j<<" element is :";
          cout<<A[i-1];
        }
        cout<<endl;
    }
    void set(int i, int j,int x)
    {
        if(ch==1)
        {
        if(i==j)
         cout<<"u have set your "<<i<<" "<<j<<" element to a new value.";
        {
            A[i-1]=x;
        }
        cout<<endl;
        }
    }
    void creatematrix()
    {
        int x;
        for(int i=1; i<=n;i++)
        {
            for(int j=1 ;j<=n;j++)
            {
                if(ch==1)
                {
                if(i==j)
                {
                    cout<<"enter the "<<i<<" "<<j<<" element";
                    cin>>x;
                    A[i-1]=x;
                }
                }
            }
            cout<<endl;
        }
    }
    
    void create()
    {
        int x;
        for(int i=1; i<=n;i++)
        {
            for(int j=1 ;j<=n;j++)
            {
                
               cin>>x;
               set(i,j,x);
        
            }
            cout<<endl;
        }
    }
    void display()
    {
        for(int i=1; i<=n;i++)
        {
            for(int j=1 ;j<=n;j++)
            {
                if(ch==1)
                {
               if(i==j)
               {
                  cout<<A[i-1]<<" ";
               }
               else
               cout<<"0 ";
                }
        
            }
            cout<<endl;
        }
    }

};
int main(){
    int n;
    do
 {
 cout<<"\n\nMenu\n";
 cout<<"1. diagonal matrix\n";
 cout<<"2. Lower Triangular Matrix Row-Major Mapping\n";
 cout<<"3. Lower Triangular Matrix Column-Major Mapping\n";
 cout<<"4. Upper Triangular Matrix Row-Major Mapping\n";
 cout<<"5. Upper Triangular Matrix Column-Major Mapping\n";
 cout<<"6. Symmetric Matrix \n";
 cout<<"7. Tri-Diagonal \n";
 cout<<"8. Tri-Band Matrix \n";
 cout<<"9. Toeplitz Matrix\n";
 cout<<"10.Exit\n";
 cout<<"enter you choice ";
 cin>>ch;
 switch(ch)
 {
 case 1: cout<<"enter dimention of your daigonal matrix:";
 cin>>n;
Matrices m1(n);
m1.create();
m1.get(2,2);
m1.set(2,2,7);
m1.get(2,2);
m1.display();
 break;
 case 2: cout<<"enter dimention of your Lower Triangular Matrix Row-Major Mapping matrix:";
 cin>>n;
 Matrices m2(n);
m2.creatematrix();
m2.get(2,2);
m2.set(2,2,7);
m2.get(2,2);
m2.display();
break;

 
 }
 }while(ch<9);
 return 0;

}