//
//  Factory.cpp
//  Prototype
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "Factory.h"
Object* Factory::create(int type){
    return _object[type]->clone();
}
Object* Factory::_object[3] = {new Object(),new Dynamic(),new Static()};