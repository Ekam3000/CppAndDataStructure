#include<iostream>
using namespace std;
class circle {
    private:
    int radius;
    float x,y;
    public:
    circle(){

    }
    circle (int rr,float xx,float yy){
        radius =rr;
        x= xx;
        y=yy;
    }
   // circle operator = (circle& c){
    
    circle & operator =(circle& c){
        /* return by reference ko samajne ke liye aap ye dekhe 
        int i=5; 
        pehle 5 ki ek buffer syatem (temporary) me save hota hai uske baad humne dekha 5 ko store karne ke liye (i) hai to (i) ke block me 5 copy ho jaye gaa. vese hi *this pointer jab content return kare ga vo directly c2/c3 me copy nii ho jaye ga pehle ek buffer block bane ga usme value copy hogi then wahi copied content jaakar c2/c3 me print hoga ..ab isse buffer block se bachne ke liye taake memory waste naa ho hum return by reference kar rahe hai. return by reference karne se buffer block c1 ke block ko hi points kare ga.
        */
    
    
        cout<<endl<<"assignment operator invoked";
        radius =c.radius;
        x=c.x;
        y=c.y;
      // return circle (radius,x,y);
      return *this; // c1 ke block ka pura content c2 me copy ho gya.then again for the second time  c2 ke block ka pura content c3 me copy ho gya.
    }
    void showdata(){
        cout<<endl<<"\n radius ="<<radius;
        cout<<endl<<" X-coordinate ="<<x;
        cout<<endl<<" Y-coordinate ="<<y<<endl;

    }
};
int main(){
    circle c1(10,2.5,2.5);
    circle c2, c3;
    c3=c2=c1;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}
/*
assignment operator invoked
assignment operator invoked

 radius =10
 X-coordinate =2.5
 Y-coordinate =2.5


 radius =10
 X-coordinate =2.5
 Y-coordinate =2.5


 radius =10
 X-coordinate =2.5
 Y-coordinate =2.5
 */