#include <iostream>
using namespace std;
#define max 1000
struct semaphore
{
    int value = 1;
};
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
void enqueue(int id)
{
    if (f == -1)
    {
        f = 0;
    }
    r = (r + 1) % max;
    queue[r] = id;
}
int dequeue()
{
    if (isEmpty())
    {
        return -1;
    }

    int id = queue[f];

    if (f == r)
    {
        f = -1;
        r = -1;
        return id;
    }

    f = (f + 1) % max;
    return id;
}
void wait(struct semaphore &s)
{
    while (s.value <= 0)
        ;

    s.value = s.value - 1;
}
void signal(struct semaphore &s)
{
    s.value = s.value + 1;
}
int main()
{
    cout << "Enter no. of processes:" << endl;
    int n;
    cin >> n;
    cout << "Enter process Ids:" << endl;
    int Processes[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Processes[i];
    }
    for (int i = 0; i < n; i++)
    {
        enqueue(Processes[i]);
    }
    struct semaphore s;
    s.value = 1;

    while (!isEmpty())
    {
        int id = dequeue();
        wait(s);
        cout << "Process " << id << " entered critical section" << endl;
        cout << "Semaphore value is: " << s.value << endl;
        signal(s);
        cout << "Process " << id << " exitted" << endl;
        cout << "Semaphore value is: " << s.value << endl;
        cout << endl;
    }
}
