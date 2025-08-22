#include<bits/stdc++.h>

using namespace std;

class PaymentStrategy {
public:
    virtual void processPayment() = 0;
    virtual ~PaymentStrategy() {}
};

class CreditCardPayment : public PaymentStrategy {
public:     
    void processPayment() override {
        cout << "Processing credit card payment." << endl;
    }
};

class PayPalPayment : public PaymentStrategy {
public:
    void processPayment() override {
        cout << "Processing PayPal payment." << endl;
    }
};

class CryptoPayment : public PaymentStrategy {
public:
    void processPayment() override {
        cout << "Processing cryptocurrency payment." << endl;
    }
};

class PaymentProcessor  {
private: 
    PaymentStrategy *paymentStrategy;

public: 
    PaymentProcessor(PaymentStrategy *paymentStrategy) {
        this->paymentStrategy = paymentStrategy;
    } 

    void processPayment() {
        paymentStrategy->processPayment();
    }

    void setPaymentStrategy(PaymentStrategy *paymentStrategy) {
        this->paymentStrategy = paymentStrategy;
    }
};


int main() {
    PaymentStrategy *creditCard = new CreditCardPayment();
    PaymentStrategy *payPal = new PayPalPayment();
    PaymentStrategy *crypto = new CryptoPayment();

    //initializing for credit card
    PaymentProcessor *processor = new PaymentProcessor(creditCard);
    processor->processPayment();

    //dynamically change payment strategy to PayPal
    processor->setPaymentStrategy(payPal);
    processor->processPayment();

    //dynamically change payment strategy to cryptocurrency
    processor->setPaymentStrategy(crypto);
    processor->processPayment();

    delete creditCard;
    delete payPal;
    delete crypto;
    delete processor;

    return 0;
}
