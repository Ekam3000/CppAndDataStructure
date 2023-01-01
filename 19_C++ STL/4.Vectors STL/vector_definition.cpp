#include <iostream>
#include <vector>
using namespace std;
int main()
{
  /*hame vector ka size nii btana padta , agar space ki kami
  hue to vector apni space double kar lega */

  /* dynamic allocation .for dynamic allocation u will
  have to delete the vector in its own */
  /*vector<int> * vp = new vector<int>(); //in this case hame v->push_back(number)
  vp->push_back(10);
	vp->push_back(20);
	vp->push_back(30);
	cout << vp->at(0) << endl;
	cout << vp->at(1) << endl;
	cout << vp->at(2) << endl;
  */
  vector<int> v;
  /*push_back will help us in identifying the space how
   much is required*/

  for (int i = 0; i < 100; i++)
  {
    cout << "capacity:" << v.capacity() << endl;
    cout << "size:" << v.size() << endl;
    v.push_back(i + 1);
  }
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  cout << v[0] << endl;
  cout << v[1] << endl;
  cout << v[2] << endl;
  v[1] = 100; 
  /* by using the below approach we may allocate the elements out of space
  of vector array*/
  /*
   v[3]=1002;
   v[4]=1034; */
  // push_back ke according last element 30 hai
  v.push_back(23);
  v.push_back(234);
  /* push_back ke according abhi sirf 5 element bhare hai 0-4 v[5]
   and v[6] random values print kare gaa */
  /* cout<<v[1]  <<endl;
   cout<<v[2]  <<endl;
   cout<<v[3]  <<endl;
   cout<<v[4]  <<endl;
   cout<<v[5]  <<endl;
   cout<<v[6]  <<endl; */
  /*now u will see that your result are not up to the mark
  so use square brackets for two things always
  1. get ke liye jaise v[6], btana to 6th element kon sa hai
  2. update ke liye kisi position element ko agar vo element ko memory allocate hui padi hai like we can change v[1] but cannot change v[6]*/

  // size of operator ->
  //  cout<<"size:"<<v.size()<<endl;
  //  alternate to square bracket which is much better to use
  // bcoz it will tell us whether the exact element is present or not

  /*cout<<v.at(2)<<endl;
  cout<<v.at(6)<<endl;

  for (int i=0;i<v.size();i++){
      cout<<v[i]<<endl;
  }
   //deleting elements
   v.pop_back();
    for (int i=0;i<v.size();i++){
      cout<<v[i]<<endl;
  }*/
}