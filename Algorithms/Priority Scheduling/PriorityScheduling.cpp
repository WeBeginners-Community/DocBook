#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
// Lower the priority number higher the priority
bool comp(vector<int> p1, vector<int> p2)
{
    return p1[6] < p2[6];
}

int main()
{
    int n;
    cout << "Enter no. of processes" << endl;
    cin >> n;
    vector<vector<int>> pdetails(n, vector<int>(9));
    cout << "Enter processesIds:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> pdetails[i][0];
    }
    cout << "Enter arrival times of processes:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> pdetails[i][1];
    }
    cout << "Enter burst times of processes :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> pdetails[i][2];
    }
    cout << "Enter priority of processes :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> pdetails[i][3];
    }
    int isCompleted[n] = {0};
    int rbt[n];
    for (int i = 0; i < n; i++)
    {
        rbt[i] = pdetails[i][2];
    }
    int currtime = 0;
    int completed = 0;
    int sumtt = 0, sumwt = 0;
    int currPriorityNum = INT_MAX;
    int minindex = -1; // stores index of the process to execute
    while (completed != n)
   {
     for (int i = 0; i < n; i++)
       {
        if (pdetails[i][1] <= currtime && !isCompleted[i])
           {
              if (pdetails[i][3] < currPriorityNum)
                {
                    currPriorityNum = pdetails[i][3];
                    minindex = i;
                }
             else if (pdetails[i][3] == currPriorityNum && pdetails[i][1] < pdetails[minindex][1])
                {

                    minindex = i;
                }
             else if (pdetails[i][3] == currPriorityNum && pdetails[i][0] <       pdetails[minindex][0])
                {
                    minindex = i;
                }
            }
        }
     if (minindex == -1)
        {
            currtime++;
        }
     else
        {
            if (rbt[minindex] == pdetails[minindex][2])
            {
                pdetails[minindex][4] = currtime; // Start time
            }
            rbt[minindex] -= 1;
            currtime++;

            if (rbt[minindex] == 0)
            {
               currPriorityNum = INT_MAX;
               pdetails[minindex][6] = currtime; // completion time
               pdetails[minindex][5] = pdetails[minindex][4] - pdetails[minindex][1]; // Response time
               pdetails[minindex][8] = pdetails[minindex][6] - pdetails[minindex][1]; // Turn around time
                pdetails[minindex][7] = pdetails[minindex][8] - pdetails[minindex][2]; // Waiting time
                sumwt += pdetails[minindex][7];
                sumtt += pdetails[minindex][8];
                isCompleted[minindex] = 1;
                completed++;
            }
        }
    }
    sort(pdetails.begin(), pdetails.end(), comp);
    for (int i = 0; i < n; i++)
    {
        cout << "Process Id: " << pdetails[i][0] << " AT:  " << pdetails[i][1] << " BT: " << pdetails[i][2] << " Priority " << pdetails[i][3] << " ST: " << pdetails[i][4] << " RT: " << pdetails[i][5] << " CT: " << pdetails[i][6] << " WT: " << pdetails[i][7] << " TAT: " << pdetails[i][8] << endl;
    }
    double avgtt = (sumtt + 0.0) / n;
    double avgwt = (sumwt + 0.0) / n;
    cout << "Average wt: " << avgwt << endl;
    cout << "Average tt: " << avgtt << endl;
}

