template <typename T>
class QueueUsingArray {
	T *data;
	int nextIndex;
	int firstIndex;
	int size; // size name ka alag variable declare karna pade aga becoz nextindex ki value circular move karte hue dubara se first index par pouch jaye jaye gi jab apna array full ho chuka hoga 
	int capacity;
	public :
	QueueUsingArray(int s) {
		data = new T[s];
		nextIndex = 0;
		firstIndex = -1;
		size = 0;
		capacity = s;
	}
	int getSize() {
		return size;
	}
	bool isEmpty() {
		return size == 0;
	}
	// insert element
	void enqueue(T element) {
		if(size == capacity) {
			cout << "Queue Full ! " << endl;
			return;
		}
		data[nextIndex] = element;
		nextIndex=(nextIndex + 1) % capacity ; // for the circular shifting of of data to starting of index when array size becomes full
		if(firstIndex == -1) {
			firstIndex = 0;
		}
		size++;
	}
	T front() {
		if(isEmpty()) {
			cout << "Queue is empty ! " << endl;
			return 0;
		}
		return data[firstIndex];
	}
	T dequeue() {
		if(isEmpty())
	    {
			cout << "Queue is empty ! " << endl;
			return 0;
		}
		T ans = data[firstIndex];
		firstIndex = (firstIndex + 1) % capacity;
		size--;
		if(size == 0) {
			firstIndex = -1;
			nextIndex = 0;
		}
		return ans;
	}
};
