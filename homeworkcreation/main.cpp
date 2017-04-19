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
    TODO: 
 1. Create constructor method that receives an initial balance. [use nameofobject() declaration]
 2. Prevent transfer from being executed if origin account does not have enough balance. Return error code. [Use "if" statement]
*/

//void changeValue(int *a){
//    *a = 10;
//}

int main(int argc, const char * argv[]) {
    
//    int b;
//    b = 20;
//    
//    changeValue(&b);
    
    Account brenosBankAccount;
    Account mauriciosBankAccount;
    
    float remainingBalance;
    float transferResult;
    
    remainingBalance = brenosBankAccount.withdraw(100);
    transferResult = mauriciosBankAccount.transfer(50, &brenosBankAccount);
    
    std::cout << "Breno's Balance" << brenosBankAccount.balance << "\n";
    std::cout << "Maurcio's Balance" <<mauriciosBankAccount.balance << "\n";
    return 0;
}



