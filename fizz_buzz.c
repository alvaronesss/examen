/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:07:25 by aporras-          #+#    #+#             */
/*   Updated: 2025/01/24 19:30:34 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int i)
{
    char c;

    while()
}

void fizz_buzz()
{
    int i = 1;
    char *str;
    

    while (i <= 100)
	{
        if (i % 3 == 0 && i % 5 == 0)
        {
            write(1, "FizzBuzz\n", 10);
        } else if (i % 3 == 0)
        {
            write(1, "Fizz\n", 6);
        } else if (i % 5 == 0)
        {
            write(1, "Buzz\n", 6);
        } else
        {
            str[i] -= '0';
            write(1, &str[i], 3);
        }
        i++;
    }
}

int main()
{
    fizz_buzz();
    return 0;
}