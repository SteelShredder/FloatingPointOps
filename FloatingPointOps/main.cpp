//
//  main.cpp
//  FloatingPointOps
//
//  Created by Gavin Gavington on 9/28/18.
//



#include <iostream>
double inputDoubles();
double inputOperator();
double findResult(double a,double b,char o);
void printResult(double result);

int main()
{
    double firstNumber = inputDoubles();
    double secondNumber = inputDoubles();
    char operand = inputOperator();
    double result = findResult(firstNumber,secondNumber,operand);
    printResult(result);
    return 0;
}

double inputDoubles()
{
    // ret: return value
    double ret;
    std::cout << "Give number \a" << std::endl;
    std::cin >> ret;
    return ret;
}

double inputOperator()
{
    // ret: return value
    char ret;
    std::cout << "Give operator \a" << std::endl;
    std::cin >> ret;
    return ret;
}

double findResult(double a, double b, char o)
{
    if (static_cast<int>(o)==42) //multiplication
    {
        return a*b;
    }
    
    if (static_cast<int>(o)==43) //addition
    {
        return a+b;
    }
    
    if (static_cast<int>(o)==45) //subtraction
    {
        return a-b;
    }
    
    if (static_cast<int>(o)==47) //division
    {
        return a/b;
    }
    return 0;
}

void printResult(double result)
{
    std::cout << std::endl << result << std::endl;
}
