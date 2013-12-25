//
//  ObjectPool.cpp
//  ObjectPool
//
//  Created by Tri Truong Mai Thanh on 12/25/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "ObjectPool.h"

//    Constructor Destructor
ObjectPool::ObjectPool(){
    lock = new MapObject();
    unlock = new MapObject();
}
ObjectPool::~ObjectPool(){
    delete lock;
    delete unlock;
}
//    Method
Object* ObjectPool::checkOut(){
    time_t now;
    time(&now);
    Object* result;
    if (unlock->size() > 0) {
        for (MapObject::iterator it = unlock->begin(); it != unlock->end();) {
            if (difftime(now, it->second) > 300000) {
                it = unlock->erase(it);
                expire(it->first);
                result = NULL;
            }else{
                if (validate(it->first)) {
                    unlock->erase(it->first);
                    lock->insert(PairObject(it->first,now));
                    result = it->first;
                    result->init();
                    return result;
                }else {
                    it = unlock->erase(it);
                    expire(it->first);
                    result = NULL;
                }
            }
        }
    }
    
    result = new Object();
    result->init();
    lock->insert(PairObject(result,now));
    return result;
}
void ObjectPool::checkIn(Object* object){
    time_t now;
    time(&now);
    lock->erase(object);
    unlock->insert(PairObject(object,now));
}
void ObjectPool::expire (Object* object){
        object->destroy();
}
bool ObjectPool::validate (Object* object){
    return object->isUse();
}