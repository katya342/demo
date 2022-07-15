#ifndef PAYMENT_BANKLOAN_H
#define PAYMENT_BANKLOAN_H

#endif //PAYMENT_BANKLOAN_H
#include<iostream>
#include "CreditDossier.h"

class BankLoan
{
private:
    std::string duration;
    size_t summa;
    size_t month;
    size_t percent;
public:
    BankLoan();
    BankLoan(std::string dur, size_t sum, size_t percent, size_t month);
    double credit_size();
    size_t get_month();
    size_t get_percentage();

    static void getLoanRepaymentSchedule(BankLoan loan);
};

BankLoan::BankLoan(std::string dur, size_t sum, size_t percent, size_t month) {
    this->duration = dur;
    this->month = month;
    this->percent = percent;
    this->summa = sum;
}

double BankLoan::credit_size() {
    return this->summa;
}

size_t BankLoan::get_month() {
    return this->month;
}

size_t BankLoan::get_percentage() {
    return this->percent;
}


