/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   map_to_arr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 15:28:56 by nvan-der       #+#    #+#                */
/*   Updated: 2019/11/08 17:47:58 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "features.h"
#include <stdio.h>

char	**read_map(const char *buff)
{
	char	**mapstring;
	
	if (buff == NULL)
		return (NULL);
	mapstring = ft_split(buff, ' ');
	return (mapstring);
}
