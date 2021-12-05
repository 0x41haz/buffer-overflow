#include<stdio.h>
#include<string.h>

void bof(char *input);

int main(int argc, char *argv[])
{
if(argc>1)	
bof(argv[1]);
}

void bof(char *input)
{
char buffer[64];
strcpy(buffer, input);
}
