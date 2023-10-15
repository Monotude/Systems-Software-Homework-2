/*
Systems Software Homework 2
Made by: Tyler Knoop, Brady Napier, and Shaun Gorllapati
10/20/2023
*/

#include "lexer.h"
#include "utilities.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        bail_with_error("One file name needed.");
    }

    else
    {
        lexer_init(argv[1]);
        lexer_output();
    }
}