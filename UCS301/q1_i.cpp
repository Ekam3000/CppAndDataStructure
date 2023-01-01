#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ff first
#define endl '\n'
#define ss second
#define pb push_back
#define all(v) v.begin(), v.end()
#define fo(i, a, b) for (int i = a; i < b; i++)
#define foe(i, a, b) for (int i = a; i <= b; i++)

const int MOD1 = 998244353;
const int MOD = 1000000007;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef pair<int, int> pii;

template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>
using multi_ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

stack<int> s1, s2;
deque<int> q;
stack<int> reversedS2;

void ins(int x)
{
    if (s1.empty() || x < s1.top())
    {
        s1.push(x);
        return;
    }
    if (s2.empty() || x > s2.top())
    {
        s2.push(x);
        return;
    }
    // choose stack which is closest
    if (abs(x - s1.top()) < abs(x - s2.top())) // s1 is closer
    {
        while (!s1.empty() && x >= s1.top())
        {
            int temp = s1.top();
            s1.pop();
            q.push_back(temp);
        }
        s1.push(x);
    }
    else // s2 is closer
    {
        while (!s2.empty() && x <= s2.top())
        {
            int temp = s2.top();
            s2.pop();
            q.push_back(temp);
        }
        s2.push(x);
    }
}

void print()
{
    deque<int> tempQ(q);
    stack<int> tempS1(s1);
    stack<int> tempS2(s2);
    if (!tempQ.empty())
    {
        // cout << "Q: ";
        while (!tempQ.empty())
        {
            int x = tempQ.front();
            tempQ.pop_front();
            cout << x << " ";
        }
        cout << endl;
    }
    if (!tempS1.empty())
    {
        // cout << "S1: ";
        while (!tempS1.empty())
        {
            int x = tempS1.top();
            tempS1.pop();
            cout << x << " ";
        }
        cout << endl;
    }
    if (!tempS2.empty())
    {
        // cout << "S2: ";
        while (!tempS2.empty())
        {
            int x = tempS2.top();
            tempS2.pop();
            cout << x << " ";
        }
        cout << endl;
    }
}

void emptyQueue()
{
    if (q.empty())
        return;
    while (!q.empty())
    {
        int temp = q.back();
        q.pop_back();
        if (temp < s1.top())
            s1.push(temp);
        else
            s2.push(temp);
    }
}

void print1()
{
    deque<int> tempQ(q);
    stack<int> tempS1(s1);
    stack<int> tempS2(reversedS2);
    if (!tempQ.empty())
    {
        // cout << "Q: ";
        while (!tempQ.empty())
        {
            int x = tempQ.front();
            tempQ.pop_front();
            cout << x << " ";
        }
        cout << endl;
    }
    if (!tempS1.empty())
    {
        // cout << "S1: ";
        while (!tempS1.empty())
        {
            int x = tempS1.top();
            tempS1.pop();
            cout << x << " ";
        }
        cout << endl;
    }
    if (!tempS2.empty())
    {
        // cout << "S2: ";
        while (!tempS2.empty())
        {
            int x = tempS2.top();
            tempS2.pop();
            cout << x << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //#endif

    int n;
    cin >> n;
    vi v(n);
    fo(i, 0, n) cin >> v[i];
    fo(i, 0, n)
    {
        // cout << "Insertion : " << v[i] << endl;
        ins(v[i]);
        print();
        emptyQueue();
        // print();
        // cout << endl;
    }
    while (!s2.empty())
    {
        int temp = s2.top();
        s2.pop();
        reversedS2.push(temp);
    }

    while (!s1.empty() && !reversedS2.empty())
    {
        int t1 = s1.top();
        int t2 = reversedS2.top();
        if (t1 < t2)
        {
            q.push_back(t1);
            s1.pop();
            print1();
        }
        else
        {
            q.push_back(t2);
            reversedS2.pop();
            print1();
        }
    }

    while (!s1.empty())
    {
        int temp = s1.top();
        s1.pop();
        q.push_back(temp);
        print1();
    }

    while (!reversedS2.empty())
    {
        int temp = reversedS2.top();
        reversedS2.pop();
        q.push_back(temp);
        print1();
    }

    return 0;
}