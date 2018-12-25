/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: 2DHIF
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Kowatschek Samuel
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "caravan.h"
#include <cstdlib>
#include <stdlib.h>

#define COUNT_CARAVANS 5

/*
Basically our Node
*/
struct CaravanImplementation{
    int length;
    PackAnimal animal;
    struct CaravanImplementation* next;
};

Caravan head = (Caravan)malloc(sizeof(struct CaravanImplementation));

/*
Creates a new Caravan
*/
Caravan new_caravan()
{
    head -> animal = 0;
    head -> next = 0;
    head -> length = 0;
    return head;
}

/*
Returns the length of a caravan
*/
int get_length(Caravan caravan)
{
    return caravan -> length;
}

/*
Deletes a caravan 
*/
void delete_caravan(Caravan caravan)
{
    Caravan current = head;
    while (current != 0)
    {
        if(caravan == current->next) {
            current -> next = caravan -> next;
            free(caravan);
            return;
        }
       current = current->next;
    }
}

/*
adds a pack animal to a given caravan
*/
void add_pack_animal(Caravan caravan, PackAnimal animal)
{
}

/*
removes a pack animal from a caravan
*/
void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
}

/*
returns the load of a caravan given
*/
int get_caravan_load(Caravan caravan)
{
    return 0;
}

/*
unloads a caravan
*/

void unload(Caravan caravan)
{
}

/*
returns the speed of a caravan
*/
int get_caravan_speed(Caravan caravan)
{
    return 0;
}

/*
Verteilt die Last der Ballen so auf die einzelnen Tiere, 
dass die Geschwindigkeit der Karawane maximal ist.
*/
void optimize_load(Caravan caravan){

}
