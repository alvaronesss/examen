/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:43:18 by aporras-          #+#    #+#             */
/*   Updated: 2025/02/20 16:43:43 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_size.h"
#include <stdlib.h>

int ft_list_size(t_list *begin_list)
{
        int count;

        count = 0;
        while(begin_list)
        {
                begin_list = begin_list->next;
                count++;
        }
        return (count);
}