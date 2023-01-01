#include <iostream>
using namespace std;
int main()
{
    int n, bt[20], rbt[20], wt[20], tt[20], q, t = 0, flag = 0;
    float avgwt = 0, avgtt = 0;
    cout << "Enter the number of processes (maximum 20):\t";
    cin >> n;
    cout << "Enter the quantum for RR Scheduling:\t";
    cin >> q;
    cout << "\nEnter the burst time for the processes\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P[" << i + 1 << "]:\t";
        cin >> bt[i];
        rbt[i] = bt[i];
        wt[i] = 0;
    }
    while (flag == 0)
    {
        flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (rbt[i] > 0)
            {
                flag = 0;
                if(rbt[i]>q)
                {
                    t+=q;
                    rbt[i]-=q;
                }
                else
                {
                    t+=rbt[i];
                    tt[i]=t;
                    wt[i]=tt[i]-bt[i];
                    rbt[i]=0;

                }
            }
        }
        if(flag==1)
        break;
    }
        for (int i = 0; i < n; i++)
        {
            avgwt += wt[i];
            avgtt += tt[i];
        }
        avgtt /= n;
        avgwt /= n;
        cout << "\nProcess\tBurst Time\tWaiting Time\tTurnAround Time";
        for (int i = 0; i < n; i++)
        {
            cout << endl<< "P[" << i + 1 << "]\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tt[i];
        }
        cout << "\n\nAverage Waiting Time:\t" << avgwt;
        cout << "\nAverage Turnaround Time:\t" << avgtt;
        return 0;
    }
