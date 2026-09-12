#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) : length(l) {}
    friend void displayLength(Box);   // no parameter name
    friend void changeLength(Box &);  // no parameter name
};

void displayLength(Box b) {
    cout << "Length: " << b.length << endl;
}

void changeLength(Box &b) {
    b.length = 999;
    cout<<"after changing b :"<<b.length<<endl;
}

int main() {
    Box box1(10);
    displayLength(box1);  // 10
    changeLength(box1);   // modify original 999
   
}

