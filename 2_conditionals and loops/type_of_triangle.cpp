//lab eleven program code on triangles
#include <iostream>
using namespace std;

main()
{
    //variables
    float aside, bside, cside;
    //enter side a
    cout<<"enter the length of side a "<<endl;
    cin>>aside;
    //enter side b
    cout<<"enter the length of side b "<<endl;
    cin>>bside;     
    //enter side c
    cout<<"enter the length of side c "<<endl;
    cin>>cside;

// all sides equal
if(aside==bside && bside==cside)                 
   cout << "Equilateral triangle\n";

// at least 2 sides equal
else if(aside==bside || aside==cside || bside==cside)   

   cout << "Isosceles triangle\n";
// no sides equal
else                                
   cout << "Scalene triangle\n";            
}