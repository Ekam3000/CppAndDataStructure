#include<iostream>
using namespace std;
#include<cstring>
int palimdromeSubstring(char input[]){
    int count =0;
    int len =strlen(input);


//odd length
for(int i=0;input[i] != '\0';i++){
    int mid=i;
    int left =i-1,right=i+1;
    count++;// for single length substrings
    while(i>=0&&i<len){ // yaha par condition check nahi ho rahi hai , ye bus ek formality ke liye loop lagaya jo hamesa true hi hoga.
        if(input[left]==input[right]){ //yaha parcondition check ho rahi hai
            count++;
            left--;
            right++;
        }
        else{
            break;
        }
    }
}
// even length
for(int i=0;i<len-1;i++){
    int mid1=i,mid2=i+1;
    if(input[mid1] != input[mid2]){
        continue;
    }
     int left =mid1-1,right=mid2+1;
    count++;
    while(left>=0&&right<len){
        if(input[left]==input[right]){
            count++;
            left--;
            right++;
        }
        else{
            break;
        }
    }
}
return count;
}
int main(){
    char input[100];
    cin>>input;
    cout<<palimdromeSubstring(input)<<endl;
}