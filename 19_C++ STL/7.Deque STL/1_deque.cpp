#include<bits/stdc++.h>
#include<deque>

// deque are sequence containers with dynamic sizes that can be expanded or contracted on both ends. generally dynamic array are used to implement deque.they allow for the individual elements to be assessed directly through random access iterators. like a[i].  therefore they provide a functionality similar to the vectors, with efficient insersion or deletion of elements also at the beginning of the sequence, and not only at the end.
/*
so deque combines two good functionality from both vector( random access to any element)
and linked list( expansion and contraction at both ends)

 but unlike vectors..
deques are not guaranteed to store all its elements in contiguous storage locations, So accessing elements in a deque by offering a pointer to another element causes undefined behaviour.
/*
Both vectors and deques provide a very similar interface and can be used for similar purposes, but internally both work in quite different ways: While vectors use a single array that needs to be occasionally reallocated for growth, the elements of a deque can be scattered in different chunks of storage, with the container keeping the necessary information internally to provide direct access to any of its elements in constant time and with a uniform sequential interface (through iterators). Therefore, deques are a little more complex internally than vectors, but this allows them to grow more efficiently under certain circumstances, especially with very long sequences, where reallocations become more expensive.
*/
/*
For operations that involve frequent insertion or removals of elements at positions other than the beginning or the end, deques perform worse and have less consistent iterators and references than lists and forward lists.
*/
/*
deque-->
  [][][][][][]
    /        \
[][][][][][]  [][][][][][]
      \
    [][][][][][]
    */

/*
   // deque::begin and end.
#include <iostream>
#include <deque>

int main ()
{
  std::deque<int> mydeque;

  for (int i=1; i<=5; i++) mydeque.push_back(i);

  std::cout << "mydeque contains:";

  std::deque<int>::iterator it = mydeque.begin();

  while (it != mydeque.end())
    std::cout << ' ' << *it++;

  std::cout << '\n';
  return 0;
  */


/*
//rbegin and rend
//deque::rbegin/rend

// means hum reverse se elements bharna shuru kar rahe deque me 
#include <iostream>
#include <deque>

int main ()
{
  std::deque<int> mydeque (5);  // 5 default-constructed ints

  std::deque<int>::reverse_iterator rit = mydeque.rbegin();

  int i=0;
  for (rit = mydeque.rbegin(); rit!= mydeque.rend(); ++rit)
    *rit = ++i;

  std::cout << "mydeque contains:";
  for (std::deque<int>::iterator it = mydeque.begin(); it != mydeque.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
//mydeque contains: 5 4 3 2 1
*/



/*
// insert 
// inserting into a deque
#include <iostream>
#include <deque>
#include <vector>

int main ()
{
  std::deque<int> mydeque;

  // set some initial values:
  for (int i=1; i<6; i++) mydeque.push_back(i); // 1 2 3 4 5

  std::deque<int>::iterator it = mydeque.begin();
  ++it;

  it = mydeque.insert (it,10);                  // 1 10 2 3 4 5
  // "it" now points to the newly inserted 10

  mydeque.insert (it,2,20);                     // 1 20 20 10 2 3 4 5
  // "it" no longer valid!
  it = mydeque.begin()+2;
  std::vector<int> myvector (2,30);
  mydeque.insert (it,myvector.begin(),myvector.end());                            
    // 1 20 30 30 20 10 2 3 4 5

  std::cout << "mydeque contains:";
  for (it=mydeque.begin(); it!=mydeque.end(); ++it)
  std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}



// mydeque contains: 1 20 30 30 20 10 2 3 4 5
*/

/*
// size
// deque::size
#include <iostream>
#include <deque>

int main ()
{
  std::deque<int> myints;
  std::cout << "0. size: " << myints.size() << '\n';

  for (int i=0; i<5; i++) myints.push_back(i);
  std::cout << "1. size: " << myints.size() << '\n';

  myints.insert (myints.begin(),5,100);
  std::cout << "2. size: " << myints.size() << '\n';

  myints.pop_back();
  std::cout << "3. size: " << myints.size() << '\n';

  return 0;

0. size: 0
1. size: 5
2. size: 10
3. size: 9
}
*/

/*
// deque::max_size
#include <iostream>
#include <deque>

int main ()
{
  unsigned int i;
  std::deque<int> mydeque;

  std::cout << "Enter number of elements: ";
  std::cin >> i;

  if (i<mydeque.max_size()) mydeque.resize(i);
  else std::cout << "That size exceeds the limit.\n";

  return 0;
}
*/
/*
// resizing deque
#include <iostream>
#include <deque>

int main ()
{
  std::deque<int> mydeque;
  std::deque<int>::iterator it;

  // set some initial content:
  for (int i=1; i<10; ++i) mydeque.push_back(i);

  mydeque.resize(5);
  mydeque.resize(8,100);
  mydeque.resize(12);

  std::cout << "mydeque contains:";
  for (std::deque<int>::iterator it = mydeque.begin(); it != mydeque.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}


The code sets a sequence of 9 numbers as the initial content for mydeque. It then uses resize first to set the container size to 5, then to extend its size to 8 with values of 100 for its new elements, and finally it extends its size to 12 with their default values (for int elements this is zero). Output:
mydeque contains: 1 2 3 4 5 100 100 100 0 0 0 0
*/

/*
deque.empty();
*/


/*
push_front
insert first element push_front()
back
insert last element puah_back()
pop_back()
pop_front()
*/



/*
front()-access front element
back()-access back element
at()-access random element
*/

/*
// erasing from deque
#include <iostream>
#include <deque>

int main ()
{
  std::deque<int> mydeque;

  // set some values (from 1 to 10)
  for (int i=1; i<=10; i++) mydeque.push_back(i);

  // erase the 6th element
  mydeque.erase (mydeque.begin()+5);

  // erase the first 3 elements:
  mydeque.erase (mydeque.begin(),mydeque.begin()+3);

  std::cout << "mydeque contains:";
  for (std::deque<int>::iterator it = mydeque.begin(); it!=mydeque.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}

Output:
mydeque contains: 4 5 7 8 9 10
*/

/*
// swap deques
#include <iostream>
#include <deque>

main ()
{
  unsigned int i;
  std::deque<int> foo (3,100);   // three ints with a value of 100
  std::deque<int> bar (5,200);   // five ints with a value of 200

  foo.swap(bar);

  std::cout << "foo contains:";
  for (std::deque<int>::iterator it = foo.begin(); it!=foo.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  std::cout << "bar contains:";
  for (std::deque<int>::iterator it = bar.begin(); it!=bar.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
Output:
foo contains: 200 200 200 200 200 
bar contains: 100 100 100 
*/

/*
clear()
*/


