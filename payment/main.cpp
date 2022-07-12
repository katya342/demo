


#include "BankLoan.h"
#include "Person.h"
#include "CreditDossier.h"

/*
Òåîðèÿ ðàñ÷åòà àííóèòåòíîãî ïëàòåæà
http://damoney.ru/bank/38_formula_annuitet.php
*/

int main() {
    BankLoan loanSixMonths("Six month loan", 100000.0, 6, 20);
    BankLoan loanTwelveMonths("Loan for a year", 500000.0, 12, 20);
    BankLoan loanTwoYears("Loan for two years", 2000000.0, 24, 20);

    Person ivanov("Ivanov", "Ivan", "Ivanovich");
    Person petrov("Petrov", "Petr", "Petrovich");
    Person sidorov("Sidorov", "Sidor", "Sidorovich");

    CreditDossier cardIvanov, cardPetrov, cardSidorov;

    cardIvanov.setPerson(ivanov);
    cardIvanov.setLoan(loanSixMonths);

    cardPetrov.setPerson(petrov);
    cardPetrov.setLoan(loanSixMonths);
    cardPetrov.setLoan(loanTwoYears);

    cardSidorov.setPerson(sidorov);
    cardSidorov.setLoan(loanTwelveMonths);
    cardSidorov.setLoan(loanTwoYears);

    cardIvanov.getLoanByName();
    cardIvanov.getLoanBySumm();
    cardIvanov.getLoanByRepaymentAmount();

    BankLoan::getLoanRepaymentSchedule(loanSixMonths);
    BankLoan::getLoanRepaymentSchedule(loanTwoYears);

    cardIvanov.getRepaymentSchedule();
    cardPetrov.getRepaymentSchedule();
    cardSidorov.getRepaymentSchedule();

    return 0;
}

/*
for metods: getLoanByName, getLoanBySumm, getLoanByRepaymentAmount

Name: Ivanov I.I. --- Loans
----------------------------------------------------
Name			Summ		Amount
...			...		...
...			...		...
...			...		...
----------------------------------------------------
*/

/*
for metod: getLoanRepaymentSchedule

Loan name: ...
Loan summ: ...
----------------------------------------------------
Months			Amount
...			...
...			...
...			...
----------------------------------------------------
Overpayments : ...
*/

/*
for metod: getRepaymentSchedule

Name: Ivanov I.I.
-------------------------------------------------------------------------
Months			Amount			Decryption of payment
...			...			...
...			...			...
...			...			...
-------------------------------------------------------------------------
Overpayments : ...

*/