//
//  Savings Account.hpp
//  homeworkcreation
//
//  Created by Breno Sallouti on 17/05/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

#ifndef Savings_Account_hpp
#define Savings_Account_hpp

#include <stdio.h>
#include "Account.hpp"

#endif /* Savings_Account_hpp */

class SavingsAccount : public Account {
private:
    float interestRate;
public:
    SavingsAccount(float initialSavingsBalance);
    float savingsBalance (float savingsAccountBalance);
    float setInterestRate (float savingsInterest);
    float savingsValuation(); //multiplies current balance by savings interest rate
};
    
