#include <iostream>
using namespace std;
// upper triangular column major formula is same as lower triangular row major formula.. think and do the code
class Matrices
{
public:
    int *A;
    int n;

    Matrices()
    {
        n = 2;
        A = new int[3]; // for a 2x2 matrix number of elements will be three. 1+2
    }
    Matrices(int n1)
    {
        this->n = n1;
        A = new int[(n * (n + 1)) / 2]; // NOte: the  number of zero elements are n*(n-1)/2;
    }
    ~Matrices()
    {
        delete[] A;
    }

    void get(int i, int j)
    {
        if (j >= i)
        {
            cout << "your " << i << " " << j << " element is :";
            cout << A[(j * (j - 1)) / 2 + i - 1];
        }
        cout << endl;
    }
    void set(int i, int j, int x)
    {
        if (j >= i)
            cout << "u have set your " << i << " " << j << " element to a new value.";
        {
            A[(j * (j - 1)) / 2 + i - 1] = x;
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

                if (j >= i)
                {
                    cout << "enter the " << i << " " << j << " element";
                    cin >> x;
                    A[(j * (j - 1)) / 2 + i - 1] = x;
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

                if (j >= i)
                {
                    cout << A[(j * (j - 1)) / 2 + i - 1] << " ";
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
    cout << "enter dimention of your upper Triangular Matrix column-Major Mapping matrix:";
    cin >> n;
    Matrices m1(n);
    cout << "create your matrix:";
    m1.creatematrix();
    m1.get(2, 2);
    m1.set(2, 2, 7);
    m1.get(2, 2);
    m1.display();
}