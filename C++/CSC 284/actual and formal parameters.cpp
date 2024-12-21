#include<iostream>

int add(int m, int n); // Function declaration
int add(int a, int b)
{
    return (a + b);
}

int main() {
    int m = 5;
    int n = 10;
    int result = add(m, n);
    std::cout << "Result: " << result << std::endl;
    return 0;
}


