//
//  Static.h
//  Prototype
//
//  Created by Tri Truong Mai Thanh on 12/26/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __Prototype__Static__
#define __Prototype__Static__

#include <iostream>
#include "Object.h"
class Static : public Object {
public:
    Static();
    virtual ~Static();
    
    virtual Object* clone ();
    virtual void render ();
};
#endif /* defined(__Prototype__Static__) */
