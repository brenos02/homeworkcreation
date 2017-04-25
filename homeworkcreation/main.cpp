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
    //float intialBalance;
    
    //intialBalance = brenosBankAccount.intialBalance(10);
    //intialBalance = mauriciosBankAccount.intialBalance(100);
    remainingBalance = brenosBankAccount.withdraw(100);
    transferResult = mauriciosBankAccount.transfer(50, &brenosBankAccount);
    
    if (brenosBankAccount.balance>0)
        std::cout<< "Breno's Balance: \n" << brenosBankAccount.balance;
    
    std::cout<< "\n";
   
    if (brenosBankAccount.balance<0)
    std::cout<< "Breno's Balance: \nerror not enough balance\n";
    
    if (mauriciosBankAccount.balance>0)
        std::cout << "\nMauricio's Balance: \n" << mauriciosBankAccount.balance;
  
    if (mauriciosBankAccount.balance<0)
        std::cout<< "Maurcio's Balance: \nerror not enough balance";
    
    std::cout<< "\n";
    std::cout<<"\n";
    return 0;
}


