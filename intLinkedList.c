#include <stdio.h>
#include <stdlib.h>
#include "intLinkedList.h"

//codice pushato alle 14:55 
//in laboratorio per una svista, il push non è stato effetuato
//a quanto pare, la preghierina non ha funzionato

/*
 * Restituisce la lunghezza della lista.
 */
int size(intLinkedList list) {
    // TODO Implementa il corpo della funzione
    
    int r=0;
    while (list->next!=NULL){
        
        list=list->next;
        r++;
    }
    return r;
}


/*
 * Aggiunge un nuovo elemento all'inizio della lista.
 * Restituisce il puntatore aggiornato al primo elemento.
 * Restituisce NULL in caso di errore.
 */
intLinkedList insertAtBeginning(intLinkedList list, int newKey) {
    // TODO Implementa il corpo della funzione

     intLLElement * temp;   
     temp=(intLLElement *)malloc(sizeof(intLLElement)); 
     
     
    if(temp!=NULL){
          
       temp->next = list;
       temp->key=newKey;
       list=temp;
    }
    else 
        list=NULL;
    return list;
}


/*
 * Stampa tutti gli elementi della lista a schermo, in un'unica linea, 
 * separandoli con punto e virgola e uno spazio.
 * 
 * Esempio:
 * 1; -2; 3; 4;  
 * 
 */
void printList(intLinkedList list) {
    // TODO Implementa il corpo della funzione
    //printf("debug");
    int i;   
    for (i=0;list->next!=NULL;i++){
        printf("%d ;",list->key);
        list=list->next;
    } 
}
/*
 * Svuota la lista.
 * Restituisce sempre NULL.
 */
intLinkedList empty(intLinkedList list) {
    
     intLinkedList temp=list;
     
     while(list!=NULL){
        list=list->next;
        free(temp);
        temp=list;
    }

     return NULL;
 
}