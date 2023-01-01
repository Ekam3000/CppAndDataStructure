
//NumberOfNumbersGr8erThenGivenNumber
#include<iostream>
using namespace std;
int num(int *input, int n,int *fact, int* freq)
{
if(n==0 ||n==1)
{
    return 0;
}
int ans =0; // ans is initialised to zero for every next/new number
for(int i=input[0]+1;i<10;i++) //<10 signifies that in a freq array , size will be atmax of 10 numbers 0-9
{
    if(freq[i]>0) 
    /* freq of a number say (number 3) ki chale 2 times ho chale 3 times ho ya many more time .. but ans me addition one time hi hoge fact(n-1) ki.. 
     ex 3 2 5 2 2 8
     say nth number hamara 2 hai and uski freq 3 times hai 
     then taking 2 at nth digit place rest of the numbers(n-1) can be permuted in (n-1)! ways only one single time 
     2 (3 5 2 2 8) bcoz agar ek 2 ko dusra 2 replace kare ga then also number of number of ways of permutation of (n-1) numbers are same ..
    */
    {
        int ans += fact[n-1];
    }
}
    freq[input[0]]--;
    ans +=num(input +1, n-1, fact,freq); // for rest of the digits
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int *input=new int[n];
    int *fact =new int[n+1];
    fact[0]=1;
    int freq[10]={};
    for(int i=0; i<n;i++)
    {
     cin>>input[i];
     freq[input[i]]++;
     fact[i+1]=(i+1)*fact[i];
    }
    int c=Num(input,n,fact,freq);
    cout<<c;
}
