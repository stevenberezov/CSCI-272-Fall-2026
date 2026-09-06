#include <iostream>

using namespace std;

double divide(double a, double b);


int main()
{
    // double num1, num2;
    
    // num1 = 10; num2 = 5;
    
    // double result = num1 / num2;
    
    double result = divide(10, 5);
    
    double x = divide(12, 0);
    
    cout << "Result: " << x << endl;

    return 0;
}

double divide(double a, double b){
    if (b == 0){
        cout << "Error: Cannot divide by zero" << endl;
        return 0;
    }
    
    return a / b;
}