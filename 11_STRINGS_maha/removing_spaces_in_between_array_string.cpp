//  #include<iostream>
//  using namespace std;
//  int main(){
//     char str[30];
//     cin.getline(str,30);
//     cout<<"string:"<<endl;
//     cout<<str;
//     cout<<endl;
//     int i=0;
//     int count=0;
//     int k=0;
//     while(str[k]!='\0'){
//     count++;
//     k++;
//     }
//     int count1=0;
//     for(i;i<count;i++){
//         if(str[i] !=' '){
//             str[count1++]=str[i];
//         }
//         str[count1]='\0';
//     }
//     cout<<"new string:";
//     cout<<str;
//  }

 // from a string
 #include <iostream>
 using namespace std;
 
// Function to remove all spaces from a given string
 void removeSpaces(char str[])
 {
     // To keep track of non-space character count
     int count = 0;
 
    // Traverse the given string. If current character
   // is not space, then place it at index 'count++'
    for (int i = 0; str[i]; i++){
         if (str[i] != ' '){
             str[count++] = str[i]; // here count is incremented
         }
    }
     str[count] = '\0';
 }
 
 // Driver program to test above function
 int main()
 {
     char str[30];
     cin.getline(str,30);
     cout<<"string:"<<endl;
      cout<<str;
     cout<<endl;
     removeSpaces(str);
     cout << str;
     return 0;
 }