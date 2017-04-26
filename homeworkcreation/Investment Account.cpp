//
//  Investment Account.cpp
//  homeworkcreation
//
//  Created by Breno Sallouti on 26/04/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

#include "Investment Account.hpp"


float Investment::dividends(float dividendsReturns, float investmentAccountBalance){
    investmentAccountBalance= investmentAccountBalance+dividendsReturns;
    return investmentAccountBalance;
}

