#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void bestfit(int b[], int p[], int n, int m)
{
    vector<int> allocate(n, -1);
    int reserved[m] = {0};
    int min_idx;
    int min;
    for (int i = 0; i < n; i++)
    {
        min_idx = -1;
        min = INT_MAX;
        for (int j = 0; j < m; j++)
        {
            if (!reserved[j])
            {
                if (p[i] <= b[j] && b[j] < min)
                {
                    min_idx = j;
                    min = b[min_idx];
                }
            }
        }
        if (min_idx == -1)
        {
            continue;
        }
        allocate[i] = min_idx + 1;
        reserved[min_idx] = 1;
    }
    cout << "Process no.\tProcess size\tBlock no.\tBlock size" << endl;
    for (int i = 0; i < n; i++)
    {
        if (allocate[i] != -1)
        {
            cout << i + 1 << "\t\t" << p[i] << "\t\t" << allocate[i] << "\t\t" << b[allocate[i] - 1] << "\n";
        }
        else if (allocate[i] == -1)
        {
            cout << i + 1 << "\t\t" << p[i] << "\t\tNot allocated\tNA\n";
        }
    }
}
int main()
{
    int m;
    cout << "Enter no. of memory blocks:\n";
    cin >> m;
    cout << "Enter size of blocks:\n";
    int blocks[m];
    for (int j = 0; j < m; j++)
    {
        cin >> blocks[j];
    }
    int n;
    cout << "Enter no. of processes\n";
    cin >> n;
    int psize[n];
    cout << "Enter size of processes\n";
    for (int i = 0; i < n; i++)
    {
        cin >> psize[i];
    }
    cout << "\nAllocation using best fit algorithm:\n\n";
    bestfit(blocks, psize, n, m);
    return 0;
}
