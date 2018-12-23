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

struct CaravanImplementation{
    int length;
    bool is_used = false;
    PackAnimal animal;
};

struct CaravanImplementation c1;
struct CaravanImplementation c2;
struct CaravanImplementation c3;
struct CaravanImplementation c4;
struct CaravanImplementation c5;

static Caravan caravans[] = {&c1, &c2, &c3, &c4, &c5};


Caravan new_caravan()
{
    
    for(int i = 0; i < 5; i++)
    {
        if(!caravans[i]->is_used){
            return caravans[i];
        }
    }
    return 0;
}

int get_length(Caravan caravan)
{
    return caravan->length;
}

/*
 *Deletes a caravan out of an array
*/
void delete_caravan(Caravan caravan)
{
    
    
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
