#include <iostream>
using namespace std;
class Element // for particular element we will store its row ,column,and that array
{
public:
    int i;
    int j;
    int x;
};
class Sparse
{
private:
    int m;
    int n;        // no of columns
    int num;      // number of non zero elements
    Element *ele; // will declare a dyanmic array for holding array elements
public:
    Sparse(int m, int n, int num)
    {
        this->m = m;                  // number of rows
        this->n = n;                  // number of columns
        this->num = num;              // number of non zero elements
        ele = new Element[this->num]; // now it will contain all information of every particular elements
    }
    ~Sparse()
    {
        delete[] ele;
    }
    Sparse operator+(Sparse &s);
    void display();
    void create();
};
void Sparse ::create()
{
    cout << "Enter non-zero  Elements";
    for (int i = 0; i < num; i++)
    {
        cin >> ele[i].i;
        cin >> ele[i].j;
        cin >> ele[i].x;
    }
}
Sparse Sparse::operator+(Sparse &s)
{
    int i, j, k;
    if (m != s.m || n != s.n)
        return Sparse(0, 0, 0);
    Sparse *sum = new Sparse(m, n, num + s.num);

    i = j = k = 0;
    while (i < num && j < s.num)
    {
        if (ele[i].i < s.ele[j].i)
            sum->ele[k++] = ele[i++]; // data of first matrix
        else if (ele[i].i > s.ele[j].i)
            sum->ele[k++] = s.ele[j++]; // data of second matix
        else
        {
            if (ele[i].j < s.ele[j].j)
                sum->ele[k++] = ele[i++];
            else if (ele[i].j > s.ele[j].j)
                sum->ele[k++] = s.ele[j++];
            else
            {
                // sum->ele[k]=ele[i];
                // sum->ele[k++].x=ele[i++].x+s.ele[j++].x;
                //  or
                sum->ele[k] = ele[i++];
                sum->ele[k++].x += s.ele[j++].x;
            }
        }
    }
    for (; i < num; i++)
        sum->ele[k++] = ele[i];
    for (; j < s.num; j++)
        sum->ele[k++] = s.ele[j];
    sum->num = k;
    return *sum;
}

void Sparse::display()
{
    int i, j, k = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == ele[k].i && j == ele[k].j)
                cout << ele[k++].x << " ";
            else
                cout << "0 ";
        }
        cout << "\n";
    }
}
int main()
{
    Sparse s1(5, 5, 5);
    Sparse s2(5, 5, 5);
    s1.create();
    s2.create();
    Sparse sum = s1 + s2;
    cout << "First Matrix" << endl;
    s1.display();
    cout << "Second Matrix" << endl;
    s2.display();
    cout << "Sum Matrix" << endl;
    sum.display();
    return 0;
}
/*
Enter non-zero Elements
0 0 1
1 1 1
2 2 1
3 3 1
4 4 1
Enter non-zero Elements
0 0 2
1 0 2
2 0 2
3 0 2
4 0 2
*/
