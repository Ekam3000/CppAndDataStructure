#include <iostream>
#include <cstring>
using namespace std;
char *mystrtok(char *str, char delim)
{
    // string and single char acts as delimiter.
    static char *input = NULL; // the state of the static function is initialized only once in the function call , and in the subsequent calls a static variable will have same state as in the previous state.
    if (str != NULL)
    {
        input = str; // input string copies to char pointer ptr
    }
    // check here -base case after the final token has been returned.
     if(input==NULL)
     {
         return NULL;
     }
    // start extracting tokens and stores in an array.
    // the size of the array we dont know, we will make the size as largest possible array as of input string.
    char *output = new char[strlen(input) + 1]; // this input char array is copied to an another array dynamically becoz we want the memory of the array where input string is copied still exist even after function call.
    int i=0;
    for (; input[i] != '\0'; i++)
    {
        
            if (input[i] != delim)
            {
                output[i] = input[i];
            }
        
        else
        {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }
    // corner case
    output[i]='\0';
    input=NULL;
    return output;
}
int main()
{
    char s[100] = "Today, is a rainy, day";
    char *ptr = mystrtok(s, ' ');
    cout << ptr << endl;
    while (ptr != NULL)
    {
        ptr = mystrtok(NULL, ' ');
        cout << ptr << endl;
    }
    return 0;
}