#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

void	testing_functions()
{
	for (int i = -20; i < 300; ++i)
	{
		if (ft_isalpha(i) != isalpha(i))
			printf("ERROR ft_isalpha i = %d\n", i);
		if (ft_isdigit(i) != isdigit(i))
			printf("ERROR ft_isdigit i = %d\n", i);
		if (ft_isalnum(i) != isalnum(i))
			printf("ERROR ft_isalnum i = %d\n", i);
		if (ft_isascii(i) != isascii(i))
			printf("ERROR ft_isascii i = %d\n", i);
		if (ft_isprint(i) != isprint(i))
			printf("ERROR ft_isprint i = %d\n", i);
		if (ft_toupper(i) != toupper(i))
			printf("ERROR ft_toupper i = %d\tft_toupper = %d\ttoupper = %d\n", i, ft_toupper(i), toupper(i));
		if (ft_tolower(i) != tolower(i))
			printf("ERROR ft_tolower i = %d\tft_tolower = %d\ttolower = %d\n", i, ft_tolower(i), tolower(i));
	}
}

int main(void)
{
	printf("\nTest strlen\n****************************\n");
	printf("ft_strlen(abc)\t\t = %d\n", ft_strlen("abc"));
	printf("strlen(abc)\t\t = %lu\n\n", strlen("abc"));
	printf("ft_strlen()\t\t = %d\n", ft_strlen(""));
	printf("strlen()\t\t = %lu\n\n", strlen(""));
	printf("ft_strlen(Hello Codam)\t = %d\n", ft_strlen("Hello Codam"));
	printf("strlen(Hello Codam)\t = %lu\n\n", strlen("Hello Codam"));

	printf("\nTest memset\n**********************************************\n");
	char str1[50] = "This is a great day";
	printf("ft_memset(15 - 7)\t = %s\n", ft_memset(str1, '*', 7));
	printf("memset(15 - 7)\t\t = %s\n\n", memset(str1, '*', 7));   
	char str2[50] = "Hello";
	printf("ft_memset(5 - 7)\t = %s\n", ft_memset(str2, '*', 7));
	printf("memset(5 - 7)\t\t = %s\n\n", memset(str2, '*', 7));

	printf("\nTest bzero\n***************************************\n");
	char str3[50] = "This is a great day1";
	printf("ft_bzero(15 - 7) \t = ");
	ft_bzero(str3, 7);
	int i = 0;
	while(str3[i] != '1')
	{
		printf("%c", str3[i]);
		i++;
	}
	printf("\nbzero(15 - 7) \t\t = ");
	bzero(str3, 7);
	i = 0;
	while(str3[i] != '1')
	{
		printf("%c", str3[i]);
		i++;
	}
	char str4[50] = "Hello";
	ft_bzero(str4, 7);
	printf("\nft_bzero(5 - 7)\t\t = %s\n", str4);
	printf("bzero(5 - 7)\t\t = %s\n\n", bzero(str4, 7)); 
	
	printf("\nTest memcpy\n**************************************\n");
	const char src[50] = "This is a great day";
	char dst[50] = "Hello Codam";
	printf("ft_memcpy before\t = %s\n", dst);
	printf("ft_memcpy after\t\t = %s\n", ft_memcpy(dst, src, 10));
	char dst1[50] = "Hello Codam";
	printf("memcpy before\t\t = %s\n", dst1);
	printf("memcpy after\t\t = %s\n\n", memcpy(dst1, src, 10));
	
	printf("\nTest memmove\n**************************************\n");
	const char src1[50] = "This is a great day";
	char dst2[50] = "Hello Codam";
	printf("ft_memmove before\t = %s\n", dst2);
	printf("ft_memmove after\t = %s\n", ft_memmove(dst2, src1, 10));
	char dst3[50] = "Hello Codam";
	printf("memmove before\t\t = %s\n", dst3);
	printf("memmove after\t\t = %s\n", memmove(dst3, src1, 10));

	printf("\nTest strchr\n***********************************\n");
	const char str[50] = "This is a great day";
	int c = 's';
	printf("ft_strchr\t = %s\n", ft_strchr(str, c));
    printf("strchr\t\t = %s\n\n", strchr(str, c));

	printf("\nTest strrchr\n********************************\n");
	const char s[50] = "This is a great day";
	int c1 = 's';
	printf("ft_strrchr\t = %s\n", ft_strrchr(s, c1));
    printf("strrchr\t\t = %s\n\n", strrchr(s, c1));

	printf("\nTest strncmp\n***********************\n");
	char s1[15] = "aBCDEF";
	char s2[15] = "aææææ";
	printf("ft_strncmp\t = %d\n", ft_strncmp(s1, s2, 4));
    printf("strncmp\t\t = %d\n\n", strncmp(s1, s2, 4));

	printf("\nTest memchr\n***********************************\n");
	const char str5[50] = "This is a great day";
	int c2 = 's';
	printf("ft_memchr\t = %s\n", ft_memchr(str5, c2, 5));
    printf("memchr\t\t = %s\n\n", memchr(str5, c2, 5));

	printf("\nTest memcmp\n***********************\n");
	char s3[15] = "aBCDEF";
	char s4[15] = "aææææ";
	printf("ft_memcmp\t = %d\n", ft_memcmp(s3, s4, 10));
    printf("memcmp\t\t = %d\n\n", memcmp(s3, s4, 10));

	printf("\nTest strnstr\n**************************\n");
	char s5[15] = "Foo Bar Baz";
	char s6[15] = "Bar";
	printf("ft_strnstr\t = %s\n", ft_strnstr(s5, s6, 7));
    printf("strnstr\t\t = %s\n\n", strnstr(s5, s6, 7));
	
	printf("\nTest atoi\n****************************\n");
	const char str6[30] = "-98993489";
	printf("ft_atoi\t\t = %d\n", ft_atoi(str6));
    printf("atoi\t\t = %d\n\n", atoi(str6));

	printf("\nTest strlcpy\n********************\n");
	char str7[15] = "Horses are nice";
	char str8[15] = "Pigs also";
	printf("ft_strlcpy\t = %zu\n", ft_strlcpy(str8, str7, 10));
    printf("strlcpy\t\t = %lu\n\n", strlcpy(str8, str7, 10));

	printf("\nTest strlcat\n***********************\n");
	char str9[30] = "This is ";
	char str10[30] = "potentially long string";
	printf("ft_strlcat\t = %zu\n", ft_strlcat(str10, str9, 10));
    printf("strlcat\t\t = %lu\n\n", strlcat(str10, str9, 10));

	printf("\nTest calloc\n***********************\n");
	printf("ft_calloc\t = %s\n", ft_calloc(10, 5));
    printf("calloc\t\t = %s\n\n", calloc(10, 5));

	printf("\nTest strdup\n***********************\n");
	const char s7[15] = "Hello";
	printf("ft_strdup\t = %s\n", ft_strdup(s7));
    printf("strdup\t\t = %s\n\n", strdup(s7));

	printf("\nTest substr\n***********************\n");
	const char s8[15] = "Hello World";
	printf("ft_substr\t = %s\n", ft_substr(s8, 5, 7));

	printf("\nTest strjoin\n***********************\n");
	const char s9[15] = "Hello";
	const char s10[15] = "World";
	printf("ft_strjoin\t = %s\n", ft_strjoin(s9, s10));
   
   	printf("\nTest strtrim\n***********************\n");
	const char s11[15] = "lala.halal.la";
	const char s12[15] = "la";
	printf("ft_strtrim\t = %s\n", ft_strtrim(s11, s12));

	printf("\nTest ft_putchar_fd\n***********************\n");
	printf("Geen main gemaakt\n\n");

	printf("\nTest ft_putstr_fd\n***********************\n");
	printf("Geen main gemaakt\n\n");

	printf("\nTest ft_putendl_fd\n***********************\n");
	printf("Geen main gemaakt\n\n");

	printf("\nTest ft_putnbr_fd\n***********************\n");
	printf("Geen main gemaakt\n\n");

	printf("\nTest ft_strmapi\n***********************\n");
	printf("Geen main gemaakt\n\n");

	printf("\nTest ft_striteri\n***********************\n");
	printf("Geen main gemaakt\n\n");

	testing_functions();
	return(0);
}


