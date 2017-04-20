//
//  main.cpp
//  homeworkcreation
//
//  Created by Breno Sallouti on 19/04/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

#include <iostream>
#include "Account.hpp"

int main(int argc, const char * argv[]) {

    Account brenosBankAccount;
    Account mauriciosBankAccount;
    
    float remainingBalance;
    float transferResult;
    float intialBalance;
    
    intialBalance = brenosBankAccount.intialBalance(1000);
    intialBalance = mauriciosBankAccount.intialBalance(1000);
    remainingBalance = brenosBankAccount.withdraw(100);
    transferResult = mauriciosBankAccount.transfer(50, &brenosBankAccount);
    
    if (brenosBankAccount.balance>0)
        std::cout<< "Breno's Balance\n" << brenosBankAccount.balance;
    
    if (brenosBankAccount.balance<0)
    std::cout<< "Breno's Balance \n error not enough balance";
    
    if (mauriciosBankAccount.balance>0)
        std::cout << "\nMauricio's Balance\n" << mauriciosBankAccount.balance;
    
    if (mauriciosBankAccount.balance<0)
        std::cout<< "Maurcio's Balance \n error not enough balance";
    
    
    return 0;
}


