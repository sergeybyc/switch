#include <stdio.h>

main()
{
	int day;
	printf("Day? ");
	scanf("%i",&day);
	
	switch(day)
	{
		case 1:
			{
				printf("Mon");
			}
			break;
		case 2:
			{
				printf("Mon");
			}
			break;
		case 3:
			{
				printf("Tue");
			}
			break;
		case 4:
			{
				printf("Wed");
			}
			break;
		case 5:
			{
				printf("Thu");
			}
			break;
		case 6:
			{
				printf("Sat");
			}
			break;
		case 7:
			{
				printf("Sun");
			}
			break;
		default:
			{
				printf("Err");
			}
	}
		
}


