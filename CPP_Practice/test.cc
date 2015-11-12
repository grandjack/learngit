#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned short  uiOpcode_t; 
typedef unsigned short cpValue_t;

typedef struct {
	int a;
	char str[3];
}struct_test;
typedef struct {
    uiOpcode_t uiOpcode;
    cpValue_t cpvalue;
    struct_test test;
}_cp_ui_value;

_cp_ui_value cp_ui_value[] = {
    {1,   	10, {100,{"XX"}}},
    {2,         20, {200,{"YY"}}}
};

typedef enum
{
    PRIVACY_KEY_OTAR = 0,
    PRIVACY_KEY_AES,
    PRIVACY_KEY_ENHANCE,
}privacy_key_set_type_t;


const int array_size = sizeof(cp_ui_value)/sizeof(_cp_ui_value);

int conmmon_fun()
{
	printf("Hello World\n");
	int i = 0;
	for (;i<array_size;i++) {
		printf("i=%d, uiOpcode[%d], cpvalue[%d]\n", i,cp_ui_value[i].uiOpcode, cp_ui_value[i].cpvalue);
	}
	
	unsigned char identifier = ~0;
	printf("The identifier=%d\n", identifier);

	unsigned int st = 0XFFFFFF;
	printf("st=[%d]\n", st);

	char str_num[3];
	memcpy(str_num, &st, 3);
	unsigned int *lt = (unsigned int *)str_num;
	printf("lt=[%d]\n", *lt);

	unsigned int num = 0;
	memcpy(&num, str_num, 3);
	printf("num=[%d]\n", num);


	return 0;
}
