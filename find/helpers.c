/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    static int box[65536];
    int j, i;
    for (i = 0; i < n; i++)
    {
        j = values[i];
        box[j]++;
    }
    i = 0;
    
    for (j = 0; j < 65536; j++)
    {
        if (box[j] == 0)
        {
            continue;
        }
        else
        {
            values[i] = j;
            i++;
        }
    }
    return;
}
