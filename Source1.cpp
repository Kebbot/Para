#include <iostream>


int Plus(int a, int b)
{
    if (!a)
        throw 0;
    if (!b)
        throw (std::string)"Youre second number is defolt";
    return a / b;

}

void test(int a, int b)
{
    try {
        int sum{ Plus(a,b) };
        std::cout << sum;
    }
    catch (int error)
    {
        std::cout << "Error code: " << error << std::endl;
    }
    catch (const std::string& error_massage)
    {
        std::cout << error_massage << std::endl;
    }
}

int main()
{

    test(100, 20);
    int a{};
    test(a, 30);
    test(10, 0);

    return 0;
}


