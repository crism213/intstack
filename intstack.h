/*
 * A simple Integer Stack. It is the corrected version
 * of https://www.studytonight.com/data-structures/stack-data-structure
 */

#ifndef INTSTACK_INTSTACK_H
#define INTSTACK_INTSTACK_H

#define STACKSIZE 10

class Intstack {

public:

    Intstack();
    ~Intstack();

    int pop();
    int peak();
    bool push(int x);
    bool isEmpty();

private:

    int top;
    int stack[STACKSIZE];

};


#endif //INTSTACK_INTSTACK_H
