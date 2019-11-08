/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fileinput.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <jlensing@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 15:11:51 by jlensing       #+#    #+#                */
/*   Updated: 2019/11/08 17:38:55 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>  
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "features.h"

#define BUFFER_SIZE 100000000

static char *remove_newline(char *str)
{
	int i = 0;
	char *newstr;

	newstr = malloc(BUFFER_SIZE*sizeof(char *));

	while(str[i] != '\0')
	{
		newstr[i] = str[i];
		if(newstr[i] == '\n')
			newstr[i] = ' ';
		i++;
	}

	return (newstr);
}

static char *remove_size(char *str)
{
	int i = 0;
	int i2 = 0;
	int counter = 0;
	char *newstr;

	while (counter < 2)
	{
		if(str[i] == ' ')
			counter++;
		i++;
	}
	newstr = malloc(BUFFER_SIZE*sizeof(char *));
	while(str[i] != '\0')
	{
		newstr[i2] = str[i];
		i2++;
		i++;
	}

	return (newstr);
}

char *open_file(char *path)
{
	int fd;
	int ret;
	char *buff;
	char *buff2;
	char *buff3;

	if((fd = open(path, O_RDONLY)) == -1)
		return (NULL);
	// What if file exceeds buffer_size ? 
	buff = malloc(BUFFER_SIZE*sizeof(char *));
	ret = read(fd, buff, BUFFER_SIZE);
	buff2 = remove_newline(buff);
	buff3 = remove_size(buff2);
	free(buff);
	free(buff2);
	close(fd);
	return (buff3);
}
