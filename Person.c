#include "Person.h"
#include <string.h>

int	persons_count = 0;

struct Person persons[100];


void	add_person()
{
	struct Person	new_person;

	printf("Enter person name: ");
	scanf(" %[^\n]", new_person.name);
	printf("Enter person age: ");
	scanf("%d", &new_person.age);
	printf("Enter person address: \n");
	printf("    Enter city name: ");
	scanf(" %[^\n]", new_person.address.city);
	printf("    Enter street name: ");
	scanf(" %[^\n]", new_person.address.street);
	printf("    Enter zip code: ");
	scanf("%d", &new_person.address.zip);

	if (persons_count < 100) {
		persons[persons_count] = new_person;
		persons_count++;
	}
}

void	show_person_infos()
{
	int	person_num;
	struct Person person;

	printf("\nEnter person number: ");
	scanf("%d", &person_num);

	if (persons_count == 0)
		printf(BRED"No person with this number(%d)\n"DFLT, person_num);
	else
	{
		person = persons[person_num - 1];
		printf("Person No %d ----------------\n", person_num);
		printf("Name    : %s\n", person.name);
		printf("Age     : %d\n", person.age);
		printf("Address : %s, %d %s\n\n",
			person.address.street,
			person.address.zip,
			person.address.city);
	}
}

void	delete_person()
{
	int	person_num;

	printf("\nEnter person number to delete: ");
	scanf("%d", &person_num);
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
	puts("+----+--------------------+-----+-----------------------------------------+");
	puts("| No |        Name        | age |                  Address                |");
	puts("+----+--------------------+-----+-----------------------------------------+");
	for (int i = 0; i < persons_count; i++)
	{
		printf("|%3.3d |%20.20s|%3.3d | %10.10s, %16.16s, %10.10d|\n", \
		i + 1, persons[i].name, persons[i].age,\
		persons[i].address.city, persons[i].address.street, persons[i].address.zip);
	}
	puts("+----+--------------------+-----+-----------------------------------------+");
}
