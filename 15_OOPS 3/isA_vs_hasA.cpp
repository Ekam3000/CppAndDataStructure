// a base parent class can be used in two ways. by inheriting it , or by using an object of this class in other class.
class rectangle
{
    ...
};
class cuboid : public rectangle
{
 ...
};
// here we can say cuboid is a rectangle

class table
{
    rectangle r;

};
// here we can say table has a rectangle


/* access specifiers
public,protected,private
*/