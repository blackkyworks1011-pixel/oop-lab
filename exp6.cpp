#include <iostream>
using namespace std;

class Matrix {
public:
    int a[2][2];

    Matrix() {
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                cin >> a[i][j];
    }

    Matrix operator+(Matrix m) {
        Matrix result;

        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                result.a[i][j] = a[i][j] + m.a[i][j];

        return result;
    }

    void display() {
        for(int i=0;i<2;i++) {
            for(int j=0;j<2;j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

int add(int a, int b) {
    return a+b;
}

double add(double a, double b) {
    return a+b;
}

int main() {
    cout << add(2,3) << endl;
    cout << add(2.5,3.5) << endl;

    cout << "Enter Matrix 1:\n";
    Matrix m1;

    cout << "Enter Matrix 2:\n";
    Matrix m2;

    Matrix m3 = m1 + m2;

    cout << "Result:\n";
    m3.display();
}
