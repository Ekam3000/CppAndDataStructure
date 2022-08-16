#include <iostream>
using namespace std;
int main()
{ 
    int array[] = {1, 2, 3, 3, 5, 7, 9, 13, 15, 15, 15, 20};
    int size = sizeof(array) / sizeof(int);
    int count = 1;
    int readingNumber;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == array[i + 1])
        {
            int j;
            readingNumber = array[i];
            for (j = i; array[j] == array[j + 1]; j++)
            {
                count++;
            }
            cout << readingNumber << endl;
            cout << "no of repitation" << count << endl;
            count = 1;
            i = j;
        }
    }
}