#include<string.h>
// vector implementation

SArray *sarry_new(int capacity){
    int true_capacity = Sarray_determine_capacity(capacity)
    SArray *arr = malloc(sizeof(SArry));
    check_address(arr);

    arr->size = 0;
    arr->capacity = true_capacity;
    arr->data = (int *)malloc(sizeof(int) * true_capacity);
    check_address(arr->data);

    return arr;
}

void sarray_resize_for_size(SArray *arrptr, int candidate_size){
    if (arrptr->size < candidate_size)
    {
        if (arrptr->size == arrptr->capacity)
        {   
            sarray_upsize(arrptr);
        }
        
    }else if (arrptr->size > candidate_size)
    {
        if (arrptr->size < arrptr->capacity/kSrinkFactor)
        {
            sarray_downsize(arrptr);
        }
    }
}

void sarry_upsize(SArray *arrptr){
    int old_capacity = arrptr->capacity;
    int new_capacity = Sarray_determine_capacity(old_capacit);

    int *new_data = (int *)realloc(arrptr->data,sizeof(int)*  new_capacity);
    check_address(new_data);

    arrptr->data = new_data;
    arrptr->capacity = new_capacity;
}

