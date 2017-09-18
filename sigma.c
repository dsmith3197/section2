#include <cs50.h>
#include <stdio.h>

int sigma(int n);

int main (void)
{
    // take in array size and elements from user
    printf("please enter an integer value: ");
    int n = get_int();

    // print the result
    printf("The result of sigma(%i) is %i", n, sigma(n));
}

// TODO: implement sigman recursively
int sigma(int n)
{
    // TODO: base case

    // TODO: recursive case
}