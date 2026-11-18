#include <iostream>
using namespace std;

class Memory {
private:
    int* data;

public:
    Memory() {
        data = new int(10);
        cout << "Default Constructor\n";
    }

    Memory(int val) {
        data = new int(val);
        cout << "Parameterized Constructor\n";
    }

    Memory(const Memory& other) {
        data = new int(*other.data);
        cout << "Copy Constructor\n";
    }

    Memory(Memory&& other) noexcept {
        data = other.data;
        other.data = nullptr;
        cout << "Move Constructor\n";
    }

    Memory& operator=(const Memory& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
        }
        cout << "Copy Assignment\n";
        return *this;
    }

    Memory& operator=(Memory&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
        }
        cout << "Move Assignment\n";
        return *this;
    }

    ~Memory() {
        delete data;
        cout << "Destructor\n";
    }

    void show() {
        if(data)
            cout << *data << endl;
    }
};

int main() {
    Memory m1(50);
    Memory m2 = m1;
    Memory m3 = move(m1);

    m2.show();
    m3.show();

    return 0;
}
