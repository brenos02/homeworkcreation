//
//  Account.cpp
//  homeworkcreation
//
//  Created by Breno Sallouti on 19/04/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

#include "Account.hpp"
float Account::withdraw(float withdrawl){
    balance= balance-withdrawl;
    return balance;
}
