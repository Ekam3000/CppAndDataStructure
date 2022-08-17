// index of 2d array element is the
// number of cells that we skip.
// index= c*i+j
// c the total number of column has
// to pass to the function  to
// calculate index of array elements
#include <iostream>
using namespace std;
void print_array(int index[][20], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << index[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int index[20][20] = {{1, 2}, {3, 4}};
    // print_array(index,2,2);
    // print_array(index,2,5);
    print_array(index, 5, 5);

    /*int index[20][20];
    int m,n;
    cout<< "enter number of rows and column"<<endl;
    cin>>m>>n;
    //taking input
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>index[i][j];
        }
    }
    print_array(index,m,n);
   // print array row wise
   cout<<"row wise:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<index[i][j];
}
cout<<endl;
    }
   // print array column wise
   cout<<"column wise:"<<endl;
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<index[i][j];
}
cout<<endl;
    }*/
}