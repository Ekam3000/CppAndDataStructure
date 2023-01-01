#include<iostream>
using namespace std;
int main(){
    int n,x,t,p[10],pr[10],bt[10],wt[10],tt[10];
    float awt=0,att=0;
    cout<<"Enter Number of processes: "<<endl;
    cin>>n;
    cout<<"Enter Burst Time and Priority "<<endl;
    for(int i=0;i<n;i++){
        cout<<"P ["<<i+1<<"] ";
        cout<<"Burst Time : ";
        cin>>bt[i];
        cout<<"Priority : ";
        cin>>pr[i];
        p[i]=i+1;
    }
    for(int i=0;i<n;i++){
        x=i;
        for(int j=0;j<i;j++){
            if(pr[x]>pr[j]){
                x=j;
            }
        }
        t=pr[i];
        pr[i]=pr[x];
        pr[x]=t;

        t=bt[i];
        bt[i]=bt[x];
        bt[x]=t;

        t=p[i];
        p[i]=p[x];
        p[x]=t;

    }
    wt[0]=0;
    for(int i=0;i<n;i++){
        wt[i]=0;
        for(int j=0;j<i;j++){
            wt[i]+=bt[j];
        }
    }
    cout<<"Processes\tBurstTime\tWaitingTime\tTurnaroundTime";
    for(int i=0;i<n;i++){
        tt[i]=wt[i]+bt[i];
        awt+=wt[i];
        att+=tt[i];
        cout<<"\nP ["<<p[i]<<"]\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tt[i];
    }
    awt/=n;
    att/=n;
    cout<<"Average waiting time is : "<<awt<<endl;
    cout<<"Average Turnaround Time is :"<<att<<endl;
}