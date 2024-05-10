#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Global variables (should be in a database!) -------- */

struct flight {
    char flight_number[7];
    char departure_time[5];
    /* char destination[21]; */
    char *destination;
   /* char passengers[5][41]; */
   /*char *passengers[5]; */
   char **passengers;
    int  num_passengers;
    int current_max_passenger;
};

/* struct flight flights[5]; */
struct flight *flights;
int current_max_flights = 0;

#define BLOCK_INCREMENT_SIZE 5
int num_flight = 0;

/* a utility function to read a line including whitespaces */
/* but excludes newline characters */

void scanline(char* str, int max_size) {

    int i = 0;
    int ch;

    fflush(stdin);

    do {
        ch = getc(stdin);

        if (i < max_size && ch != '\n' && ch != EOF) {
            str[i] = ch;
            i++;
        }
    
    } while (ch != '\n' && ch != EOF);

    str[i] = 0;

}

char* scanlinedyn() {

    #define INITIAL_BUFFER_SIZE 20
    #define BUFFER_INCREMENT 10
#define BLOCK_INCREMENT_SIZE 5
    int current_buffer_size = 0;
    char* str;
    int i = 0;
    int ch;

    /* TODO: allocate initial memory */
    str = malloc(INITIAL_BUFFER_SIZE);
    if(!str) 
    {
        printf("\nmalloc in scanlinedyn faild ....exiting\n");

    }

    current_buffer_size = INITIAL_BUFFER_SIZE;

    fflush(stdin);

    do {
        ch = getc(stdin);

        if (ch != '\n' && ch != EOF) {
            if (i == current_buffer_size) {

                printf("i = %i, current_buffer_size = %i\n", i, current_buffer_size);

                /* TODO: reallocate memory */
                str = realloc(str, current_buffer_size + BUFFER_INCREMENT + 1);
                if(!str) 
    {
        printf("\nrealloc in scanlinedyn faild ....exiting\n");

    }
                
                current_buffer_size += BUFFER_INCREMENT;
                printf("current_buffer_size = %i\n", current_buffer_size);
            }

            str[i] = ch;
            i++;
        }
    
    } while (ch != '\n' && ch != EOF);

    str[i] = 0;
    
    return str;
}
/* allocate the memory for the initial block of flights */
void initializeFlightBlock()
{
flights = calloc(sizeof(struct flight), BLOCK_INCREMENT_SIZE);
/* error chacking */ 
if (!flights)
{
   printf("\nalloc in initializeFlightBlock failed... exiting\n");
exit(1);
}

else
{
    current_max_flights += BLOCK_INCREMENT_SIZE;
    printf("\nFlight block initialized to %i ", current_max_flights);
}

}
 


/* submenu to add a passenger-------------------------- */

void add_passenger(int flight_index) {
    #define BLOCK_INCREMENT_SIZE 5
    /* char new_passenger_name[41]; */

    int new_passenger_index;

    /* do a range check to be safe */

    if (flight_index < 0 || flight_index >= num_flight) {
        return;
    }

    puts("\n***** SUBMENU: ADD PASSENGER *****");

    printf("ENTER PASSENGER'S NAME: ");
    /* scanline(new_passenger_name, 40); */

    new_passenger_index = flights[flight_index].num_passengers;

    /* do we need t allocate a new block of memory for more passeges */ 
if (new_passenger_index == flights[flight_index].current_max_passenger)

{
flights[flight_index].passengers =  realloc(flights[flight_index].passengers,
sizeof(char *) * (flights[flight_index].current_max_passenger + BLOCK_INCREMENT_SIZE));

/* check to see if it succeeded */

if (flights[flight_index].passengers)
{
flights[flight_index].current_max_passenger += BLOCK_INCREMENT_SIZE ;
printf("\nPassnger block expanded. New size = %i\n", flights[flight_index].current_max_passenger);
}
else 
{
printf("\nrealloc in add_passenger failed... exiting\n");
exit(1);
}

}

    /* strncpy(flights[flight_index].passengers[new_passenger_index], new_passenger_name, 40);*/
    flights[flight_index].passengers[new_passenger_index] = scanlinedyn();
    flights[flight_index].num_passengers ++;
    fflush(stdin);
 
    return;

}

/* submenu to add a flight ---------------------------- */

