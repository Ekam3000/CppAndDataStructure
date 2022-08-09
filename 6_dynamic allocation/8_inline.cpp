#include <iostream>
using namespace std;
// without inline
/* function call hoye gaa , vo function defination ke pass jaye gaa body execute hoe gi return value hoe gi.. then return value int c and int z ke pass jaye gi*/
/* with inline -> function ke andar ki bogy sidha function call ke jagah k=jakar replace ho jaye ..int c,int z ko value sidha mil jaye gii*/
/*cons -> inline argument to be used only if body of fuction is of 1-2 lines*/
inline int max(int a, int b)
{
	return (a > b) ? a : b;
}
int main()
{
	int a, b;
	cin >> a >> b;
	int c = max(a, b);
	int x, y;
	x = 12;
	y = 34;
	int z = max(x, y);
}
