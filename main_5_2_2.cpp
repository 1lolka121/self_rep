#include <iostream>

using namespace std;

int main()
{
    int amount;
    cout << "input number:"; cin >> amount;
    if(amount <= 0)
        return 0;
    if(amount % 100 == 0) 
    {
        if(amount <= 100000)
            std::cout << "Ok" << std::endl;
        else
            std::cout << "Over the limit" << std::endl;
    }
    else
    {
        std::cout << "Failed: must be multiple of 100" << std::endl;
    }

    return 0;
}
 
