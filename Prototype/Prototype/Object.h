//
//  Object.h
//  Prototype
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __Prototype__Object__
#define __Prototype__Object__

#include <iostream>
using namespace std;
class Object {
public:
//    Constructor - Destructor
    Object();
    virtual ~Object();
//    method
    virtual Object* clone ();
    virtual void render ();
};
#endif /* defined(__Prototype__Object__) */
