#include <iostream>
#include <vector>
#include <string>
using namespace std;

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
bool isfull(int n)
{
    if ((r + 1) % n == f)
    {
        return 1;
    }
    return 0;
}
void enqueue(vector<int> &memory, int n, int page)
{
    if (f == -1)
    {
        f = 0;
    }
    r = (r + 1) % n;
    memory[r] = page;
}
void dequeue(int n)
{
    if (isEmpty())
    {
        return;
    }
    if (f == r)
    {
        f = -1;
        r = -1;
        return;
    }

    f = (f + 1) % n;
}
bool pagefault(vector<int> &memory, int n, int page)
{
    for (int i = 0; i < n; i++)
    {
        if (memory[i] == page)
        {
            return false;
        }
    }
    return true;
}
void fifo(vector<int> pages, int n, int &count, int &hit)
{
    int m = pages.size();
    vector<int> memory(n, -1);
    vector<vector<int>> output(n, vector<int>(m));
    for (int i = 0; i < m; i++) // pick page from page reference string
    {
        if (pagefault(memory, n, pages[i]))
        {
            count++;
            if (!isfull(n))
            {
                enqueue(memory, n, pages[i]);
            }
            else
            {
                dequeue(n);
                enqueue(memory, n, pages[i]);
            }
        }
        else
        {
            hit++;
        }
        for (int j = 0; j < n; j++)
        {
            output[j][i] = memory[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Frame " << i + 1 << ":   ";
        for (int j = 0; j < m; j++)
        {
            if (output[i][j] == -1)
            {
                cout << "E  ";
                continue;
            }
            cout << output[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Page faults: " << count << endl;
    cout << "Hit: " << hit << endl;
}
int main()
{
    int n;
    cout << "Enter no. of frames:\n";
    cin >> n;
    cout << "Enter no. of pages\n";
    int m;
    cin >> m;
    cout << "Enter pages:\n";
    vector<int> pages(m);
    for (int i = 0; i < m; i++)
    {

        cin >> pages[i];
    }
    int count = 0;
    int hit = 0;
    fifo(pages, n, count, hit);
    return 0;
}