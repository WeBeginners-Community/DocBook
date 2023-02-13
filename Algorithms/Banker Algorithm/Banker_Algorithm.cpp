#include <iostream>
using namespace std;
#include <vector>
int n;
int m;
bool Safety(vector<vector<int>> allocation, vector<vector<int>> need, vector<int> available, vector<int> processId)
{
    int safe[n];
    int k = 0;
    int completed[n] = {0};
    int finish = 0;
    vector<int> total(m);
    int sumr = 0;
    for (int j = 0; j < m; j++) // j selects resource to do sum of its allocations
    {
        for (int i = 0; i < n; i++)
        {
            sumr += allocation[i][j];
        }
        total[j] = available[j] + sumr;
        sumr = 0;
    }
    while (finish != n)
    {
        int select = -1;
        for (int i = 0; i < n; i++)
        { // traversing the processes
            if (!completed[i])
            {
                int j = 0;
                while (j < m && need[i][j] <= available[j])
                {
                    j++;
                }
                if (j == m)
                { // need satisfied
                    safe[k++] = processId[i];
                    select = i;
                    finish++;
                    completed[i] = 1;
                    for (int j = 0; j < m; j++)
                    {
                        available[j] += allocation[i][j];
                    }
                }
            }
        }
        if (select == -1)
        {
            break;
        }
    }
    int j = 0;
    while (j < m && total[j] == available[j])
    {
        j++;
    }
    if (j == m)
    {
        cout << "The system is in safe state" << endl;
        cout << "The safe sequence is: ";
        for (int k = 0; k < n; k++)
        {
            cout << "P" << safe[k] << " ";
        }
        cout << endl;
        return true;
    }
    else
    {
        cout << "The system is in unsafe state!" << endl;
        return false;
    }
}
void ResourceRequest(vector<vector<int>> allocation, vector<vector<int>> need, vector<int> available, vector<int> processId)
{
    int id;
    int request[m];
    cout << "Enter process id requesting resource:\n";
    cin >> id;
    cout << "Enter resources requested:\n";
    for (int j = 0; j < m; j++)
    {
        cin >> request[j];
    }
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (processId[i] == id)
        {
            idx = i;
            break;
        }
    }
    int j = 0;
    while (j < m && (request[j] <= need[idx][j] && request[j] <= available[j]))
    {
        j++;
    }
    if (j == m)
    {
        for (int j = 0; j < m; j++)
        {
            available[j] -= request[j];
            allocation[idx][j] += request[j];
            need[idx][j] -= request[j];
        }
        if (!Safety(allocation, need, available, processId))
        {
            cout << "Request cannot be granted!\n";
        }
        else
        {
            cout << "Request can be granted\n";
        }
    }
    else
    {
        cout << "This Request cannot be granted\n";
        return;
    }
}
int main()
{
  cout << "Enter no. of processes:" << endl;
    cin >> n;
    cout << "Enter process Ids:" << endl;
    vector<int> processId(n);
    for (int i = 0; i < n; i++)
    {
        cin >> processId[i];
    }
    cout << "Enter no. of type of resources:" << endl;
    cin >> m;
    cout << "Enter no. of allocated resources of each type for " << n << " processes" << endl;
    vector<vector<int>> allocation(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> allocation[i][j];
        }
    }
    cout << "Enter no. of maximum required resources of each type for " << n << " processes" << endl;
    vector<vector<int>> max(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> max[i][j];
        }
    }
    cout << "Enter no. of available resources of each type" << endl;
    vector<int> available(m);
    for (int j = 0; j < m; j++)
    {
        cin >> available[j];
    }
  vector<vector<int>> need(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
  cout << "Processes\tAllocation\tMax\t\tNeed" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "P" << processId[i] << "\t\t";
        for (int j = 0; j < m; j++)
        {
            cout << allocation[i][j] << " ";
        }
        cout << "\t\t";
        for (int j = 0; j < m; j++)
        {
            cout << max[i][j] << " ";
        }
        cout << "\t\t";
      for (int j = 0; j < m; j++)
        {
            cout << need[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Available resources: ";
    for (int j = 0; j < m; j++)
    {
        cout << available[j] << " ";
    }
    cout << endl;
    int doing = 1;
    while (doing)
    {
        cout << "Select choice:\nA:Request resource for a process\nB:Check state\nC:Exit\n";
        char ch;
        cin >> ch;
        switch (ch)
        {
        case 'A':
            ResourceRequest(allocation, need, available, processId);
            break;
        case 'B':
            if (Safety(allocation, need, available, processId))
            {
                break;
            }
            break;
        case 'C':
            doing = 0;
            break;
        default:
            cout << "Invalid input\n";
            break;
        }
    }
}
