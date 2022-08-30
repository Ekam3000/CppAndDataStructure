#include<iostream>
using namespace std;
struct rectangle{
    int length;
    int bredth;

};
int initialize(struct rectangle *r,int l,int b){
    (*r).length =l;
    r->bredth=b;
}
int area(struct rectangle r1){
    r1.length++;
    return r1.length*r1.bredth;
}
void changelength(struct rectangle *r,int l){
    r->length=l;
}
int main(){
    rectangle r;
   initialize(&r,10,5);
   cout<<"Area of rectangle is"<<area(r);
   changelength(&r,20);
}
// converting structure to class (oops)
/*using namespace std;
#include <iostream>
class rectangle
{
private:
    int length;
    int bredth;

public:
    void initialize(int l, int b)
    {
        length = l;
        bredth = b;
    }
    int area()
    {
        length++;
        return length * bredth;
    }
    void changelength(int l)
    {
        length = l;
    }
};
int main()
{
    rectangle r;
    r.initialize(10, 5);
    cout << "Area of rectangle is" << r.area();
    r.changelength(20);
}*/