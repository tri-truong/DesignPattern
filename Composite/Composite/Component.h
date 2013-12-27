//
//  Component.h
//  Composite
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __Composite__Component__
#define __Composite__Component__

#include <iostream>
using namespace std;
class Component {
public:
//    Create Func
    static Component* create ();
//    Constructor
    Component();
    virtual ~Component();
//    virtual method
    virtual void render ();
};
#endif /* defined(__Composite__Component__) */
