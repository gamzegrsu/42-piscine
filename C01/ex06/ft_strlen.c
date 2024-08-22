/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 23:11:01 by marvin            #+#    #+#             */
/*   Updated: 2024/08/21 23:11:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);


/*#include <stdio.h>

int main()
{
    char myString[] = "Hello, World!";
    int length = ft_strlen(myString);
    printf("Length: %d\n", length);
    return 0;
}
