//
//  Base.h
//  ChainOfResponsibility
//
//  Created by Tri Truong Mai Thanh on 12/27/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __ChainOfResponsibility__Base__
#define __ChainOfResponsibility__Base__

#include <iostream>
class Base {
public:
//    Constructor Destructor
    Base();
    virtual ~Base();
//    Methods
    void setBase (Base* base);
    void addBase (Base* base);
//    virtual Method
    virtual void handler (int n);
protected:
    Base* _base;
};
#endif /* defined(__ChainOfResponsibility__Base__) */
