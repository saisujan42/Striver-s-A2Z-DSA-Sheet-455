#include <string.h>

int dataTypes(char* type) 
{
	if(strcmp(type, "Integer") == 0)
		return 4;
	if(strcmp(type, "Long") == 0)
		return 8;
	if(strcmp(type, "Float") == 0)
		return 4;
	if(strcmp(type, "Double") == 0)
		return 8;
	if(strcmp(type, "Character") == 0)
		return 1;
	return -1;
}

