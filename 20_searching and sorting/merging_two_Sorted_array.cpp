     #include<iostream>
     using namespace std;
     void printArray(int arr[], int n){
     for(int i=0;i<n;i++){
         cout<<arr[i]<<"\t";
     }
     cout<<endl;
     }
     insertionSort(int arr[], int n){
      for(int i=1;i<n;i++){
          int j;
          int current=arr[i];
          for(j=i-1;j>=0;j--){
              if(arr[j]>current){
                  arr[j+1]=arr[j];
              }
              else{
                  break;
              }
          }
          arr[j+1]=current;
      }
     }
     void mergedSorted_array(int array[], int input[],int arr[] ,int k,int l ){
     int i = 0, j = 0, k1 = 0;
 
     // Traverse both array
     while (i<k && j <l)
     {
         // Check if current element of first
         // array is smaller than current element
         // of second array. If yes, store first
         // array element and increment first array
         // index. Otherwise do same with second array
         if (array[i] < input[j])
            arr[k1++] = array[i++];
         else
            arr[k1++] = input[j++];
     }
 
     // Store remaining elements of first array
     while (i < k)
        arr[k1++] = array[i++];
 
     // Store remaining elements of second array
     while (j < l)
        arr[k1++] = input[j++];
 }
     

     int main(){
     int n1;
     cout<<"enter size for first array:";
     cin>>n1;
     int arr[10];
     for(int i=0;i<n1;i++){
      cin>>arr[i];
     }
      insertionSort(arr,n1);
      printArray(arr,n1);
      int n2;
     cout<<"enter size for second array:";
     cin>>n2;
     for(int i=0;i<n2;i++){
      cin>>arr[i];
     }
      insertionSort(arr,n2);
      printArray(arr,n2);
      int n3=n1+n2;
      int array[n3];
      mergedSorted_array(arr,arr,array,n1,n2);
      cout << "Array after merging" <<endl;
      for (int i=0; i < n3; i++)
      cout << array[i] << " ";
}
