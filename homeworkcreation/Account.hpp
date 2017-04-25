//
//  Account.hpp
//  homeworkcreation
//
//  Created by Breno Sallouti on 19/04/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>

class Account {
public:
    int id;
    float balance;
    
    Account(float initialBalance); //class constructor
    float withdraw(float withdrawl);
    float transfer (float transferValue, Account *destinationAccount);
    float deposit (float depositValue);
    float intialBalance(float intialBalance);
  };

#endif /* Account_hpp */
