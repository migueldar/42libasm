#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	//ft_strlen
	{
		printf("------FT_STRLEN------\n");
		char str[10] = "holafjslk";
		char* str2 = "fadfdsa";
		char* str3 = "";

		printf("Expected: %ld\n", strlen(str));
		printf("Real: %ld\n", ft_strlen(str));
		printf("Expected: %ld\n", strlen(str2));
		printf("Real: %ld\n", ft_strlen(str2));
		printf("Expected: %ld\n", strlen(str3));
		printf("Real: %ld\n", ft_strlen(str3));
	}
	//ft_strcpy
	{
		printf("\n------FT_STRCPY------\n");
		char str[10];
		char str_cpy[10];

		char str2[10] = "one of";
		char str2_cpy[10] = "one of";

		char str3[20] = "uuuuuuuuuuuuuuuuu";
		char str3_cpy[20] = "uuuuuuuuuuuuuuuuu";

		char str4[10] = "miau miau";
		char str4_cpy[10] = "miau miau";

		char *str5 = strdup("holas");
		char *str5_cpy = strdup("holas");

		char *str6 = "mmmmm";
		char *str6_cpy = "mmmmm";
		
		printf("Expected: %s - %s\n", strcpy(str, str2), str);
		printf("Real: %s - %s\n", ft_strcpy(str_cpy, str2_cpy), str_cpy);
		printf("Expected: %s - %s\n", strcpy(str3, str4), str3);
		printf("Real: %s - %s\n", ft_strcpy(str3_cpy, str4_cpy), str3_cpy);
		printf("Expected: %s - %s\n", strcpy(str4, str5), str4);
		printf("Real: %s - %s\n", ft_strcpy(str4_cpy, str5_cpy), str4_cpy);
		printf("Expected: %s - %s\n", strcpy(str5, str6), str5);
		printf("Real: %s - %s\n", ft_strcpy(str5_cpy, str6_cpy), str5_cpy);

		free(str5);
		free(str5_cpy);
	}
	//ft_strcmp
	{
		printf("\n------FT_STRCMP------\n");
		char str[5] = "hola";
		char str2[5] = "hola";
		char str3[1] = "";
		char str4[2] = "x";
		char str5[2] = " ";
		str5[0] = -2;

		printf("Expected: %d\n", strcmp(str, str2));
		printf("Real: %d\n", ft_strcmp(str, str2));
		printf("Expected: %d\n", strcmp(str, str3));
		printf("Real: %d\n", ft_strcmp(str, str3));
		printf("Expected: %d\n", strcmp(str, str4));
		printf("Real: %d\n", ft_strcmp(str, str4));
		printf("Expected: %d\n", strcmp(str4, str));
		printf("Real: %d\n", ft_strcmp(str4, str));
		printf("Expected: %d\n", strcmp(str5, str));
		printf("Real: %d\n", ft_strcmp(str5, str));
		printf("Expected: %d\n", strcmp(str, str5));
		printf("Real: %d\n", ft_strcmp(str, str5));
		printf("Expected: %d\n", strcmp(str3, str3));
		printf("Real: %d\n", ft_strcmp(str3, str3));
	}
	//ft_strdup
	{
		printf("\n------FT_STRDUP------\n");
		char *toDup = "hola";
		char *toDup2 = "";
		
		char *realdup = strdup(toDup);
		char *mydup = ft_strdup(toDup);
		char *realdup2 = strdup(toDup2);
		char *mydup2 = ft_strdup(toDup2);
		
		printf("Expected: %s\n", realdup);
		printf("Real: %s\n", mydup);
		printf("Expected: %s\n", realdup2);
		printf("Real: %s\n", mydup2);
		
		free(realdup);
		free(mydup);
		free(realdup2);
		free(mydup2);
	}
	//ft_write
	{
		printf("\n------FT_WRITE------\n");
		char* str = "hola\n";
		char* str2 = "como mola\n";
		printf("Real: %ld\n", ft_write(1, str, 5));
		printf("Real: %ld\n", ft_write(1, str2, 10));
		printf("Real: %ld\n", ft_write(2, str, 2));
		printf("Real: %ld\n", ft_write(2, str2, 3));
	
		printf("%ld\n", ft_write(3, str, 5));
		perror("write");
		printf("%ld\n", ft_write(1, NULL, 5));
		perror("write");
	}
	//ft_read
	{
		printf("\n------FT_READ------\n");
	
		char buf[10];

		printf("%ld\n", ft_read(0, buf, 10));
		ft_write(1, buf, 10);
		ft_write(1, "\n", 1);

		printf("%ld\n", ft_read(3, buf, 9));
		perror("read");
		printf("%ld\n", ft_read(0, NULL, 10));
		perror("read");
	}
}
