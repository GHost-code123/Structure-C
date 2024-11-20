#include "Person.h"

static void	show_options()
{
	puts(BYEL"> Choose an option:\n"DFLT
		"\t(1) Show all persons informations\n"
		"\t(2) Show person informations\n"
		"\t(3) Register a new person\n"
		"\t(4) Update a person informations\n"
		"\t(5) Delete a person record\n"
		"\t(0) Quit"
		);
}

int	main()
{
	int	option, quit = 0;

	do
	{
		show_options();
		printf("Enter your choice here: ");
		scanf("%d", &option);
		switch (option)
		{
		case 0:
			puts(GRN"Bye!"DFLT);
			quit = 1;
			break;
		case 1:
			sho
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			puts(BRED"Invalid option"DFLT);
			break;
		}

	} while (!quit);
	

	return 0;
}

