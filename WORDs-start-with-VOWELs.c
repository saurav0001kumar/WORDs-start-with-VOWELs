#include<stdio.h>
#include<stdlib.h>
struct v
{
char ch[9000];
}; //This structure contains an array "ch" which stores the paragraph entered by the user.

int countVword(char ch[9000]) //This function is used to count the number of words starting with vowels.
{
	int i,nov=0; //Here variable "nov" is the number of words starting with vowels and variable "i" is a counter.
	for(i=0; ch[i]!='\0' ; i++)
	{	if(i==0)
		{
		if(ch[0]=='A' || ch[0]=='E'||ch[0]=='I'||ch[0]=='O'||ch[0]=='U' || ch[0]=='a' || ch[0]=='e'||ch[0]=='i'||ch[0]=='o'||ch[0]=='u')
		nov++;
		}
	else
	{
		if(ch[i]==' ')
		{
			i++;
		if(ch[i]=='A' || ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U' || ch[i]=='a' || ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
		nov++;
		i--;
		}
	}
	}
return(nov);
}

void main()
{
struct v v;
int nov,i;
printf("# This C program is used to find the number of words starting with vowels in a paragraph input by the user.\n\n->Enter a short paragraph (LIMIT : 9000 characters only) :\n");
fflush(stdin);
gets(v.ch);
nov=countVword(v.ch);
printf("\n->Number of words in the above paragraph starting with a VOWEL(s) = %d\n",nov);

getchar();
}
