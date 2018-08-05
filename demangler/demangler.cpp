// demangler.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"




int main(int argc, char* argv[])
{

	if (argc != 2)
	{
		return 1;
	}

Start:


	++argv;



	FILE *file = fopen(*argv, "r");
	if (file == NULL) {
		printf("�޷����ļ� %s\n", *argv);
		return 1;
	}
	char line[2048] = { 0 };
	char demangled[2048] = { 0 };

	while (fgets(line, 2048, file)) {
		line[strlen(line) - 1] = '\0';

		printf("%s\t", line);

		if (UnDecorateSymbolName(line, demangled, 2048, UNDNAME_COMPLETE))
			printf("%s\t", demangled);
		else
			printf("\t");

		if (UnDecorateSymbolName(line, demangled, 2048, UNDNAME_NAME_ONLY))
			printf("%s\n", demangled);
		else
			printf("\n");

	}

	fclose(file);

	return 0;
}