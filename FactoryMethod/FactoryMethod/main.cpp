//
//  main.cpp
//  FactoryMethod
//
//  Created by Tri Truong Mai Thanh on 12/25/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include <iostream>
#include "GameObject.h"
int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    
    GameObject* obj = GameObject::create(2);
    obj->render();
    return 0;
}

