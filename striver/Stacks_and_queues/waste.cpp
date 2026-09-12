











#include<bits/stdc++.h>
using namespace std;
class Stack {
    static const int siz = 100;
    int arr[siz];
    int top;
    int cursize = 0;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (cursize >= siz) {
            cout << "error oversize";
            return;
        }
        top++;
        arr[top] = x;
        cursize++;
    }

    int pop() {
        if (cursize == 0) {
            cout << "empty";
            return -1;
        }
        int temp = arr[top];
        top--;
        cursize--;
        return temp;
    }

    int topi() {
        if (cursize == 0) {
            cout << "empty";
            return -1;
        }
        return arr[top];
    }

    int size() {
        return cursize;
    }
};

int main() {
    Stack s;
    s.push(5);
    cout << "\nTop element: " << s.topi();
    cout << "\nStack size: " << s.size();
    return 0;
}

