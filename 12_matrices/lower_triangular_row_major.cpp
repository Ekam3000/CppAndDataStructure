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
        A=new int[3];  // for a 2x2 matrix number of elements will be three. 1+2
    }
    Matrices(int n1)
    {
    this->n=n1;
    A=new int[(n*(n+1))/2];  //NOte: the  number of zero elements are n*(n-1)/2;
    }
    ~Matrices()
    {
      delete []A;
    }

    void get(int i,int j)
    {
        if(i>=j)
        {
          cout<<"your "<<i<<" "<<j<<" element is :";
          cout<<A[(i*(i-1))/2 + j-1]; 
        }
        cout<<endl;
    }
    void set(int i, int j,int x)
    {
        if(i>=j)
         cout<<"u have set your "<<i<<" "<<j<<" element to a new value.";
        {
            A[(i*(i-1))/2 + j-1]=x; 
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
            
                if(i>=j)
                {
                    cout<<"enter the "<<i<<" "<<j<<" element";
                    cin>>x;
                    A[(i*(i-1))/2 + j-1]=x;
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
                
               if(i>=j)
               {
                  cout<<A[(i*(i-1))/2 + j-1]<<" ";
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
 cout<<"enter dimention of your Lower Triangular Matrix Row-Major Mapping matrix:";
 cin>>n;
Matrices m1(n);
 cout<<"create your matrix:";
 // create your nxn matrix according to given condition of making an required asked matrix.
m1.create();
m1.get(2,2);
m1.set(2,2,7);
m1.get(2,2);
m1.display();

}