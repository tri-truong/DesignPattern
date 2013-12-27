//
//  Leaf.h
//  Composite
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __Composite__Leaf__
#define __Composite__Leaf__

#include <iostream>
#include "Component.h"
class Leaf : public Component{
public:
//    create function
    static Leaf* create (int value);
//    Constructor + Destructor
    Leaf();
    virtual ~Leaf();
//    method
    void setValue (int value);
    int getValue ();
//    virtual method
    virtual void render ();
protected:
    int _value;
};
#endif /* defined(__Composite__Leaf__) */
