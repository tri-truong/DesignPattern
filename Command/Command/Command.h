//
//  Command.h
//  Command
//
//  Created by Tri Truong Mai Thanh on 12/27/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#ifndef __Command__Command__
#define __Command__Command__

#include <iostream>
#include "Giant.h"
class Command {
public:
    typedef void (Giant:: *Action)();
    Command(Giant* object, Action method);
    void execute ();
private:
    Giant* _object;
    Action _method;
};
#endif /* defined(__Command__Command__) */
