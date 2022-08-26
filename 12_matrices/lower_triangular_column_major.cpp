#include <iostream>
using namespace std;

class Matrices
{
public:
    int *A;
    int n;

    Matrices() // default constructor, sets square matrix of order 2.
    {
        n = 2;
        A = new int[3]; // for a 2x2 matrix number of elements will be three. 1+2
    }
    Matrices(int n1)
    {
        this->n = n1;
        A = new int[(n * (n + 1)) / 2]; // 1 + 2 + 3 + 4 +.....n  //NOte: the  number of zero elements are n*(n-1)/2;
    }
    ~Matrices()
    {
        delete[] A;
    }
    void get(int i, int j)
    {
        if (i >= j)
        {
            cout << "your " << j << " " << i << " element is :";
            cout << A[(j - 1) * n - ((j - 1) * (j - 2)) / 2 + i - j]; // A[4][4] ={5+4+3} +0 =12  , A[5][4]={5+4+3}+1=13---{ {n +n-1 +n-2 ---+n-(j-2)}+(i+j)-->(i-j)}means A[5][3]=5-3 =2; n-(j-2) means n is decreasing its value upto j-2 times for a particular value of j
        }
        cout << endl;
    }
    void set(int i, int j, int x)
    {
        if (i >= j)
            cout << "u have set your " << j << " " << i << " element to a new value.";
        {
            A[(j - 1) * n - ((j - 1) * (j - 2)) / 2 + i - j] = x;
        }
        cout << endl;
    }
    void creatematrix()
    {
        int x;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i >= j)
                {
                    cout << "enter the " << j << " " << i << " element";
                    cin >> x;
                    A[(j - 1) * n - ((j - 1) * (j - 2)) / 2 + i - j] = x;
                }
            }
            cout << endl;
        }
    }
    void create()
    {
        int x;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> x;
                set(i, j, x);
            }
            cout << endl;
        }
    }
    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                if (i >= j)
                {
                    cout << A[(j - 1) * n - ((j - 1) * (j - 2)) / 2 + i - j] << " ";
                }
                else
                    cout << "0 ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n;
    cout << "enter dimension of your Lower Triangular Matrix column-Major Mapping matrix:";
    cin >> n;
    Matrices m1(n);
    cout << "create your matrix:";
    // create your nxn matrix according to given condition of making an required asked matrix.
    m1.create();
    m1.get(2, 2);
    m1.set(2, 2, 7);
    m1.get(2, 2);
    m1.display();
}