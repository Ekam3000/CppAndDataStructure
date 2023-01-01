#include<iostream>
using namespace std;
int main(){
    int p[20],x,t,bt[20],wt[20],tt[20],n;
    float awt=0,att=0;
    cout<<"Enter number of processes"<<endl;
    cin>>n;
    cout<<"Enter Burst Time"<<endl;
    for(int i=0;i<n;i++){
        cout<<"P ["<<i+1<<"] ";
        cin>>bt[i];
        p[i]=i+1;
    }
    for(int i=0;i<n;i++){
        x=i;
        for(int j=0;j<n;j++){
            if(bt[x]>bt[j]){
                x=j;
            }
        }
        t=bt[i];
        bt[i]=bt[x];
        bt[x]=t;

        t=p[i];
        p[t]=p[x];
        p[x]=t;
    }
    wt[0]=0;
    for(int i=0;i<n;i++){
        wt[i]=0;
        for(int j=0;j<i;j++){
            wt[i]+=bt[j];
        }
    }
    cout<<"Processes\tBurstTime\tWaitingTime\tTurnaroundTime"<<endl;
    for(int i=0;i<n;i++){
        tt[i]=wt[i]+bt[i];
        awt+=wt[i];
        att+=tt[i];
        cout<<"\nP ["<<p[i]<<"] \t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tt[i];
    }
    awt=awt/n;
    att=att/n;
    cout<<"\nAverage Waiting Time is :"<<awt<<endl;
    cout<<"Average Turnaround Time is :"<<att<<endl;
    return 0;
}