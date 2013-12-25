//
//  Object.h
//  ObjectPool
//
//  Created by Tri Truong Mai Thanh on 12/25/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __ObjectPool__Object__
#define __ObjectPool__Object__

#include <iostream>
using namespace std;
class Object {
public:
//   Constructor Destructor
    Object();
    virtual ~Object ();
//    method
    bool isUse ();
//    virtual method
    virtual void init ();
    virtual void destroy ();
protected:
    bool _isUse;
};
#endif /* defined(__ObjectPool__Object__) */
