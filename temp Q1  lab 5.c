#include <stdio.h>
int main()
{
	
	int countV=0,countC=0;
	int i;
	char letter[4];
	for(i=0; i<3; i++)
    {
	puts("Enter a LETTER");
	scanf(" %c",&letter[i]);
    }
	for(i=0; i<3; i++)
	{
	if (letter[i]=='a'||letter[i]=='e'||letter[i]=='i'||letter[i]=='o'||letter[i]=='u'||letter[i]=='A'||letter[i]=='E'||letter[i]=='I'||letter[i]=='O'||letter[i]=='U')
	{printf("Character '%c' is Vowel\n", letter[i]);
	countV++;
	}
	else
	{
		printf("Character '%c' is Consonant\n", letter[i]);
		countC++;
	}
	}
	printf("There are %d vowels &\n", countV);
	printf("There are %d Consonants", countC);
return 0;
}

