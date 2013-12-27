//
//  Command.cpp
//  Command
//
//  Created by Tri Truong Mai Thanh on 12/27/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include "Command.h"
Command::Command(Giant* object, Action method){
    _object = object;
    _method = method;
}
void Command::execute (){
    (_object->*_method)();
}