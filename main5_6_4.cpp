#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введите сумму: ";
    cin >> N;

    if (N > 150000) {
        cout << "Ошибка: превышена максимальная сумма" << endl;
        return 0;
    }
    if (N % 100 != 0) {
        cout << "Невозможно выдать сумму" << endl;
        return 0;
    }

    int counts[6] = {0}; // 5000, 2000, 1000, 500, 200, 100
    int denominations[] = {5000, 2000, 1000, 500, 200, 100};
    int remaining = N;

    for (int i = 0; i < 6; i++) {
        counts[i] = remaining / denominations[i];
        remaining %= denominations[i];
    }

    if (remaining != 0) {
        cout << "Невозможно выдать сумму" << endl;
        return 0;
    }

    bool first = true;
    for (int i = 0; i < 6; i++) {
        if (counts[i] > 0) {
            if (!first) cout << ", ";
            cout << counts[i] << " по " << denominations[i];
            first = false;
        }
    }
    cout << endl;

    return 0;
}
