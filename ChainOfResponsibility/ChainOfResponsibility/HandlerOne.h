//
//  HandlerOne.h
//  ChainOfResponsibility
//
//  Created by Tri Truong Mai Thanh on 12/27/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __ChainOfResponsibility__HandlerOne__
#define __ChainOfResponsibility__HandlerOne__

#include <iostream>
#include "Base.h"
class HandlerOne : public Base {
public:
//    Constructor Destructor
    HandlerOne();
    virtual ~HandlerOne();
//    virtual Method
     virtual void handler (int n);
};
#endif /* defined(__ChainOfResponsibility__HandlerOne__) */
