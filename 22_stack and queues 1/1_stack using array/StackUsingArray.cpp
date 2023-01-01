#include <climits> // as we have used INT_MIN.
class StackUsingArray
{
	int *data;
	int nextIndex;
	int capacity;
public:
	StackUsingArray(int totalSize)
	{
		data = new int[totalSize];
		nextIndex = 0;
		capacity = totalSize; // this line will help us to use the totalsize of stack with help of capacity whereever if required
	}
	// return the number of elements present in my stack
	int size()
	{
		return nextIndex;
	}
	bool isEmpty()
	{
		/*
		if(nextIndex == 0) {
			return true;
		}
		else {
			return false;
		}
		*/
		return nextIndex == 0;
	}
	// insert element
	void push(int element)
	{
		if (nextIndex == capacity)
		{
			cout << "Stack full " << endl;
			return;
		}
		data[nextIndex] = element;
		nextIndex++;
	}
	// delete element
	int pop()
	{
		if (isEmpty())
		{ // or we can use size() also if(size()==0)
			cout << "Stack is empty " << endl;
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex];
	}
	int top()
	{
		if (isEmpty())
		{
			cout << "Stack is empty " << endl;
			return INT_MIN;
		}
		return data[nextIndex - 1];
	}
};