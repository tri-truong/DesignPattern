//
//  HandlerTwo.h
//  ChainOfResponsibility
//
//  Created by Tri Truong Mai Thanh on 12/27/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __ChainOfResponsibility__HandlerTwo__
#define __ChainOfResponsibility__HandlerTwo__

#include <iostream>
#include "Base.h"
class HandlerTwo : public Base{
public:
    HandlerTwo();
    virtual ~HandlerTwo();
//    virtual method
    virtual void handler(int n);
};
#endif /* defined(__ChainOfResponsibility__HandlerTwo__) */
