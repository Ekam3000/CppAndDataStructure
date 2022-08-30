#include<iostream>
using namespace std;
/*struct rectangle{
    int length;
    int bredth;
};*/
/*int area(struct rectangle r1){
    r1.length++; // length becomes 16 mow
    return r1.length*r1.bredth;
}
int main(){
   // rectangle r;
  rectangle r={10,5};
    r.length=15;
    r.bredth=10;
 cout<<"Area of rectangle is"<<area(r);// ans is 160
 cout<<"\n"<<r.length; // no change in length here
}*/
// call by reference
/*int area(struct rectangle &r1){
    r1.length++;
    return r1.length*r1.bredth;
}
int main(){
   // rectangle r;
  rectangle r={10,5};
    r.length=15;
    r.bredth=10;
 cout<<"Area of rectangle is"<<area(r);
  cout<<"\n"<<r.length; // length becomes 16 now

}*/
//call by address.
/*int area(struct rectangle *p,int j){
    (*p).length =j;
    return (*p).length*(*p).bredth;
}
int main(){
   // rectangle r;
  rectangle r={10,5};
    r.length=15;
    r.bredth=10;
 cout<<"Area of rectangle is"<<area(&r,13);
  cout<<"\n"<<r.length; // length becomes 13 now

}*/
// passing array through structure through call by value. array itself alone is pass by , pass by value here.
//remember when we pass array they are send by call by address always . they cant be send bu call by value. but if array through structure can be pass by call by value.
/*struct test{
    int A[5];
    int n;
};
void fun(struct test t1){
t1.A[0]=10;
t1.A[1]=11;
// no changes will appear as structure is passsed by call by value
}
int main(){
    struct test t={{2,4,6,8,10},5};
    fun(t);
    for(int i=0;i<t.n;i++){
        cout<<"\t"<<t.A[i];
    }
}*/

// ab ye dekho -->
struct test{
    int A[5];
    int n;
};
void fun(struct test*t1){
(*t1).A[0]=10;
(*t1).A[1]=11;
//  changes will appear as structure is passsed by call by address
}
int main(){
    struct test t={{2,4,6,8,10},5};
    fun(&t);
    t.A[0]=8;
    for(int i=0;i<t.n;i++){
        cout<<"\t"<<t.A[i];
    }
}

