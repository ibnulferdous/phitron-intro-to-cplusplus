#include <bits/stdc++.h>

using namespace std;

class Person
{
    public:
        char name[100];
        float height;
        int age;

        Person(char* n, float h, int a)
        {
            strcpy(name, n);
            height= h;
            age= a;
        }
};

int main(void)
{
    char name_one[100] = "Ibnul Ferdous";
    Person* person_one = new Person(name_one, 67.6, 33);
    
    char name_two[100] = "Rahat Khan Pathan";
    Person* person_two = new Person(name_two, 70, 28);

    person_one->age > person_two->age ? cout<<person_one->name : cout<<person_two->name;

    return 0;
}

