#include <iostream>
using namespace std;
int main()
{
    int array[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int size = sizeof(array) / sizeof(int);
    int count = 1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] != -1)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (array[i] == array[j])
                {
                    count++;
                    array[j] = -1;
                }
            }
        }
        if (count > 1)
        {
            cout << array[i] << endl;
            cout << "no of repitation" << count << endl;
            count = 1;
        }
    }
}