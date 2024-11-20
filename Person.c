#include "Person.h"

int	persons_count = 0;

struct Person persons[100];


struct Person	create_person(const char *name, int age, struct Address address)
{
	struct Person	new_person;

	new_person.name = name;
	new_person.age = age;
	new_person.address = address;

	return new_person;
}

void	add_person(const char *name, int age, struct Address address)
{
	struct Person	person;

	if (persons_count < 100) {
		person = create_person(name, age, address);
		persons[persons_count] = person;
		persons_count++;
	}
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

void	delete_person(int person_num)
{
	if (persons_count == 0) {
		printf(BRED"Person No %d is not registered\n"DFLT, person_num);
		return ;
	}

	while (person_num < persons_count)
	{
		persons[person_num - 1] = persons[person_num];
		person_num++;
	}
	persons_count--;
	printf(BGRN"Person No %d has been deleted\n"DFLT, person_num);
}

void	show_persons_table()
{
	printf("+----------");
}
