#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string anwser = get_string("Whats your name? ");

    printf("Hello, %s\n", anwser);
}