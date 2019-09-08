/*
 * A simple Integer Stack. It is the corrected version
 * of https://www.studytonight.com/data-structures/stack-data-structure
 */

#include "intstack.h"

Intstack::Intstack() {
    /* the 'this' designation is optional. use it where there
     * is ambiguity or just to be complete and precise. here it
     * is used just to show it's usage.
     */
    this->top = -1;
}

Intstack::~Intstack() {
    /*
     * there is nothing to do to clean up this object, so this is blank
     */
}

bool Intstack::push(int i) {
    if(top >= STACKSIZE-1)  {
        return false;
    } else {
        stack[++top] = i;
        return true;
    }
}

int Intstack::pop() {
    int popval = 0;

    if(top < 0) {
        throw -1;
    } else {
        popval = stack[top--];
    }

    return popval;
}

int Intstack::peek() {
    int peekval = 0;

    if(top < 0) {
        throw -1;
    } else {
        peekval = stack[top];
    }

    return peekval;
}

bool Intstack::isEmpty() {
    if(top == -1){
        return true;
    } else {
        return false;
    }
}

void Intstack::dumpStack(){
    std::cout << "dumping whole stack" << std::endl;
    for(int i=0; i<=top; i++){
        std::cout << stack[i] << std::endl;
    }
    std::cout << std::endl;
}
