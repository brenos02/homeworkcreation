//
//  Investment Account.hpp
//  homeworkcreation
//
//  Created by Breno Sallouti on 26/04/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

#ifndef Investment_Account_hpp
#define Investment_Account_hpp

#include <stdio.h>

class Investment {
public:
    float investmentAccountBalance (float investmentAccountBalance);
    float dividends (float dividendsReturns,float investmentAccountBalance);
    float stockValuation (float investmentAccountBalance, float stockReturns, float dividendsReturns);
};

#endif /* Investment_Account_hpp */
