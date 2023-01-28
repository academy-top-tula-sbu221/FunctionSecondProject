#include <iostream>

using namespace std;

int Func(int n)
{
    n = 100;
    return n;
}

int main()
{
    /*
    int a = 109;
    int b = 86;

    cout << "a & b" << (a & b) << "\n";
    cout << "a | b" << (a | b) << "\n";
    cout << "a ^ b" << (a ^ b) << "\n";
    cout << "a << b" << (a << 2) << "\n";
    cout << "a >> b" << (a >> 2) << "\n";
    cout << "~a" << ~a << "\n";
    */

    int n = 200;
    cout << (n << 1) << "\n";
    cout << (n << 2) << "\n";
    cout << (n << 3) << "\n";
    cout << (n << 4) << "\n";
    cout << "\n";
    cout << (n >> 1) << "\n";
    cout << (n >> 2) << "\n";
    cout << (n >> 3) << "\n";
    cout << (n >> 4) << "\n";
    
    
}
