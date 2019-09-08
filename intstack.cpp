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

    return 0;
}

int Intstack::peak() {

    return 0;
}

bool Intstack::isEmpty() {

    return true;
}

void Intstack::dumpStack(){

    for(int i=0; i<STACKSIZE; i++){
        std::cout << stack[i] << std::endl;
    }
}
