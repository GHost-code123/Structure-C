#include "Person.h"

struct 

struct Person	create_person(const char *name, int age, struct Address address)
{
	struct Person	new_person;

	new_person.name = name;
	new_person.age = name;
	new_person.address = address;

	return new_person;
}

void	show_person_infos(struct Person *person, int num)
{
	printf("Person No %d ----------------\n", num);
	printf("Name    : %s\n", person->name);
	printf("Age     : %d\n", person->age);
	printf("Address : %s, %d %s\n\n",
		person->address.street,
		person->address.zip,
		person->address.city);
}
