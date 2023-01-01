// nearest k cars from origin
/*1. sort them sorting will take O(NlogN) time .. if number of cars are 1000 then it will be 1000(log1000).
2. heap bulding a heap will take O(logN) time. for 1000 cars it will be O(logN) much better then sorting time.
so use heap and apply custum class
*/
#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;
class Car
{
public:
    int x;
    int y;
    int id;

    Car(int id, int x, int y)
    {
        this->id = id;
        this->x = x;
        this->y = y;
    }
    int dist()
    {
        return x * x + y * y;
    }
};
class Compare_car
{
public:
    bool operator()(Car A, Car B)
    {

        if (A.dist() == B.dist())
        {
            return A.id < B.id;
        }
        return A.dist() < B.dist();
    }
};
    int main()
    {
        priority_queue<Car, vector<Car>, Compare_car> pq;
        int x[] = {5, 6, 17, 18, 7, 4, 19, 10};
        int y[] = {3, 4, 9, 8, 1, 12, 5, 13};
        for (int i = 0; i < 8; i++)
        {
            Car c(i, x[i], y[i]);
            pq.push(c);
        }
        for(int i=0;i<3;i++)
        {
            Car c= pq.top();
            cout<<c.id<<" "<<c.x<<" "<<c.y<<endl;
            pq.pop();
        }
        return 0;
    }