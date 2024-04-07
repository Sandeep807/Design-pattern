#include "strategy.h"

int main()
{
    CreditCardPayment ccp;
    PayPalPayment ppp;
    PaymentProcessor paymentProcessor(&ccp);
    paymentProcessor.processPayment(100);

    paymentProcessor.setPaymentMethod(&ppp);
    paymentProcessor.processPayment(200);

    return 0;
}