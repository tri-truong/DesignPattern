//
//  Factory.h
//  Prototype
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __Prototype__Factory__
#define __Prototype__Factory__

#include <iostream>
#include "Object.h"
#include "Static.h"
#include "Dynamic.h"
class Factory {
public:
    static Object* create(int type);
protected:
    static Object* _object[3];
};
#endif /* defined(__Prototype__Factory__) */
