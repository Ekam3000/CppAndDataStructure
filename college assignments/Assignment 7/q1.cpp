#include <iostream>
#include <unordered_map>
using namespace std;
int Max_freq(int* a, int size) {
	int max= -1;
	unordered_map<int,int> seen;
	for (int i = 0; i < size; i++) {
		if (seen.count(a[i]) > 0) {
			seen[a[i]]++;
		}
        else
		seen[a[i]] =1;
	}
    int i=0;
    while(seen.size())
    {
        if(seen[a[i]]>max)
        {
            max=seen[a[i]];
        }
            seen.erase(a[i]);
            i++;
    }
	return max;
}
int main() {
	int a[] = {1,2,3,3,2,1,2,3,6,5,5};
	int max_freq = Max_freq(a, 11);
	cout<<"max frequency number: "<<max_freq;
}