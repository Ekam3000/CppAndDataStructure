#include<iostream>
using namespace std;
// M[i,j]=M[i-1,j-1]
class Matrices
{
    public :
    int *A;
    int n;

    Matrices()
    {
        n=2;
        A=new int[3];
    }
    Matrices(int n1)
    {
    this->n=n1;
    A=new int[n+n-1]; // elements of only first row and first column are required to be filled.
     
    }
    ~Matrices()
    {
      delete []A;
    }
    void get(int i,int j)
    {
        if(j>=i)
        {
          cout<<"your "<<i<<" "<<j<<" element is :";
          cout<<A[j-i]; // just take 
        }
        if(i>j)
        {
          cout<<"your "<<i<<" "<<j<<" element is :";
          cout<<A[n+i-j-1]; // n means skipping the n elements of first row from our linear array list, i-j is for picking the 1st,2nd,3rd..n-1 element from linear array and -1 is for making 1st element to a 0th element,2nd element to a 1st element, 3rd element to a 2nd element and so on after skipping n elements from the linear array. 
        }
        cout<<endl;
    }
    void set(int i, int j,int x)
    {
        if(j>=i){
         cout<<"u have set your "<<i<<" "<<j<<" element to a new value.";
            A[j-i]=x; 
        }
       else if(i>j){
         cout<<"u have set your "<<i<<" "<<j<<" element to a new value.";
            A[n+i-j-1]=x; 
        }
        cout<<endl;
    }
    void creatematrix(int x, int i,int j)
    {
            
                if(j>=i)
                {
                    A[j-i]=x;
                }
              else if(i>j)
                {
                    A[n+i-j-1]=x;
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
                
               if(j>=i)
               {
                  cout<<A[j-i]<<" ";
               }
               else
               {
                cout<<A[n+i-j-1]<<" ";
               }
            }
            cout<<endl;
        }
    }

};
int main()
{
 int n;
 cout<<"enter dimension of your toeplitz matrix:";
 cin>>n;
Matrices m1(n);
// we are filling firstly the first row elements in our linear array.. then we will fill our first column elements
m1.creatematrix(2,1,1);
m1.creatematrix(3,1,2);
m1.creatematrix(4,1,3);
m1.creatematrix(5,1,4);
m1.creatematrix(6,1,5);
m1.creatematrix(7,2,1);
m1.creatematrix(8,3,1);
m1.creatematrix(9,4,1);
m1.creatematrix(10,5,1);
m1.display();

}