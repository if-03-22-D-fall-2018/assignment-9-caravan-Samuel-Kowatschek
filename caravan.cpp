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
    Caravan current = head; //the current caravan
    while (current != 0)    //if the current caravan equals 0 the loop should end (that would mean that there are no more list elements)
    {
        if(caravan == head){    //if the given caravan equals the head, the head should be free'd
            
            free(head);
            return;             //also here the loop and the whole function should end, because we already deleted the caravan
        }
        else if(caravan == current->next) { //if the given caravan equals the next caravan after current, 
            current -> next = caravan -> next;  //the caravan after current should be caravan-> next. with this we skip the caravan 
            free(caravan);                      //and are able to clean if afterways
            return;
        }
       current = current->next;         //the current caravan is getting updated
    }
    free(current);              
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
