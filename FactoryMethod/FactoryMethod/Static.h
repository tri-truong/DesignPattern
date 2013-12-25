//
//  Static.h
//  FactoryMethod
//
//  Created by Tri Truong Mai Thanh on 12/25/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __FactoryMethod__Static__
#define __FactoryMethod__Static__

#include <iostream>
#include "GameObject.h"
class Static : public GameObject{
public:
    Static();
    virtual ~Static();
    virtual void render ();
};
#endif /* defined(__FactoryMethod__Static__) */
