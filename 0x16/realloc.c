#include "shell.h"

/**
 * fill_memory - fills a memory area with a constant byte value
 * @memory_area: the pointer to the memory area
 * @byte_value: the byte value to fill *memory_area with
 * @num_bytes: the number of bytes to be filled
 *
 * Return: (memory_area) a pointer to the memory area
 */
char *fill_memory(char *memory_area, char byte_value, unsigned int num_bytes)
{
    for (unsigned int i = 0; i < num_bytes; i++) {
        memory_area[i] = byte_value;
    }
    return memory_area;
}

/**
 * free_string_array - frees an array of strings
 * @string_array: the array of strings
 */
void free_string_array(char **string_array)
{
    char **temp = string_array;

    if (!string_array) {
        return;
    }
    while (*string_array) {
        free(*string_array++);
    }
    free(temp);
}

/**
 * realloc_memory - reallocates a block of memory
 * @previous_memory: pointer to the previously allocated block
 * @previous_size: byte size of the previous block
 * @new_size: byte size of the new block
 *
 * Return: pointer to the newly allocated block
 */
void *realloc_memory(void *previous_memory, unsigned int previous_size, unsigned int new_size)
{
    char *new_memory;

    if (!previous_memory) {
        return malloc(new_size);
    }
    if (!new_size) {
        free(previous_memory);
        return NULL;
    }
    if (new_size == previous_size) {
        return previous_memory;
   }

    new_memory = malloc(new_size);
    if (!new_memory) {
        return NULL;
    }

    unsigned int copy_size = previous_size < new_size ? previous_size : new_size;
    for (unsigned int i = 0; i < copy_size; i++) {
        new_memory[i] = ((char *)previous_memory)[i];
    }

    free(previous_memory);
    return new_memory;
}
