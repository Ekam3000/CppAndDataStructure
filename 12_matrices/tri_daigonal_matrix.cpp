#include<iostream>
#include<algorithm>
using namespace std;

class Matrices
{
    public :
    int *A;
    int n;

    Matrices()
    {
        n=2;
        A=new int[4];
    }
    Matrices(int n1)
    {
    this->n=n1;
    A=new int[3*n-2];
    }
    ~Matrices()
    {
      delete []A;
    }

    void get(int i,int j)
    {
        if(abs(i-j)<=1)
        {
          cout<<"your "<<i<<" "<<j<<" element is :";
          cout<<A[2*i+j-3];
        }
        cout<<endl;
    }
    void set(int i, int j,int x)
    {
        if(abs(i-j)<=1){
         cout<<"u have set your "<<i<<" "<<j<<" element to a new value.";
         A[2*i+j-3]=x;
        }
        cout<<endl;
        
    }
    void creatematrix()
    {
        int x;
        for(int i=1; i<=n;i++)
        {
            for(int j=1 ;j<=n;j++)
            {
            
                if(abs(i-j)<=1)
                {
                    cout<<"enter the "<<i<<" "<<j<<" element";
                    cin>>x;
                    A[2*i+j-3]=x;
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
               if(abs(i-j)<=1){
                  cout<<A[2*i+j-3]<<" ";
               }
               else
               cout<<"0 ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int n;
 cout<<"enter dimension of your tri-daigonal matrix:";
 cin>>n;
Matrices m1(n);
// create your nxn matrix according to given condition of making an required asked matrix.
m1.create();
m1.get(2,2);
m1.set(2,2,7);
m1.get(2,2);
m1.display();
}


/*
#include<iostream>
using namespace std;
class Matrices
{
    public :
    int *A;
    int n;

    Matrices()
    {
        n=2;
        A=new int[4];
    }
    Matrices(int n1)
    {
    this->n=n1;
    A=new int[3*n-2];
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
          cout<<A[n-1+i-1];
        }
        if(i-j==1)
        {
          cout<<"your "<<i<<" "<<j<<" element is :";
          cout<<A[i-1];
        }
        if(i-j==-1)
        {
          cout<<"your "<<i<<" "<<j<<" element is :";
          cout<<A[2*n-1+i-1];
        }
        cout<<endl;
    }
    void set(int i, int j,int x)
    {
        if(i==j){
         cout<<"u have set your "<<i<<" "<<j<<" element to a new value.";
        
            A[n-1 +i-1]=x;
        }
         else if(i-j==1){
         cout<<"u have set your "<<i<<" "<<j<<" element to a new value.";
        
            A[i-1]=x;
        }
       else  if(i-j==-1){
         cout<<"u have set your "<<i<<" "<<j<<" element to a new value.";
            A[2*n-1 + i-1]=x;
        }
        cout<<endl;
        
    }
    void creatematrix()
    {
        int x;
        for(int i=1; i<=n;i++)
        {
            for(int j=1 ;j<=n;j++)
            {
            
                if(i==j)
                {
                    cout<<"enter the "<<i<<" "<<j<<" element";
                    cin>>x;
                    A[n-1 + i-1]=x;
                }
               else if(i-j==1)
                {
                    cout<<"enter the "<<i<<" "<<j<<" element";
                    cin>>x;
                    A[i-1]=x;
                }
               else if(i-j==-1)
                {
                    cout<<"enter the "<<i<<" "<<j<<" element";
                    cin>>x;
                    A[2*n-1 + i-1]=x;
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
                
        
               if(i==j){
                  cout<<A[n-1 + i-1]<<" ";
               }
              else if(i-j==1){
                  cout<<A[i-1]<<" ";
               }
             else if(i-j==-1){
                  cout<<A[2*n-1 + i-1]<<" ";
               }
               else
               cout<<"0 ";
        
            }
            cout<<endl;
        }
    }
};
int main()
{
    int n;
 cout<<"enter dimension of your tri-daigonal matrix:";
 cin>>n;
Matrices m1(n);
m1.create();
m1.get(2,2);
m1.set(2,2,7);
m1.get(2,2);
m1.display();
}
*/