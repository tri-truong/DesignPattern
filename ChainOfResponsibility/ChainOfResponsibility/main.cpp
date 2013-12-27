//
//  main.cpp
//  ChainOfResponsibility
//
//  Created by Tri Truong Mai Thanh on 12/27/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include <iostream>
#include "Base.h"
#include "HandlerOne.h"
#include "HandlerTwo.h"
int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    Base* base = new Base();
    base->addBase(new HandlerOne);
    base->addBase(new HandlerTwo);
    base->addBase(new HandlerOne);
    base->handler(10);
    return 0;
}

