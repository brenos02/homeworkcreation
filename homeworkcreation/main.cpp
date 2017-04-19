//
//  main.cpp
//  homeworkcreation
//
//  Created by Breno Sallouti on 19/04/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

#include <iostream>
#include "Account.hpp"

/*
    TODO: create a transfer method that receives a value to be transfered and an Account object 
*/


int main(int argc, const char * argv[]) {
    Account brenosBankAccount;
    Account mauriciosBankAccount;
    
    float remainingBalance;
    float transferResult;
    
    remainingBalance = brenosBankAccount.withdraw(100);
    transferResult = mauriciosBankAccount.transfer(50, brenosBankAccount);
    
    std::cout << "Breno's Balance" <<brenosBankAccount.balance;
    std::cout << "Maurcio's Balance" <<mauriciosBankAccount.balance;
    return 0;
}
