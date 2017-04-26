//
//  main.cpp
//  homeworkcreation
//
//  Created by Breno Sallouti on 19/04/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

#include <iostream>
#include "Account.hpp"
// HW 2: Create new object investment account, (method that recieves dividends).
int main(int argc, const char * argv[]) {

    Account brenosBankAccount(0);
    Account mauriciosBankAccount(10);
    
    
    float remainingBalance;
    float transferResult;
    
    brenosBankAccount.loan(00);
    mauriciosBankAccount.loan(100);
    
    remainingBalance = brenosBankAccount.withdraw(10);
    transferResult = mauriciosBankAccount.transfer(0, &brenosBankAccount);

    brenosBankAccount.loanCollection(0);
    mauriciosBankAccount.loanCollection(100);
    
    brenosBankAccount.applyServiceTax(0.02);
    mauriciosBankAccount.applyServiceTax(0.02);

    
   
    
    if (transferResult==-1)
        std::cout<< "Breno's Balance: \nerror not enough balance\n";
    else{
        std::cout<< "Breno's Balance: \n" << brenosBankAccount.balance;
    }
    
    if (mauriciosBankAccount.balance>0)
        std::cout << "\nMauricio's Balance: \n" << mauriciosBankAccount.balance;
  
    if (mauriciosBankAccount.balance<0)
        std::cout<< "\nMaurcio's Balance: \nerror not enough balance";
    
    std::cout<< "\n";
    std::cout<<"\n";
    return 0;
}


