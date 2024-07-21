/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkassel <rkassel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:59:10 by rkassel           #+#    #+#             */
/*   Updated: 2024/06/11 18:09:46 by rkassel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strcat(char *dest, char *src, int read_bytes)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	if (read_bytes == -1)
		read_bytes = ft_strlen(src);
	j = 0;
	while (read_bytes--)
		dest[i++] = src[j++];
	return (dest[i] = '\0', dest);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count && size && count > (UINT_MAX / size))
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	if (size == 0 || count == 0)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	while (n)
	{
		*(unsigned char *)s = '\0';
		s++;
		n--;
	}
}
