#include <iostream>

int main()
{
    int my_var = 0;

    // 0, 1, 2 corresponds to the redirection of the flow stdin, stdout, std, stderr flow.
    std :: cin >> my_var; // 0
    std :: cout << "number = " << my_var << std :: endl; // 1
    std :: cerr << "boring error message" << std :: endl; // 2

    std::cout << "Hello wolrd!" << std::endl; // 1
}