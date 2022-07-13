#ifndef DEFLIST_H
#define DEFLIST_H

#define TRUE 1
#define FALSE 0

typedef bool				BOOL;
typedef signed char			S_CHAR;
typedef char					CHAR;
typedef unsigned char			U_CHAR;
typedef short					INT16;
typedef unsigned short			U_INT16;
typedef int						INT32;
typedef unsigned int			U_INT32;
typedef long					LONG;
typedef unsigned long			U_LONG32;
typedef long long				INT64;
typedef unsigned long long		U_INT64;

typedef float 					FLOAT_32;
typedef double					FLOAT_64;

typedef const CHAR * const		C_PCHAR_C;


typedef unsigned long int   DWORD;		// unsigned 4-byte data type
typedef unsigned short int  WORD;		// unsigned 2-byte data type


struct real_data{
	FLOAT_32 Lon;
	FLOAT_32 Lat;
	FLOAT_32 Heading;
};

struct message{
	LONG msg_type;
	struct real_data data;
};

#define OCRAM_BASE_ADDR 0x900000
#define OCRAM_SIZE 0x20000
#define SIZE_MASK (OCRAM_SIZE - 1)

#endif

