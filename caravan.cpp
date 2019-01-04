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
#include <stdlib.h>
#include "caravan.h"
#include "general.h"

#define COUNT_CARAVANS 5

typedef struct Node* Node_p;

struct Node
{
    PackAnimal animal;
    struct Node* next;
};



struct CaravanImplementation{
    int length;
    Node_p head; 
};

/*
    Creates a new Caravan
*/
Caravan new_caravan()
{
    Caravan caravan =(Caravan)malloc(sizeof(struct CaravanImplementation));
    caravan->length = 0;
    // BAU: initialized caravan->head to clearly determine empty list.
    caravan->head = 0;
    return caravan;
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
    Node_p current = caravan->head;
    while(current != 0) {
      // BAU: removed delete_animal, since this does not delete the Node but
      // more deletes the animal itself.
        // delete_animal(current->animal);
        // BAU: inserted code to delete the node.
        Node_p to_be_deleted = current;
        current = current->next;
        sfree(to_be_deleted);
    }
    sfree(caravan);
}

/*
adds a pack animal to a given caravan
*/
void add_pack_animal(Caravan caravan, PackAnimal animal)
{
    if(animal != 0) {
      Node_p current = caravan->head;
      Node_p node_to_add = (Node_p)malloc(sizeof(struct Node));
      node_to_add -> animal = animal;
      node_to_add->next = 0;

        if(caravan->head == 0)
        {
            caravan->head = node_to_add;
        }
        else
        {
            while(current->next != 0)
            {
              if(current->animal == animal) return;
              current = current->next;
            }
            if(current->animal == animal) return;
            current->next = node_to_add;
        } 
        add_to_caravan(animal, caravan);
        caravan->length++;
    }
}

/*
removes a pack animal from a caravan
*/
void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
    if(animal!=0){
        Node_p current = caravan->head;
        
        while(current != 0 && current->animal != animal)
        {
            current = current->next;
        }
        if(current != 0 && current->animal == animal)
        {
            delete_animal(current->animal);
            remove_from_caravan(animal, caravan);
            caravan->length--;
        }
    }
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
