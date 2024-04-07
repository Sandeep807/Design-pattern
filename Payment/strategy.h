#include <iostream>
using namespace std;

class PaymentMethod
{
public:
    virtual void pay(double) = 0;
    virtual ~PaymentMethod() {}
};

class CreditCardPayment : public PaymentMethod
{
public:
    void pay(double);
};

class PayPalPayment : public PaymentMethod
{
public:
    void pay(double);
};

class PaymentProcessor
{
private:
    PaymentMethod *paymentMethod;

public:
    PaymentProcessor(PaymentMethod *);

    void setPaymentMethod(PaymentMethod *);
    void processPayment(double);
};