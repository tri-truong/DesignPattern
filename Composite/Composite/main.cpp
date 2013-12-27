//
//  main.cpp
//  Composite
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include <iostream>
#include "Composite.h"
#include "Component.h"
#include "Leaf.h"
int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    Composite* composite = Composite::create();
    for (int i = 0 ; i < 5; i++) {
        composite->addComponent(Component::create());
    }
    for (int i = 0 ; i < 10; i++) {
        composite->addComponent(Leaf::create(i));
    }
    composite->render();
    return 0;
}

