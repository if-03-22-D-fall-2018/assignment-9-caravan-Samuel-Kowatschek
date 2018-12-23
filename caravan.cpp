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

#define COUNT_CARAVANS 5

/*
    Basically our Node
*/
struct CaravanImplementation{
    int length;
    PackAnimal animal;
    Caravan next;
};

Caravan head;

/*
    Creates a new Caravan
*/
Caravan new_caravan()
{
    head = 0;
    return head;
}

int get_length(Caravan caravan)
{
    return caravan->length;
}

/*
 *Deletes a caravan 
*/
void delete_caravan(Caravan caravan)
{
    head = 0;
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
}

int get_caravan_load(Caravan caravan)
{
    return 0;
}

void unload(Caravan caravan)
{
}

int get_caravan_speed(Caravan caravan)
{
    return 0;
}

void optimize_load(Caravan caravan){

}
