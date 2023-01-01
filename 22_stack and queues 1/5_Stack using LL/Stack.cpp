#include <iostream>
using namespace std;
template <typename T>
class Node  // linked list (Node class ko) hum template se bna rahe hai.
{
public:
	T data;
	Node<T> *next;
	Node(T data)
	{
		this->data = data;
		next = NULL;
	}
};
template <typename T> // agar stack class me bhi T use kar rahe ahi then yaha bhi specify karna pade ga template <typename T>
class Stack
{
	Node<T> *head;
	int size; // number of elements present in stack
public:
	Stack()
	{
		head = NULL;
		size = 0;
	}
	int getSize()
	{
		return size;
	}
	bool isEmpty()
	{
		return size == 0;
	}
	void push(T element)
	{
		Node<T> *newNode = new Node<T>(element);
		newNode->next = head;
		head = newNode;
		size++;
	}
	T pop()
	{
		if (isEmpty())
		{
			return 0;
		}
		T ans = head->data;
		Node<T> *temp = head;
		head = head->next;
		delete temp;
		size--;
		return ans;
	}
	T top()
	{
		if (isEmpty())
		{
			return 0;
		}
		return head->data;
	}
};