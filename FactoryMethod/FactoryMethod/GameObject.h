//
//  GameObject.h
//  FactoryMethod
//
//  Created by Tri Truong Mai Thanh on 12/25/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __FactoryMethod__GameObject__
#define __FactoryMethod__GameObject__

#include <iostream>
using namespace std;
class GameObject {
public:
    static GameObject* create(int type);
    GameObject  ();
    ~GameObject ();
    
    virtual void render ();
};
#endif /* defined(__FactoryMethod__GameObject__) */
