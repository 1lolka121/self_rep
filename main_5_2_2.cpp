#include <iostream>

using namespace std;

int main()
{
    int amount;
    cout << "input number:"; cin >> amount;


    if (amount % 100 == 0 && amount <= 100000)
    {
        std::cout << "Ok" << std::endl;
    }
    else {
        std::cout << "Over the limit" << std::endl;
    }


    return 0;
}

