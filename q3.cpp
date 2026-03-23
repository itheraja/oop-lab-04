#include <iostream>
using namespace std;

class BankAccount {
private:
    static float interestRate;

public:
    static void changeRate(float rate) {
        interestRate = rate;
    }

    void showRate() {
        cout << "Current interest rate: " << interestRate << "%" << endl;
    }
};

// Initialize static member
float BankAccount::interestRate = 5.0;

int main() {
    cout << "Task 3: BankAccount\n";
    BankAccount acc1, acc2, acc3;

    cout << "Initial rate for all accounts:\n";
    acc1.showRate();
    acc2.showRate();
    acc3.showRate();

    cout << "\nChanging interest rate to 7.5%\n";
    BankAccount::changeRate(7.5);

    cout << "Updated rate for all accounts:\n";
    acc1.showRate();
    acc2.showRate();
    acc3.showRate();
    cout << "--------------------\n";
}
