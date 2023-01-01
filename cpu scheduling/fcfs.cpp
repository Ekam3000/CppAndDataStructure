#include<iostream>
using namespace std;
int main(){
	int j,i,bt[10],wt[10],tt[10],n;
	float awt=0,att=0;
	cout<<"Enter Number of Processes"<<endl;
	cin>>n;
	cout<<"Enter Burst Time"<<endl;
	for( i=0;i<n;i++){
		cout<<"P ["<<i+1<<"] :";
		cin>>bt[i];
	}
	wt[0]=0;
	for( i=0;i<n;i++){
		wt[i]=0;
		for( j=0;j<i;j++){
			wt[i]+=bt[j];
		}
	}
	cout<<"Processes\tBurstTime\tWaitingTime\tTurnaroundTime";
	for( i=0;i<n;i++){
		tt[i]=wt[i]+bt[i];
		awt+=wt[i];
		att+=tt[i];
		cout<<"\nP ["<<i+1<<"] \t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tt[i];
	}
	awt=awt/i;
	att=att/i;
	cout<<"\nAverage Waiting Time "<<awt;
	cout<<"Average TurnAround Time :"<<att;
	return 0;
}