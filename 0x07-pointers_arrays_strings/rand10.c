#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int generate_random_number() {
    return ((float)rand() / (float)RAND_MAX) * 50 + 1;
}

void print_all(int numbers[], int how_many) {

    int i;
    
    for (i = 0; i < how_many; i++) {
        printf("%i ", numbers[i]);
    }

}

int main() {

    #define INCREMENT_SIZE 5

    int current_size = 10;
    int i, how_many_more;
    char input[5]; 

    /*
        1.
        Change the fixed size array to a pointer
        Then allocate memory for 10 numbers
    */
    int *numbers;
    numbers = calloc (sizeof(int), current_size);

    if (!numbers)
    {
        printf("\ncalloc failed... exiting\n");
        exit(1);
    }

    /* randomize */
    srand(time(NULL));
    i = rand(); /* waste one */

    for (i = 0; i < 10; i++) {
        numbers[i] = generate_random_number();
    }

    print_all(numbers, current_size);   

    /* ask how many more numbers should be generated */
    printf("\nHow many additional numbers? ");
    scanf("%s", input);

    how_many_more = atoi(input);

    if (how_many_more > 0 && how_many_more < 50) {

        /* 
            2.
            Reallocate the memory to accomondate the additional numbers
            And generate the additional numbers
        */
       numbers = realloc(numbers, sizeof(int) * (current_size  + how_many_more ));
       
    if (!numbers)
    {
        printf("\nrealloc failed... exiting\n");
        exit(1);
    }
     for (i = current_size; i < current_size + how_many_more; i++)
     {
        numbers[i] = generate_random_number();
     }
      print_all(numbers, current_size + how_many_more);


    }

    printf("\nGoodbye!\n");

    /*
        3.
        Release all the memory that you allocated/reallocated
    */
   free(numbers);

    return 0;
}
