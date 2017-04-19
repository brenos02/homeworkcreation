//
//  main.cpp
//  homeworkcreation
//
//  Created by Breno Sallouti on 19/04/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

#include <iostream>
#include "Account.hpp"
/*TODO:Please create a class in a different file, named Account
  attributes: id [integer], balance [float]
  methods: withdraw (value)
*/

int main(int argc, const char * argv[]) {
    Account brenosBankAccount;
    float remainingBalance;
    remainingBalance=brenosBankAccount.withdraw(100);
    
    std::cout << remainingBalance;
    return 0;
}
