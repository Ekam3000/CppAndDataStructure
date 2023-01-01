class DynamicArray {
	int *data;
	int nextIndex;
	int capacity;			// total size

	public :

	DynamicArray() {

		data = new int[5];
		nextIndex = 0;
		capacity = 5;
	}

	DynamicArray(DynamicArray const &d) {
		//this -> data = d.data;		// Shallow copy
		
		// Deep copy
		this -> data = new int[d.capacity];
		for(int i = 0; i < d.nextIndex; i++) {
			this -> data[i] = d.data[i];
		}
		this -> nextIndex = d.nextIndex;
		this -> capacity = d.capacity;
	}

	void operator=(DynamicArray const &d) { // for deep copy of assignment operator.

		//upar int *data se initialise kar rakha to ab sirf data likhne ki jarurat hai i.e(data= new data[size])

		this -> data = new int[d.capacity];
		for(int i = 0; i < d.nextIndex; i++) {
			this -> data[i] = d.data[i];
		}
		this -> nextIndex = d.nextIndex;
		this -> capacity = d.capacity;
	}


	void add(int element) {
		if(nextIndex == capacity) {
			// making  new array  of twice size
			int *newData = new int[2 * capacity];
			for(int i = 0; i < capacity; i++) {
			//	coping previous array data to new array
				newData[i] = data[i];
			}
			delete [] data;
			// now data pointing to new data i.e data holds the address of newdata .newdata ka scope hi if ki braces takk simit hai . vo array ki values ko nii hold kar sakta outside if braces.
			data = newData;
			capacity *= 2;
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	int get(int i) const {
		if(i < nextIndex) {
			return data[i];
		}
		else {
			return -1;
		}
	}
// adding element to array differently
	void add(int i, int element) {
			if(i < nextIndex) { // i is the value where the elemnt will be replaced in the array with some other value
				data[i] = element; // in this case next index will not be upgraded
			}
			else if(i == nextIndex) {//in this case next index will also  be upgraded
		
				add(element);
			}
			else {
				return;
			}
	}

	void print() const {
		for(int i = 0; i < nextIndex; i++) {
			cout << data[i] << " ";
		}
		cout << endl;
	}

};