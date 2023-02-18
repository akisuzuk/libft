/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:42:13 by akisuzuk          #+#    #+#             */
/*   Updated: 2022/08/19 18:42:13 by akisuzuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char    **ft_split(char *str, char *charset);

char    **ft_split(char *str, char *charset)
{
	char	*head;
	char	*ret;
	int		i;

    while(*str++)
    {
        if()
    }
}

int	main(void)
{
	char	str1[] = "  tripouille  42  ";
	char	str2 = ' ';
	char	**joined;

	printf("str1=%s\n", str1);
	printf("str2=%s\n", str2);
	joined = ft_strtrim(str1, str2);
	printf("ret=%s\n", joined);
	//printf("strcmp=%d\n", strcmp(joined, "42"));
	free(joined);
}


/*
char **split(char *string, const char delimiter) {
    int length = 0, count = 0, i = 0, j = 0;
    while(*(string++)) {
        if (*string == delimiter) count++;
        length++;
    }
    string -= (length + 1); // string was incremented one more than length
    char **array = (char **)malloc(sizeof(char *) * (length + 1));
    char ** base = array;
    for(i = 0; i < (count + 1); i++) {
        j = 0;
        while(string[j] != delimiter) j++;
        j++;
        *array = (char *)malloc(sizeof(char) * j);
        memcpy(*array, string, (j-1));
        (*array)[j-1] = '\0';
        string += j;
        array++;
    }
    *array = '\0';
    return base;  
}
*/