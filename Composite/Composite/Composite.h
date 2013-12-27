//
//  Composite.h
//  Composite
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __Composite__Composite__
#define __Composite__Composite__

#include <iostream>
#include <vector>
#include "Component.h"
using namespace std;
class Composite : public Component{
public:
//    Create Func
    static Composite* create ();
//    Constructor Destructor
    Composite();
    virtual ~Composite();
//    Method
    void addComponent (Component* component);
    void removeComponent (Component* component);
//    Virtual
    virtual void render ();
protected:
    vector<Component*>* _components;
};
#endif /* defined(__Composite__Composite__) */
