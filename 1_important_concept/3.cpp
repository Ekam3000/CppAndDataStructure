#include<iostream>
using namespace std;
 class Shape {
     public:
     int height ;
     int width;

 };
 int main(){
    //  concept 
     Shape *s= new Shape();
    //  or
    // Shape *s= new Shape;
    
     s->height =1;
     cout<<s->height;
 }