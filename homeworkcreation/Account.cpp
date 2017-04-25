//
//  Account.cpp
//  homeworkcreation
//
//  Created by Breno Sallouti on 19/04/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

#include "Account.hpp"

// class constructor
Account::Account(float initialBalance){
    balance = initialBalance;
}

float Account::withdraw(float withdrawl){
    balance= balance-withdrawl;
    return balance;
}

float Account::transfer (float transferValue, Account *destinationAccount) {
    if (transferValue<balance){
        return -1;
    }
    else{
        this->withdraw(transferValue);
        destinationAccount->deposit(transferValue);
        return balance;
    }
}

float Account::deposit (float depositValue){
    balance= balance+depositValue;
    return balance;
}

float Account::intialBalance (float intialBalance) {
    balance=intialBalance;
    return balance;
}



