README.txt

Memory Allocation in C
=======================

This document provides a brief overview of the three main memory allocation functions in C: malloc, calloc, and realloc.

1. malloc
----------
Function: void *malloc(size_t size);
Description: Allocates a block of memory of the specified size (in bytes). The content of the newly allocated memory is not initialized, meaning it contains garbage values. Returns a pointer to the allocated memory, or NULL if the allocation fails.
Example:
int *ptr;
ptr = (int *)malloc(10 * sizeof(int));
if (ptr == NULL) {
    // Handle memory allocation failure
}

2. calloc
----------
Function: void *calloc(size_t num, size_t size);
Description: Allocates memory for an array of num elements, each of them size bytes long. Initializes all bytes in the allocated memory to zero. Returns a pointer to the allocated memory, or NULL if the allocation fails.
Example:
int *ptr;
ptr = (int *)calloc(10, sizeof(int));
if (ptr == NULL) {
    // Handle memory allocation failure
}

3. realloc
-----------
Function: void *realloc(void *ptr, size_t size);
Description: Changes the size of the memory block pointed to by ptr to the size specified. The contents of the memory block are unchanged up to the minimum of the old and new sizes. If the new size is larger, the value of the newly allocated portion is indeterminate. If ptr is NULL, then realloc behaves like malloc for the specified size. If the size is zero and ptr is not NULL, then the call is equivalent to free(ptr). Returns a pointer to the newly allocated memory, or NULL if the allocation fails. If the allocation fails, the original block remains unchanged.
Example:
int *ptr;
ptr = (int *)malloc(10 * sizeof(int));
if (ptr == NULL) {
    // Handle memory allocation failure
}
// Resize the allocated memory
ptr = (int *)realloc(ptr, 20 * sizeof(int));
if (ptr == NULL) {
    // Handle memory allocation failure
}

Important Notes:
----------------
Always check the return value of malloc, calloc, and realloc to ensure that memory allocation was successful before using the allocated memory. Remember to free allocated memory using the free function to avoid memory leaks.
Example of freeing memory:
free(ptr);

This is a simple guide to using dynamic memory allocation functions in C. For more detailed information, refer to the respective man pages or a C programming reference book.
