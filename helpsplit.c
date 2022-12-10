/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpsplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  amangold < amangold@student.42heilbron    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:02:29 by  amangold         #+#    #+#             */
/*   Updated: 2022/12/10 17:00:56 by  amangold        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	*free_all(char **all, int start, int stop)
{
	while (start <= stop)
		free(all[start++]);
	free(all);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	int		count;
	char	**out;

	if (!s)
		return (0);
	count = countwords(s, c, &i);
	out = (char **)malloc((count + 1) * sizeof(char *));
	if (!out)
		return (0);
	out[count] = 0;
	while (count > 0)
	{
		len = 0;
		while (!(s[i - 1] != c && (s[i] == c || !s[i])) && i > 0)
			i--;
		while (i - len > 0 && s[i - len - 1] != c)
			len++;
		out[--count] = ft_substr(s, i - len, len);
		if (!out)
			return (free_all(out, count, countwords(s, c, &i)));
		i -= len;
	}
	return (out);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str;

	i = 0;
	k = 0;
	str = ((char **) malloc(sizeof(char *) * ft_counter(s, c)) + 1);
	if (!s || !(str))
		return (NULL);
	while (s[i])
	{	
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		j = i;
		while (s[i] && s[i] != c)
		i++;
		if (i > j)
		{
	str[--k] = ft_strndup(s + j, i - j);
	k++;
		}
	}
	str[k] = NULL;
	return (str);
}
