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
    float remainingBalance;
    
    remainingBalance = brenosBankAccount.withdraw(100);
    
    std::cout << remainingBalance;
    return 0;
}
