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
    Node_p head = (Node_p)malloc(sizeof(struct Node));
};

/*
    Creates a new Caravan
*/
Caravan new_caravan()
{
    Caravan caravan =(Caravan)malloc(sizeof(struct CaravanImplementation));
    caravan->length = 0;
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
        delete_animal(current->animal);
        current = current->next;
    }
    sfree(caravan);
}

/*
adds a pack animal to a given caravan
*/
void add_pack_animal(Caravan caravan, PackAnimal animal)
{
    if(animal != 0){
    Node_p current = caravan->head;
    Node_p node_to_add = (Node_p)malloc(sizeof(struct Node));
    node_to_add -> animal = animal;
    if(caravan->head == 0){
        caravan->head = node_to_add;
    }else{
        while(current->next != 0){
            current = current->next;
        }
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
        int counter = 0; //counter so i can check at the end if the counter is smaller than the length of the list
                        //so i can see if the animal was found
        while(current->next != 0 && current->next->animal != animal){
            counter++;
            current = current->next;
        }
        if(current->next->animal == animal && counter<caravan->length){
            Node_p tmp = current->next;
            current->next = current->next->next;
            sfree(tmp);
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
