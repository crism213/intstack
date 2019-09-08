/*
 * A simple Integer Stack. It is the corrected version
 * of https://www.studytonight.com/data-structures/stack-data-structure
 */

#ifndef INTSTACK_INTSTACK_H
#define INTSTACK_INTSTACK_H

#define STACKSIZE 10

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

    int top;
    int stack[STACKSIZE];

};


#endif //INTSTACK_INTSTACK_H
