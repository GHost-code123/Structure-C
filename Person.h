#ifndef PERSON_H
#define PERSON_H

#include <stdio.h>

// Colors:

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define WHT "\e[0;37m"
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define BYEL "\e[1;33m"
#define BBLU "\e[1;34m"
#define BWHT "\e[1;37m"
#define DFLT "\e[0m"


struct Address
{
	const char	*street;
	const char	*city;
	short		zip;
};

struct Person
{
	const char		*name;
	int				age;
	struct Address	address;
};


struct Person	create_person(const char *name, int age, struct Address address);
void			add_person(const char *name, int age, struct Address address);
void			show_person_infos(struct Person *person, int num);
void			delete_person(int person_num);

void			show_persons_table();

#endif

