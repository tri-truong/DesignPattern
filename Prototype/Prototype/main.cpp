//
//  main.cpp
//  Prototype
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include <iostream>
#include "Factory.h"
int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    for (int i = 0; i < 30; i++) {
        Object* object = Factory::create(i%3);
        object->render();
    }
    return 0;
}

