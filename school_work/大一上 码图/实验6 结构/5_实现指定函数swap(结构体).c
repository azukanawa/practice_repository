#include <stdio.h>
typedef struct Person
{
    int age;
    int height;
} Person;
void swap(Person *array, int n);
void swap(Person *array, int n)
{
    int middle = 0;
    if (array == NULL || n <= 0)
    {
        printf("error");
        return;
    }
    middle = array[0].height;
    array[0].height = array[n - 1].height;
    array[n - 1].height = middle;
}
