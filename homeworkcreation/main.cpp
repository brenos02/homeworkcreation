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

    Account brenosBankAccount(10);
    Account mauriciosBankAccount(20);
    
    float remainingBalance;
    float transferResult;

    remainingBalance = brenosBankAccount.withdraw(100);
    transferResult = mauriciosBankAccount.transfer(50, &brenosBankAccount);
    
    brenosBankAccount.applyServiceTax(0.02);
    mauriciosBankAccount.applyServiceTax(0.02);

    if (brenosBankAccount.balance==-1)
        std::cout<< "Breno's Balance: \nerror not enough balance\n";
    else{
        std::cout<< "Breno's Balance: \n" << brenosBankAccount.balance;
    }
    
    if (mauriciosBankAccount.balance>0)
        std::cout << "\nMauricio's Balance: \n" << mauriciosBankAccount.balance;
  
    if (mauriciosBankAccount.balance<0)
        std::cout<< "Maurcio's Balance: \nerror not enough balance";
    
    std::cout<< "\n";
    std::cout<<"\n";
    return 0;
}


