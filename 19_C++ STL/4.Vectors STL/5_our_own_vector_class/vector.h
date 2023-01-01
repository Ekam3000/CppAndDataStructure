// how stl c++ container vertor is working
class Vector
{
    // data members required in this are_>
    int cs;   // current size of the array
    int ms;   // total size of the array
    int *arr; // a pointer to for creating dynamic array.
public:
    vector()
    {
        cs = 0;
        ms = 1;
        arr = new int[ms];
    }
    void push_back(int const d) // becoz d value is not changing inside function
    {
        if (cs == ms)
        {
            int *Oldarr = arr;
            arr = new int[2 * ms];
            for (int i = 0; i < ms; i++)
            {
                arr[i] = Oldarr[i];
            }
            ms = 2 * ms;
            delete[] Oldarr;
        }
        arr[cs] = d;
        cs++;
    }
    void pop_back()
    {
        cs--;
    }
    int front() const
    {
        return arr[0];
    }
    int back() const
    {
        return arr[cs - 1];
    }
    bool empty() const
    {
        return cs == 0;
    }
    // no concept of full. as the vector cant be full.
    int capacity() const
    { // const becoz we are not modifying the the data members
        return ms;
    }
    int at(const int i) // when we call v.at(i)
    {
        return arr[i];
    }
    int operator[](const int i)
    {
        return arr[i];
    }
    int size() const
    {
        return cs;
    }
} ;
