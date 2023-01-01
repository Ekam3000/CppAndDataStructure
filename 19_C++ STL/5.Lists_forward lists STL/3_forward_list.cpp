// singly linked list.
//  compared to other base standard sequence containers(array,vector and deque),forward list perform generally better in inserting ,extracting and moving elements in any direction in any position within the container and therefore also in algorithms that make intensive use of these like sorting algorithms
//  drawback --> direct access to any element is not there.
/*
//before_begin.
#include <iostream>
#include <forward_list>
int main ()
{
  std::forward_list<int> mylist = {20, 30, 40, 50};

  mylist.insert_after ( mylist.before_begin(), 11 );

  std::cout << "mylist contains:";
  for ( int x: mylist ) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
//mylist contains: 11 20 30 40 50
*/

/*
//insert_after
// Insert elements
// forward_list::insert_after
#include <iostream>
#include <array>
#include <forward_list>

int main ()
{
  std::array<int,3> myarray = { 11, 22, 33 };
  std::forward_list<int> mylist;
  std::forward_list<int>::iterator it;

  it = mylist.insert_after ( mylist.before_begin(), 10 );          // 10
                                                                   //  ^  <- it
  it = mylist.insert_after ( it, 2, 20 );                          // 10 20 20
                                                                         // ^       
  it = mylist.insert_after ( it, myarray.begin(), myarray.end() ); // 10 20 20 11 22 33
                                                                   //                 ^
  it = mylist.begin();                                             //  ^
  it = mylist.insert_after ( it, {1,2,3} );                        // 10 1 2 3 20 20 11 22 33
                                                                   //        ^

  std::cout << "mylist contains:";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout << '\n';
  return 0;
}
*/

/*
// forward_list::front
#include <iostream>
#include <forward_list>

int main ()
{
  std::forward_list<int> mylist = {2, 16, 77};

  mylist.front() = 11;

  std::cout << "mylist now contains:";
  for ( int& x : mylist ) std::cout << ' ' << x;

  std::cout << '\n';

  return 0;
}
//mylist now contains: 11 16 77
*/

/*
// forward_list::emplace_front-> Construct and insert element at beginning
#include <iostream>
#include <forward_list>

int main ()
{
  std::forward_list< std::pair<int,char> > mylist;

  mylist.emplace_front(10,'a');
  mylist.emplace_front(20,'b');
  mylist.emplace_front(30,'c');

  std::cout << "mylist contains:";
  for (auto& x: mylist)
    std::cout << " (" << x.first << "," << x.second << ")";

  std::cout << std::endl;
  return 0;
}

// mylist contains: (30,c) (20,b) (10,a)
*/

/*
push_front
Insert element at beginning
*/




/*
pop_front
Delete first element
*/
/*
// forward_list::emplace_after
#include <iostream>
#include <forward_list>

int main ()
{
  std::forward_list< std::pair<int,char> > mylist;
  auto it = mylist.before_begin();

  it = mylist.emplace_after ( it, 100, 'x' );
  it = mylist.emplace_after ( it, 200, 'y' );
  it = mylist.emplace_after ( it, 300, 'z' );

  std::cout << "mylist contains:";
  for (auto& x: mylist)
    std::cout << " (" << x.first << "," << x.second << ")";

  std::cout << '\n';
  return 0;
}
mylist contains: (100,x) (200,y) (300,z
*/

    /*
 //   erase_after
 //   Erase elements
 // erasing from forward_list
#include <iostream>
#include <forward_list>

int main ()
{
  std::forward_list<int> mylist = {10, 20, 30, 40, 50};

                                            // 10 20 30 40 50
  auto it = mylist.begin();                 // ^

  it = mylist.erase_after(it);              // 10 30 40 50
                                            //    ^
  it = mylist.erase_after(it,mylist.end()); // 10 30
                                            //       ^

  std::cout << "mylist contains:";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
    */



    /*
    // forward_list::swap
#include <iostream>
#include <forward_list>

int main ()
{
  std::forward_list<int> first = {10, 20, 30};
  std::forward_list<int> second = {100, 200};
  std::forward_list<int>::iterator it;

  first.swap(second);

  std::cout << "first contains:";
  for (int& x: first) std::cout << ' ' << x;
  std::cout << '\n';

  std::cout << "second contains:";
  for (int& x: second) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}
// first contains: 100 200
//second contains: 10 20 30
     */




    /*
// clearing forward_list
#include <iostream>
#include <forward_list>
int main ()
{
  std::forward_list<int> mylist = { 10, 20, 30 };
  std::cout << "mylist contains:";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout<< '\n';
  mylist.clear();
  mylist.insert_after( mylist.before_begin(), {100, 200} );
  std::cout << "mylist contains:";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout << '\n';
  return 0;
}
//mylist contains: 10 20 30
//mylist contains: 100 200
     */




    /*
    // forward_list::merge
#include <iostream>
#include <forward_list>
#include <functional>

int main ()
{
  std::forward_list<double> first = {4.2, 2.9, 3.1};
  std::forward_list<double> second = {1.4, 7.7, 3.1};
  std::forward_list<double> third = {6.2, 3.7, 7.1};

  first.sort();
  second.sort();
  first.merge(second);

  std::cout << "first contains:";
  for (double& x: first) std::cout << " " << x;
  std::cout << std::endl;
  first.sort (std::greater<double>()); // decending order
  third.sort (std::greater<double>());
  first.merge (third, std::greater<double>());

  std::cout << "first contains:";
  for (double& x: first) std::cout << " " << x;
  std::cout << std::endl;

  return 0;
}

  //first contains: 1.4 2.9 3.1 3.1 4.2 7.7
  //first contains: 7.7 7.1 6.2 4.2 3.7 3.1 3.1 2.9 1.4
     */




    /*
   // forward_list::sort
#include <iostream>
#include <forward_list>
#include <functional>

int main ()
{
  std::forward_list<int> mylist = {22, 13, 5, 40, 90, 62, 31};

  mylist.sort();

  std::cout << "default sort (operator<):";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout << '\n';

  mylist.sort(std::greater<int>());

  std::cout << "sort with std::greater():";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
//default sort (operator<): 5 13 22 31 40 62 90
//sort with std::greater(): 90 62 40 31 22 13 5

}
     */




    /*
    // reversing forward_list
#include <iostream>
#include <forward_list>

int main ()
{
  std::forward_list<int> mylist = {10, 20, 30, 40};

  mylist.reverse();

  std::cout << "mylist contains:";
  for (int& x: mylist) std::cout << ' ' << x;
  std::cout << '\n';

  return 0;
}

//mylist contains: 40 30 20 10
     */

    /*
    // remove from forward_list
    std::forward_list<int> mylist = {10, 20, 30, 40, 30, 20, 10};
  mylist.remove(20);
// mylist contains: 10 30 40 30 10
     */
