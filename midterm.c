#include<stdio.h>
int look_up_name(struct person, int);

// A
struct person{
    int ID;
    char first[10];
    char last[10];
    struct person *next;
};

// B
static struct person data[]={
    {0,"Aki", "Okada", &data[0]},
    {1, "Gaku", "Morita", &data[1]},
    {2, "Ikuko", "Yamada", &data[2]}
};

int main(){
    look_up_name(&data[0], 0);
}

int look_up_name(struct person *ptr, int ID){
    while(ptr != NULL){
        if(ptr -> ID == ID){
            printf("%s %s", ptr -> first, ptr -> last);
            return 0;
        }
        ptr = ptr-> next;
    }
  
    printf("No such ID in database");
    return 0;
 }
    





