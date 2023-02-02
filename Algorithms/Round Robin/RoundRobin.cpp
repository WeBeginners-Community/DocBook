#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#define max 1000
using namespace std;
bool comp(vector<int> &p1, vector<int> &p2)
{
    return p1[4] < p2[4];
}
int queue[max];
int f = -1;
int r = -1;

bool isEmpty()
{
    if (f == -1)
    {
        return 1;
    }
    return 0;
}
void enqueue(int index)
{
    if (f == -1)
    {
        f = 0;
    }
    r = (r + 1) % max;
    queue[r] = index;
}
int dequeue()
{
    if (isEmpty())
    {
        return -1;
    }

    int index = queue[f];

    if (f == r)
    {
        f = -1;
        r = -1;
        return index;
    }

    f = (f + 1) % max;
    return index;
}

void readyQ(int currtime, int prev_idx, int isTaken[], int n, vector<vector<int>> &processes)
{
    bool ready = false;
    while (!ready)
    {

        int min_idx = -1;
        int min_arrival = INT_MAX;
        int min_id = -1;
        for (int i = 0; i < n; i++)
   {
    if (processes[i][1] <= currtime && !isTaken[i])
            {

          if (processes[i][1] < min_arrival)
                {
                    min_idx = i;
                    min_arrival = processes[i][1];
                    min_id = processes[i][0];
                }
        else if (min_arrival == processes[i][1] && processes[i][0] < min_id)
                {
                    min_idx = i;
                    min_id = processes[i][0];
                    min_arrival = processes[i][1];
                }
            }
        }
        if (min_idx == -1 && prev_idx == -1)
        {
            if (isEmpty())
            {
                currtime++;}

            else
            {
                ready = true;
            }
        }
        else if (min_idx == -1 && prev_idx != -1)
        {
            enqueue(prev_idx);
            ready = true;
        }
        else
        {
            enqueue(min_idx);
            isTaken[min_idx] = 1;
        }
    }
}
int main()
{
    int n;
    cout << "Enter no. of processes" << endl;
    cin >> n;
    vector<vector<int>> processes(n, vector<int>(8));

    cout << "Enter process ids:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> processes[i][0];
    }

    cout << "Enter arrival time of processes:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> processes[i][1];
    }

    cout << "Enter burst time of processes:" << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> processes[i][2];
    }

    int currtime = 0, completed = 0;
    int isCompleted[n] = {0};
    int isTaken[n] = {0};
    int rbt[n];
    int quantum = 1;
    for (int i = 0; i < n; i++)
    {
        rbt[i] = processes[i][2]; // copying the burst time to rbt at starting
    }
    int prev_idx = -1;
    while (completed != n)
    {
        readyQ(currtime, prev_idx, isTaken, n, processes);
        int min_idx = dequeue();
        prev_idx = min_idx;
        if (rbt[min_idx] == processes[min_idx][2])
        {
            processes[min_idx][3] = currtime; // start time
        }

        if (quantum < rbt[min_idx])
        {
            currtime += quantum;
            rbt[min_idx] -= quantum;
        }
        else
        {
            currtime += rbt[min_idx];
            rbt[min_idx] = 0;
            prev_idx = -1;
 processes[min_idx][4] = currtime;                 // completion time
 processes[min_idx][5] = processes[min_idx][3] - processes[min_idx][1]; // RT                  
 processes[min_idx][7] = processes[min_idx][4] - processes[min_idx][1]; // tat
 processes[min_idx][6] = processes[min_idx][7] - processes[min_idx][2]; // wt
           isCompleted[min_idx] = 1;
           completed++;

        }
    }
    sort(processes.begin(), processes.end(), comp);
    int sumtt = 0, sumwt = 0;
    for (int i = 0; i < n; i++)
    {
     cout << "Process Id: " << processes[i][0] << " AT:  " << processes[i][1] << " BT: " << processes[i][2] << " ST: " << processes[i][3] << " CT: " << processes[i][4] << " RT: " << processes[i][5] << " WT: " << processes[i][6] << " TAT " << processes[i][7] << endl;
        sumtt += processes[i][7];
        sumwt += processes[i][6];
    }
    double avgtt = (sumtt + 0.0) / n;
    double avgwt = (sumwt + 0.0) / n;
    cout << "Average wt: " << avgwt << endl;
    cout << "Average tt: " << avgtt << endl;
}

