#include <cs50.h>
#include <stdio.h>

#define SIZE 8

bool search(int needle, int haystack[], int size)
{
    // iterative implementation
    int start = 0;
    int end = size - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        // TODO: -- Handle 3 cases: the value of the needle being smaller than, equal to, and larger than the value of the middle element in the array
    }
    return false;
}

int main(void)
{
    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108 };
    printf("> ");
    int n = get_int();
    if (search(n, numbers, SIZE))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}