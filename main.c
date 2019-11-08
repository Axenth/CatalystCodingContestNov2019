/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <jlensing@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 15:05:42 by jlensing       #+#    #+#                */
/*   Updated: 2019/11/08 18:55:21 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "features.h"
#include <stdlib.h>
#include <math.h>

unsigned long count_avg(char **str)
{
    size_t avg;
    int i;
	size_t temp;

    i = 0;
    avg = 0;
    while (str[i] != '\0')
    {
		temp = atoi(str[i]);
        avg += temp;
        i++;
    }
    printf("voor het delen: %zu\n", avg);
	//avg = (avg/ (i + 1));
	avg = floor(avg / (i));
	printf("AVG = %.1zu\n", avg);
    return (avg);
}

int search_max(char **str)
{
    int max;
    int i;
	int temp;

    i = 0;
    max = 0;
    while (str[i] != '\0')
    {
		temp = atoi(str[i]);
        if (max < temp)
            max = temp;
        i++;
    }
	printf("MAX = %i\n", max);
    return (max);
}

int search_min(char **str)
{
    int    min;
    int    i;
    int    temp;
    
    i = 0;
    min = atoi(str[i]);
    while (str[i] != '\0')
    {
        temp = atoi(str[i]);
        if (min > temp)
            min = temp;
        i++;        
    }
	printf("MIN = %i\n", min);
    return (min);
}

int main(void)
{
    int     min;
    int     max;
    int     avg;
    char    **input;

	input = read_map(open_file("level1/level1_5.in"));

    min = search_min(input);
    max = search_max(input);
    avg = count_avg(input);
 
    return (0);
}