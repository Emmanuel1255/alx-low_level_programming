#!/bin/bash
echo "#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf(\"Hello, Holberton\\n\");
    return (0);
}" > $CFILE

cpp $CFILE > c
wc -l c
