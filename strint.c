/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strint.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheyo <cheyo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:26:24 by cheyo             #+#    #+#             */
/*   Updated: 2024/10/27 02:03:04 by cheyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*strint(char *str)
{
	int	*out;
	int	i;
	int	j;

	i = ft_strlen(str);
	out = malloc(sizeof(int) * i);
	if (!out)
		return (NULL);
	j = 0;
	while (j < i)
	{
		out[j] = (int)str[j];
		j++;
	}
	return (out);
}

int	main(void)
{
	char 	*p = "ffaapupu";
	int		*tab;
	int		i;

	tab = strint(p);
	i = 0;
	while (i < ft_strlen(p))
		printf("%d ", tab[i++]);
	printf("\n");
	free(tab);
	return (0);
}
