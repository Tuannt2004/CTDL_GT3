#include <bits/stdc++.h>
using namespace std;

int n;

struct Process{
    int id, arrival_time, burst_time, remaining_time, complete_time;
    int waiting_time, turn_around_time;
};

bool cmp(Process a, Process b){
    if(a.arrival_time != b.arrival_time){
        return a.arrival_time < b.arrival_time;
    }
    return a.id < b.id;
}

void RoundRobin(vector<Process> pro, int quantum){
    sort(pro.begin(), pro.end(), cmp);
    queue<int> qe;
    int time=0;
    int index=0;
    while(index < n && pro[index].arrival_time <= time){
        qe.push(index);
        index++;
    }
    while(!qe.empty()){
        int process = qe.front();
        qe.pop();
        if(pro[process].remaining_time > quantum){
            pro[process].remaining_time-=quantum;
            time+=quantum;
        }
        else{
            time+=pro[process].remaining_time;
            pro[process].remaining_time=0;
            pro[process].complete_time = time;
        }
        while(index < n && pro[index].arrival_time <= time){
            qe.push(index);
            index++;
        }
        if(pro[process].remaining_time > 0){
            qe.push(process);
        }
    }
    for(int i =0;i<n;i++){
        pro[i].turn_around_time = pro[i].complete_time - pro[i].arrival_time;
        pro[i].waiting_time = pro[i].turn_around_time - pro[i].burst_time;
    }
    int total_waiting_time = 0;
    int total_turn_around_time =0;
    for(auto x : pro){
        total_waiting_time += x.waiting_time;
        total_turn_around_time += x.turn_around_time;
    }
    cout << "Tong cua WaitingTime va tong cua TurnAroundTime la : ";
    cout << total_waiting_time << ' ' << total_turn_around_time << endl;
    cout << "Process" <<' ' << "Arrival Time" <<' ' << "Burst Time"<<' '<< "Turn Around Time" <<' '<< "Waiting Time" << endl;
    for(int i=0;i<n;i++){
        cout <<"P"<< pro[i].id << ' ' << pro[i].arrival_time << ' ' << pro[i].burst_time << ' ' << pro[i].turn_around_time << ' ' << pro[i].waiting_time << endl;
    }
}
int main(){
    cout << "So luong tien trinh : ";
    cin >> n;
    int quantum;
    cout << " thoi gian quantum : ";
    cin >> quantum;
    vector<Process> pro(n);
    for(int i=0;i<n;i++){
        pro[i].id = i+1;
        cout << "Tien trinh thu" << i+1 <<": ";
        cin >> pro[i].arrival_time >> pro[i].burst_time;
        pro[i].remaining_time = pro[i].burst_time;
    }
    cout << endl;
    RoundRobin(pro,quantum);
}