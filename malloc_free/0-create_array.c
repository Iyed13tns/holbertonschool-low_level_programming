#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: The size of the array
 * @c: The char to fill in the array
 *
 * Return: The array filled
 */
char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;
    }
    
    char *array = malloc(size * sizeof(char));
    if (array == NULL) {
        return NULL;
    }
    
    unsigned int i;
    for (i = 0; i < size; i++) {
        array[i] = c;
    }
    
    return array;
}

