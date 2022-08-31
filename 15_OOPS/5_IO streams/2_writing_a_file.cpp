#include<iostream>
#include<fstream>
using namespace std;
int main()
// when u are opening an output file ,if it is not existing then a new file will be created.
//ios::app
//ios::trunc
// if nothing mentioned then trunc will be called.
{
ofstream outfile("my.txt");
outfile<<"hello"<<endl;
outfile<<25<<endl;
outfile.close();
}