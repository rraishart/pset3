/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 * 
 * Edited by Ryan Raishart on 7/27/2016
 * rraishart@gmail.com
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

#include <stdio.h>

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if (n < 0)
    {
        return false;
    }
    
    /** Find initial mid point
     */
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    
    while (values[mid] != value)
    {
        
        if (values[mid] < value)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        if (start > end)
        {
            return false;
        }
        mid = (start + end) / 2;
    }
    
    return true;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    for (int i = 1; i < n ; i++)
    {
        int element = values[i];
        int j = i;
        while (j > 0 && values[j - 1] > element)
        {
            values[j] = values[j - 1];
            j = j - 1;
        }
        values[j] = element;
      
    }
    return;
}