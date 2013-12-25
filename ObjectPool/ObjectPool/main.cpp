//
//  main.cpp
//  ObjectPool
//
//  Created by Tri Truong Mai Thanh on 12/25/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include <iostream>
#include "ObjectPool.h"
int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    ObjectPool* pool = new ObjectPool();
    Object* object1 = pool->checkOut();
    Object* object2 = pool->checkOut();
    
    pool->checkIn(object1);
    Object* object3 = pool->checkOut();
    return 0;
}

