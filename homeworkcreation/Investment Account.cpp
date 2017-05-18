//
//  Investment Account.cpp
//  homeworkcreation
//
//  Created by Breno Sallouti on 26/04/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

#include "Investment Account.hpp"
#include "main.cpp"

float Investment::dividends(float dividendsReturns, float investmentAccountBalance){
    investmentAccountBalance= investmentAccountBalance+dividendsReturns;
    return investmentAccountBalance;
}
float Investment::stockValuation(float investmentAccountBalance, float stockReturns, float dividendReturns){
    dividendReturns = investmentAccountBalance + stockReturns;
    return dividendReturns;
}

