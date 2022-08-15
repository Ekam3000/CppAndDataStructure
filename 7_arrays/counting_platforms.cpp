/*The main idea behind this approach is to consider all the events in the sorted order. Once the events are in the sorted order, we find the number of trains at any time by keeping track of the trains that have arrived but not yet departed. The minimum number of platforms required will be the maximum number of trains at any time.
*/

 /*Count platforms

Given two arrays (both of size n), one containing arrival time of trains and other containing the corresponding trains departure time (in the form of an integer) respectively. Return the minimum number of platform required, such that no train waits.
Arrival and departure time of a train can't be same.
Input Format :
Line 1: Integer n, number of elements in arrival and departure array
Line 2: Elements of Arrival Array (separated by spaces).
Line 3: Elements of Departure Array (separated by spaces).
Output Format:
Minimum Number of Platform Needed
Constraints :
1 <= n <= 100
Sample Input 1 :
6
900 940 950 1100 1500 1800
910 1200 1120 1130 1900 2000
Sample Output 1 :
3
Sample Input 2 :
4
1100 1101 1103 1105
1110 1102 1104 1106
Sample Output 2 :
2

*/

#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1;i++){
    int min=arr[i];
    int minIndex=i;
    for(int j=i+1;j<n;j++){
    //  if(arr[j]<min)  for decreasing order. 
    if(arr[j]<min){
            min=arr[j];
            minIndex=j;
        }
    }
        int temp;
        temp=arr[i];
        arr[i]=min; // or arr[minIndex]
        arr[minIndex]=temp;

    }
}
int main(){
    int n;
    cout<<"number of elements in arrival and departure time:";
    cin>>n;
    int arr[10];
    int dep[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>dep[i];
    }
    selectionSort(arr,n);
    selectionSort(dep,n);

    int platforms=0;
    int maxtrains=0;
    int i=0;
    int j=0;
    while(i<n&&j<n){
        if(arr[i]<=dep[j]){
            maxtrains++;
            i++;
        }else{
            maxtrains--;
            j++;
        }
      if(maxtrains>=platforms){
          platforms=maxtrains;
      }
    }
    cout<<platforms<<endl;
    
}