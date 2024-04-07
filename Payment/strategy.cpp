#include "strategy.h"

void CreditCardPayment ::pay(double amount)
{
    cout << "Paying " << amount << " via credit card" << endl;
}

void PayPalPayment ::pay(double amount)
{
    cout << "Paying " << amount << " via pay pal " << endl;
}

PaymentProcessor ::PaymentProcessor(PaymentMethod *paymentMethod) : paymentMethod(paymentMethod) {}

void PaymentProcessor ::setPaymentMethod(PaymentMethod *paymentMethod)
{
    this->paymentMethod = paymentMethod;
}
void PaymentProcessor ::processPayment(double amount)
{
    paymentMethod->pay(amount);
}