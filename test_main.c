#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>
int main(int ac , char **arv){
	(void)(ac);
	(void)(arv);
/*	
	printf("is ascii %d\n",ft_isascii(-46));//arv[1][0]));
	printf("is alnum %d\n", ft_isalnum(arv[1][0]));
	printf("is digit %d\n",ft_isdigit(arv[1][0]));
	printf("is alpha %d\n", ft_isalpha(arv[1][0]));
	printf("is print %d\n", ft_isprint(arv[1][0]));
	printf("ft_strlen %d\n", ft_strlen(arv[1]));

	ft_memset(arv[0], '.', 2);
	ft_bzero(arv[0]+2, 2);
	printf("%s\n", arv[0]);
	
	char src[] = "abcdef";
	//char dst[] = "qqq";

	//memmove(src + 2, src, 4);
	
	//printf("%s\n", src);
	char *vv = src+2; 
	memcpy(vv, src, 4);
	printf("%s\n",src);
	
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_tolower('s'));	
	char *str = "come for cum";
	printf("%s\n", ft_strrchr(str, '9'));
	printf("%d\n", ft_strncmp("test123", "test123", 8));
	char s[] = "come for cum";
	printf("fount at pos %ld\n", (char *)memchr(s, 129, 13)-s+1);
	printf("%d\n", memcmp("abc", "abc", 5));
*/
	//int arr1[] = {1, 2};
	//int arr2[] = {1, 2};
	//int res = memcmp(arr1, arr2, 3* sizeof(int));
	//int	resft = ft_memcmp(arr1, arr2, 3* sizeof(int));
	char arr1[] = "133";
	char arr2[] = "123";
	int res = memcmp(arr1, arr2, 3* sizeof(char));
	int	resft = ft_memcmp(arr1, arr2, 3* sizeof(char));
	if (!res)
		printf("non-ft: %d ft: %d arrys are iddentical\n", res,  resft);
	else
		printf("non-ft: %d ft: %d arrays are not\n", res, resft);;
/*
	char *hysack = "future is loading";
	char *needle = "ft";
	
	printf("%s\n", ft_strnstr(hysack, needle, 17));

	printf("ft_atoi %d\n", ft_atoi("-+1"));

	char * testcpy = "1234567890";
	printf("%s\n", strdup(testcpy));
	printf("%s\n", ft_strdup(testcpy));*/
}	
