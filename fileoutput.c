/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fileoutput.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <jlensing@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 15:13:32 by jlensing       #+#    #+#                */
/*   Updated: 2019/11/08 17:43:19 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>  
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include "features.h"

#define BUFFER_SIZE 100000

void	write_file(char *path, char *to_write)
{
	int fd;
	int pathlength = strlen(path);

	fd = open(path, O_RDWR | O_CREAT);
	write(fd, to_write, 100);
	close(fd);
}
