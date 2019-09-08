/*
 * A simple Integer Stack. It is the corrected version
 * of https://www.studytonight.com/data-structures/stack-data-structure
 */

#ifndef INTSTACK_INTSTACK_H
#define INTSTACK_INTSTACK_H

#define STACKSIZE 10

//included only for programmer debug
#include <iostream>

class Intstack {

public:

    Intstack();
    ~Intstack();

    int pop();
    int peek();
    bool push(int x);
    bool isEmpty();

    // this is a programmer debug routine
    // DO NOT LEAVE THIS IN PRODUCTION CODE
    void dumpStack();

private:

    int top;  //do not initialize here, that's what the constructor is for
    int stack[STACKSIZE];

};


#endif //INTSTACK_INTSTACK_H