void add_flight() {

    char flight_number[7];
    char departure_time[5];
    /* char destination[21]; */
    char *destination;

    puts("\n********** SUBMENU: ADD FLIGHT **********");

    printf("ENTER FLIGHT NUMBER: (XXnnnn): ");
    scanf("%s", flight_number);
    
    printf("ENTER DEPARTURE TIME (hhmm): ");
    scanf("%s", departure_time);
    
    printf("ENTER DESTINATION: ");
    /* scanline(destination, 20); */
    destination = scanlinedyn();

    /* is the flight block full */
    if (num_flight >= current_max_flights)
    {
        flights = realloc(flights, sizeof(struct flight) * (current_max_flights+ BLOCK_INCREMENT_SIZE));
        /* error checking */
        if(!flights)
        {
            printf("\nrealloc in add_flight failed... exiting\n");
            exit(1);

        }
        else 
        {
        current_max_flights += BLOCK_INCREMENT_SIZE;
        printf("\nFlight block expanded. New size = %i", current_max_flights);
        }

    }

    strncpy(flights[num_flight].flight_number, flight_number, 6);
    strncpy(flights[num_flight].departure_time, departure_time, 4);

    /* strncpy(flights[num_flight].destination, destination, 20); */

    flights[num_flight].destination = destination ;

    flights[num_flight].num_passengers = 0;

    num_flight++;

    printf("%s to %s added!\n", flight_number, destination);
    return;
}

/* submenu to show details of a flight------------------ */

void flight_detail(int flight_index) {

    char input[2];
    int i;

    /* do a range check to be safe */

    if (flight_index < 0 || flight_index >= num_flight) {
        return;
    }

    /* loop until X is entered */

    while(strcmp(input, "X") != 0) {

        printf("\n********** SUBMENU: FLIGHT %s **********\n", flights[flight_index].flight_number);
        printf("DEPARTURE TIME: %s\n", flights[flight_index].departure_time);
        printf("DESTINATION: %s\n\n", flights[flight_index].destination);

        puts("***** PASSENGERS *****");

        /* show all passengers or a message */

        if (flights[flight_index].num_passengers == 0) {
            printf("\n-- No passengers yet, enter A to add --\n\n");
        }
        else {
            for (i = 0; i < flights[flight_index].num_passengers; i++) {
                printf("%i. %s\n",
                i + 1,
                flights[flight_index].passengers[i]);
            }
        }

        puts("\nA = ADD PASSENGER");
        puts("X = GO BACK");
        printf("ENTER OPTION: ");

        scanf("%s", input);
        
        if (strcmp(input, "A") == 0) {

            /* is there room for another passenger? */

          /*  if (flights[flight_index].num_passengers >= 5) {
                printf("*** THIS FLIGHT IS FULL ***");
            }
            else {*/
                add_passenger(flight_index);
            /*}  */

            continue;
        }

        if (strcmp(input, "X") != 0) {
            printf("\n** %s IS NOT A INVALID OPTION **\n", input);
        }
    }

}

/* main menu to show the flight schedule of the day ---- */

void flight_schedule(void) {

    char input[2];
    int i;
    char item_number;

    /* loop until X is entered */

    while(strcmp(input, "X") != 0) {
        puts("\n********** TODAY'S FLIGHT SCHEDULE **********");

        /* show all existing flights or a message */

        if (num_flight == 0) {
            printf("\n-- No flights scheduled yet, enter A to add --\n\n");
        }
        else {
            for (i = 0; i < num_flight; i++) {
                printf("%i. %s %s %s\n",
                i + 1,
                flights[i].flight_number,
                flights[i].departure_time,
                flights[i].destination);
            }

            puts("\nITEM NUMBER = FLIGHT DETAILS");
        }

        puts("A = ADD FLIGHT");
        puts("X = EXIT");
        printf("ENTER OPTION: ");
        scanf("%s", input);

        /* See if "A" is entered */

        if (strcmp(input, "A") == 0) {

            /* is there still room for more flights? */
          /*  if (num_flight >= 5) {
                printf("*** MAXIMUM DAILY FLIGHTS REACHED ***");
            }
            else { */
                add_flight();
           /* } */

            continue;
        }

        /* See if a valid item number is entered */
        item_number = atoi(input);

        if (item_number > 0 && item_number <= num_flight) {
            flight_detail(item_number - 1);
            continue;
        }

        if (strcmp(input, "X") != 0) {
            printf("\n** %s IS NOT A INVALID OPTION **\n", input);
        }

    }

    return;

}

/* bootstrap of the app */

int main(void) {

    /*
    char* str = scanlinedyn();
    printf("You entered >>>%s<<<", str);
    free(str);
    */

    initializeFlightBlock();
    flight_schedule();
    printf("\nGoodbye!\n\n");
    return 0;

}

