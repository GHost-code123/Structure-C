#include "Person.h"

static void	show_options()
{
	puts(BYEL"\nChoose an option:\n"BWHT
		"  (1) Show all persons informations\n"
		"  (2) Show person informations\n"
		"  (3) Register a new person\n"
		"  (4) Update a person informations\n"
		"  (5) Delete a person record\n"
		"  (0) Quit\n"DFLT
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
			show_persons_table();
			break;
		case 2:
			show_person_infos();
			break;
		case 3:
			add_person();
			break;
		case 4:
			// update_person_infos();
			break;
		case 5:
			delete_person();
			break;
		default:
			puts(BRED"Invalid option"DFLT);
			break;
		}

		// printf("   Press Enter to show Menu\n");
		// scanf(" ");
	} while (!quit);

	return 0;
}

