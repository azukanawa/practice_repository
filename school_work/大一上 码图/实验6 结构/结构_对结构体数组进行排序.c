#include <stdio.h>
typedef struct Person
{
    int no;
    int age;
    int height;
} Person;

void sort(Person *array, int n);
void sort(Person *array, int n)
{
    int i = 0;
    int j = 0;
    Person middle;
    middle.no = 0;
    middle.age = 0;
    middle.height = 0;
    if (array == NULL || n <= 0)
    {
        printf("error");
        return;
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j].no > array[j + 1].no)
            {
                middle = array[j];
                array[j] = array[j + 1];
                array[j + 1] = middle;
                continue;
            }
            else if (array[j].no == array[j + 1].no)
            {
                if (array[j].age > array[j + 1].age)
                {
                    middle = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = middle;
                    continue;
                }
                else if (array[j].age == array[j + 1].age)
                {
                    if (array[j].height > array[j + 1].height)
                    {
                        middle = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = middle;
                        continue;
                    }
                }
            }
        }
    }
    return;
}
