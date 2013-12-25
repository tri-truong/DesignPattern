//
//  Dynamic.h
//  FactoryMethod
//
//  Created by Tri Truong Mai Thanh on 12/25/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __FactoryMethod__Dynamic__
#define __FactoryMethod__Dynamic__

#include <iostream>
#include "GameObject.h"

class Dynamic : public GameObject{
public:
    Dynamic();
    virtual ~Dynamic ();
    virtual void render ();
};
#endif /* defined(__FactoryMethod__Dynamic__) */
