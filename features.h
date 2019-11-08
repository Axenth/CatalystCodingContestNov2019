/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   features.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <jlensing@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 15:37:23 by jlensing       #+#    #+#                */
/*   Updated: 2019/11/08 17:47:56 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FEATURES_H
# define FEATURES_H

char	*open_file(char *path);
char	**ft_split(char const *s, char c);
char	**read_map(const char *buff);

#endif