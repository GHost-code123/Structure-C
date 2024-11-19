#ifndef PERSON_H
#define PERSON_H

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


#endif

