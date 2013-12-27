//
//  main.cpp
//  Command
//
//  Created by Tri Truong Mai Thanh on 12/27/13.
//  Copyright (c) 2013 Tri Truong Mai Thanh. All rights reserved.
//

#include <iostream>
#include "Queue.h"
#include "Command.h"
#include "Giant.h"
int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    Queue<Command> queue;
    Giant* giant = new Giant();
    Command* input[6] = {
        new Command(giant,&Giant::fee),
        new Command(giant,&Giant::phi),
        new Command(giant,&Giant::fee),
        new Command(giant,&Giant::pheaux),
        new Command(giant,&Giant::pheaux),
        new Command(giant,&Giant::phi),
    };
    for (int i = 0; i < 6; i++) {
        queue.enque(input[i]);
    }
    for (int i = 0; i < 6; i++) {
        (queue.deque())->execute();
    }
    return 0;
}

