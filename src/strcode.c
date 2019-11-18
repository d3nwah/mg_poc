#include <sys/types.h>

u_short GV_StrCode_80016CCC(const char* string )
{
	u_char c;
	u_char *p = (u_char *)string;
	u_short id = 0;
	
	while (( c = *p++ ))
	{
		id = (( id >> 11 ) | ( id << 5 ));
		id += c;
	}
	return id;
}
