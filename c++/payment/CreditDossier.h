//
// Created by keke on 12.07.22.
//

#include "BankLoan.h"
#include "Person.h"
#include <vector>
#ifndef PAYMENT_CREDITDOSSIER_H
#define PAYMENT_CREDITDOSSIER_H

#endif //PAYMENT_CREDITDOSSIER_H
#include <iostream>
#include<math.h>
using namespace std;
class CreditDossier
{
private:
    Person person; vector<BankLoan> loans;
public:
    CreditDossier();
    void setPerson(Person &pers);
    void setLoan(BankLoan &loans);

    void getLoanByName();

    void getLoanBySumm();

    void getLoanByRepaymentAmount();

    void getRepaymentSchedule();
};

void CreditDossier::setPerson(Person &pers) {
    this->person = pers;
}

void CreditDossier::setLoan(BankLoan &loa) {
    loans.push_back(loa);
}

void CreditDossier::getLoanByName() {
    size_t SIZE = loans.size();
    BankLoan temp;
    for (auto i = 0; i < SIZE - 1; i++) {
        for (auto j = 0; j < SIZE - i - 1; j++) {
            if (loans[j].credit_size() > loans[j + 1].credit_size()) {
                temp = loans[j];
                loans[j] = loans[j + 1];
                loans[j + 1] = temp;
            }
        }
    }
}

void CreditDossier::getLoanBySumm() {
    BankLoan temp; BankLoan k=
    ((temp.get_percentage() / temp.get_month()) / 100) *
    pow((1 + ((temp.get_percentage() / temp.get_month()) / 100)), temp.get_month());
    loans.push_back(k);
}

void CreditDossier::getLoanByRepaymentAmount() {
    BankLoan temp;
    auto now = k * temp.credit_size();

}

void CreditDossier::getRepaymentSchedule() {
    cout <<
}


