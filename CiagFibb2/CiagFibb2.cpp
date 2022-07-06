#include <iostream>

class Fibbonacci
{
public:
    int generate(int n)
    {
        if (n <= 2)
        {
            return 1;
        }
        else
        {
            return generate(n - 2) + generate(n - 1);
        }
    }
};

int main()
{
    Fibbonacci fib;
    std::cout << fib.generate(20);
}

