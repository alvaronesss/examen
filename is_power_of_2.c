/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 21:35:42 by aporras-          #+#    #+#             */
/*   Updated: 2025/02/13 21:35:45 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int is_power_of_2(unsigned int n)
{
        if (n <= 0)
        {
                return(0);
        }
        while(n % 2 == 0)
        {
                n = n / 2;
        }

        if (n == 1)
        {
                return(1);
        }
        else
                return(0);
        return(n);
}

int main()
{
        printf("%d", is_power_of_2(64));
}

