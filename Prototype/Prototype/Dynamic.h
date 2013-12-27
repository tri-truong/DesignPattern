//
//  Dynamic.h
//  Prototype
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __Prototype__Dynamic__
#define __Prototype__Dynamic__

#include <iostream>
#include "Object.h"

class Dynamic : public Object{
public:
    Dynamic();
    virtual ~Dynamic();
    
    virtual Object* clone ();
    virtual void render ();
};
#endif /* defined(__Prototype__Dynamic__) */
