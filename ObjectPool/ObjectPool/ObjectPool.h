//
//  ObjectPool.h
//  ObjectPool
//
//  Created by Tri Truong Mai Thanh on 12/25/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __ObjectPool__ObjectPool__
#define __ObjectPool__ObjectPool__

#include <iostream>
#include <map>
#include <time.h>
#include "Object.h"

using namespace std;
typedef map<Object*, time_t> MapObject;
typedef pair<Object*, time_t> PairObject;
class ObjectPool {
public:
//    Constructor Destructor
    ObjectPool();
    virtual ~ObjectPool ();
//    Method
    Object* checkOut ();
    void checkIn (Object* object);
    void expire (Object* object);
    bool validate (Object* object);
protected:
    MapObject* unlock;
    MapObject* lock;
};
#endif /* defined(__ObjectPool__ObjectPool__) */
