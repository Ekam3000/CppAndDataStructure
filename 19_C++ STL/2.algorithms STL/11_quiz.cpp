#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
/*bool isPalindrome(string& s)
{
		string rev = s;
		reverse(rev.begin(), rev.end());
		return s == rev;
}*/


/*
    bool comp(string s1, string s2)
{
    cout<<"comparing: "<<s1<<" "<<s2;
    if(s1.length() < s2.length())
        return 1;
    else if(s1.length() > s2.length())
        return 0;
    else return s1 < s2;
}
*/
int main()
{


/*
vector< string > data = {"b", "a", "c", "abc", "bca", "xy"};
sort(data.begin(), data.end(), comp);
for(string item : data)
        cout << item << " ";
        */


/*
    vector< int > data = { 1, 1, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 6 };
auto lower = std::lower_bound(data.begin(), data.end(), 4);
auto upper = std::upper_bound(data.begin(), data.end(), 4);
for(auto it = lower; it != upper; it++)
cout << *it << ' ';

// std par gorr karo.
*/


/*
vector< int > data = {100, 142, 138, 96, 32, 149};
swap(data[2], data[5]);
int val1 = *max_element(data.begin(), data.begin() +3);
int val2 = *max_element(data.begin()+3,data.end());
cout<< min(val1, val2);
*/


    /*
    string s="peep";
    cout<<isPalindrome(s);
    */
    
    
    string s = "cab";
 
   do {
        cout << s << ' ';
    } while(next_permutation(s.begin(), s.end()));

 cout << s; 

 /* here the fourth output will be abc. last value will be end up with abc only whether the input output is abc, bca,cab*/
}

