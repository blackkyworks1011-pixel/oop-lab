#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
    vector<T> data;

public:
    void push(T value) {
        data.push_back(value);
    }

    void pop() {
        if(!data.empty())
            data.pop_back();
    }

    T top() {
        return data.back();
    }
};

int main() {
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    cout << s1.top() << endl;

    Stack<float> s2;
    s2.push(3.14f);
    cout << s2.top() << endl;

    Stack<string> s3;
    s3.push("Hello");
    cout << s3.top() << endl;
}
