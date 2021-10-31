#include"operation.h"

Operation::Operation()
    : number1(0), number2(0)
{}
Operation::~Operation()
{}



void Operation::setNumbers(float n1, float n2)
{
    number1 = n1;
    number2 = n2;
}

float Operation::getResult()
{
    return 0;
}


OperationAdd::OperationAdd()
    : Operation()
{}

OperationAdd::~OperationAdd()
{}


float OperationAdd::getResult()
{
    return number1 + number2;
}

Operation* OperationFactory(const char op)
{
    switch (op)
    {
    case '+':
        return new OperationAdd();
        break;
    case '-':
        return new OperationMinus();
        break;
    case 'x':
        return new OperationMultiply();
        break;
    case '/':
        return new OperationDivide();
        break;
    default:
        break;
    }
    return nullptr;
}