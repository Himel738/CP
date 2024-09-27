#include<bits/stdc++.h>
using namespace std;

class Stack
{
private:
    long long int *array;
    int top;
    int capacity;

public:

    Stack(int size)
    {
        array = new long long int[size];
        capacity = size;
        top = -1;
    }

    ~Stack()
    {
        delete[] array;
    }

    void push(int data)
    {
        if (top == capacity - 1)
        {
            return;
        }
        array[++top] = data;
    }

    long long int pop()
    {
        if (top == -1)
        {
            return -1;
        }
        return array[top--];
    }

    bool isEmpty()
    {
        if(top == -1)
           return true;
        else
            return false;
    }

   long long int peek()
    {
        if (top != -1)
        {
            return array[top];
        }
        return -1;
    }
    long long int calculation()
    {
         int x = top;
         top--;
        while(!isEmpty())
        {
            array[x] = array[x] - array[top];
            pop();
        }
        top = x;
        return pop();
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        Stack s(n);

        for (int i = 0; i < n; i++)
        {
            int data;
            cin >> data;
            s.push(data);
        }

        long long int x = s.pop();
        long long int y = s.calculation();

        cout << x - y << endl;
    }

    return 0;
}
