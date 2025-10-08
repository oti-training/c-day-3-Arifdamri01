/*
 * Day 3 Exercise 1: Basic Pointer Operations with Float
 *
 * Implement the pointer operations as described in the tutorial Step 1.
 * Create a program that:
 * 1. Declares a float variable temp = 25.5f
 * 2. Creates a pointer to it
 * 3. Prints the original value and address
 * 4. Changes the value via the pointer to 30.0f
 * 5. Prints the new value
 *
 * Compile: gcc -Wall -std=c99 -o basic basic.c
 * Run: ./basic
 * Expected output matches the tutorial.
 */

#include <stdio.h>

int main() {
    
    printf("Exercise 1: Basic Float Pointer\n");
    float x = 25.5f;
    float *p = &x;
    
    printf ("Value of x: %.1f\n", x);
    printf ("Address of x: %p\n", (void*)&x);
    printf ("Value of p (address): %p\n", (void*)p);
    printf ("Value at p (*p): %.1f\n", *p);
    *p = 30.0f;
    printf ("New value of x: %.1f\n", x);
    
    
    return 0;
}

