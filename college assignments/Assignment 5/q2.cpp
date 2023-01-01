#include <iostream>
using namespace std;
template <typename T>

class QueueUsingArray
{
	T *data;
	int nextIndex;
	int firstIndex;
	int size; // size name ka alag variable declare karna pade aga becoz nextindex ki value circular move karte hue dubara se first index par pouch jaye jaye gi jab apna array full ho chuka hoga
	int capacity;

public:
	QueueUsingArray(int s)
	{
		data = new T[s];
		nextIndex = 0;
		firstIndex = -1;
		size = 0;
		capacity = s;
	}
	// insert element
	void enqueue(T element)
	{
		if (size == capacity)
		{
			cout << "Queue Full ! " << endl;
			return;
		}
		data[nextIndex] = element;
		nextIndex = (nextIndex + 1) % capacity; // for the circular shifting of of data to starting of index when array size becomes full
		if (firstIndex == -1)
		{
			firstIndex = 0;
		}
		size++;
	}
	T dequeue()
	{
		if (isEmpty())
		{
			cout << "Queue is empty ! " << endl;
			return 0;
		}
		T ans = data[firstIndex];
		firstIndex = (firstIndex + 1) % capacity;
		size--;
		if (size == 0)
		{
			firstIndex = -1;
			nextIndex = 0;
		}
		return ans;
	}
	bool isEmpty()
	{
		return size == 0;
	}
	bool isFull()
	{
		if (size == capacity)
		{
			return true;
		}
		else
			return false;
	}
	T peek()
	{
		if (isEmpty())
		{
			cout << "Queue is empty ! " << endl;
			return 0;
		}
		return data[firstIndex];
	}
	void display()
	{
		int i;
		for (i = firstIndex ; i < nextIndex; i++)
			cout << data[i] << "\t";
	}
};
int main()
{
	QueueUsingArray<int> q(5);
	int n;
	do
	{
		/* code */
		cout << " menu driven program demonstrating circular queues:\n ";
		cout << "1.enqueue \n";
		cout << "2.dequeue \n";
		cout << "3.isEmpty \n";
		cout << "4.isFull \n";
		cout << "5.display \n";
		cout << "6.peek \n";
		cout << " enter your  choice: ";
		cin >> n;
		switch (n)
		{
		case 1:
			int n;
			cout << "enter data value : ";
			cin >> n;
			q.enqueue(n);
			cout << "\n";
			break;
		case 2:
			cout << q.dequeue();
			cout << "\n";
			break;
		case 3:
			cout << q.isEmpty();
			cout << "\n";
			break;
		case 4:
			cout << q.isFull();
			cout << "\n";
			break;
		case 5:
			q.display();
			cout << "\n";
			break;
		case 6:
			cout << q.peek();
			cout << "\n";
			break;
		}
	} while (n <= 6);
	return 0;
}
