#include<stdio.h>
main()
{
	char ch;
	printf("\n ENTER THE ALPHABET");
	scanf("%c",&ch);
	if ( (ch=='a'||ch=='A')||(ch=='e'||ch=='E')||(ch=='i'||ch=='I')||(ch=='o'||ch=='O')||(ch=='U'||ch=='u'))
    printf("\n IT IS A VOWEL");
    else
    printf("\n IT IS A CONSONANT");
}
