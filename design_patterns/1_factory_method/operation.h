#pragma once
class Operation
{
protected:
    float number1, number2;
public:
    Operation(/* args */);
    void setNumbers(float n1, float n2);
    virtual float getResult();
    virtual ~Operation();
};

class OperationAdd : public Operation
{
public:
    OperationAdd();
    ~OperationAdd();
    float getResult() override;
};
class OperationMinus : public Operation
{
public:
    OperationMinus(){}
    ~OperationMinus(){}
    float getResult() override
    {
        return number1 - number2;
    }
};
class OperationMultiply : public Operation
{
public:
    OperationMultiply(){}
    ~OperationMultiply(){}
    float getResult() override
    {
        return number1 * number2;
    }
};
class OperationDivide : public Operation
{
public:
    OperationDivide(){}
    ~OperationDivide(){}
    float getResult() override
    {
        return number1 / number2;
    }
};

Operation* OperationFactory(const char op);