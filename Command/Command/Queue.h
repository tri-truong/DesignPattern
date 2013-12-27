//
//  Queue.h
//  Command
//
//  Created by Tri Truong Mai Thanh on 12/27/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __Command__Queue__
#define __Command__Queue__

#include <iostream>
template <typename T> class Queue
{
public:
    Queue()
    {
        _add = _remove = 0;
    }
    void enque(T *c)
    {
        _array[_add] = c;
        _add = (_add + 1) % SIZE;
    }
    T *deque()
    {
        int temp = _remove;
        _remove = (_remove + 1) % SIZE;
        return _array[temp];
    }
private:
    enum
    {
        SIZE = 8
    };
    T *_array[SIZE];
    int _add, _remove;
};
#endif /* defined(__Command__Queue__) */
