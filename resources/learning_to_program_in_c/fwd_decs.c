#include <stdio.h>
#include <string.h>

void albert(char* name);

int einstein(char* name)
{
	int i = strlen(name);
	albert(name);
	return (i);
}

void albert(char* name)
{
	int i = strlen(name);
	printf("%s consists of %d chars!\n", name, i);
}

int main(int argc, char* argv[])
{
	int i = einstein("brainfood");
	printf("einstein has IQ=%d\n", i);
}
