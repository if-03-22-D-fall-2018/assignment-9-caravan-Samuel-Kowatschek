/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "caravan.h"

struct CaravanImplementation{
    int length;
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
        if(caravans[i]->length==0){
            return caravans[i];
        }
    }
}

int get_length(Caravan caravan)
{
    return caravan->length;
}

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
}

void unload(Caravan caravan)
{
}

int get_caravan_speed(Caravan caravan)
{
}
