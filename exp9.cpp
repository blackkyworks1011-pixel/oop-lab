#include <iostream>
#include <exception>
using namespace std;

class BankingException : public exception {
public:
    const char* what() const noexcept override {
        return "Banking Exception";
    }
};

class InsufficientFunds : public BankingException {
public:
    const char* what() const noexcept override {
        return "Insufficient Funds";
    }
};

int main() {
    double balance = 5000;
    double withdraw = 7000;

    try {
        if(withdraw > balance)
            throw InsufficientFunds();

        balance -= withdraw;
    }
    catch(BankingException& e) {
        cout << e.what() << endl;
    }
}
