#include <iostream>
using namespace std;
struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new int[size];
}
void enqueue(struct Queue *q, int x)
{
    if (q->rear == q->size - 1)
        cout << "Queue is Full";
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}
int dequeue(struct Queue *q)
{
    int x = -1;
    if (q->front == q->rear)
        cout << "Queue is Empty\n";
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}
int peek(struct Queue q)
{
    if (q.front == q.rear)
    {
        cout << "Queue is empty ! " << endl;
        return 0;
    }
    return q.Q[q.rear];
}
bool isFull(struct Queue q)
{
    if (q.rear == q.size - 1)
        return true;
    else
        return false;
}

bool isEmpty(struct Queue q)
{
    if (q.front == q.rear)
        return true;
    else
        return false;
}
void display(struct Queue q)
{
    int i;
    for (i = q.front + 1; i <= q.rear; i++)
        cout << q.Q[i] << "\t";
}
int main()
{

    struct Queue q;
    create(&q, 5);
    int n;
    do
    {
        /* code */
        cout << " menu driven program demonstrating simple queues:\n ";
        cout << "1.enqueue \n";
        cout << "2.dequeue \n";
        cout << "3.isEmpty \n";
        cout << "4.isFull \n";
        cout << "5.display \n";
        cout << "6.peek \n";
        cout << " enter your  choice: ";
        cin >> n;
        switch (n)
        {
        case 1:
            int n;
            cout << "enter data value : ";
            cin >> n;
            enqueue(&q, n);
            cout << "\n";
            break;
        case 2:
            cout << dequeue(&q);
            cout << "\n";
            break;
        case 3:
            cout << isEmpty(q);
            cout << "\n";
            break;
        case 4:
            cout << isFull(q);
            cout << "\n";
            break;
        case 5:
            display(q);
            cout << "\n";
            break;
        case 6:
            cout << peek(q);
            cout << "\n";
            break;
        }
    } while (n <= 6);
    return 0;
}