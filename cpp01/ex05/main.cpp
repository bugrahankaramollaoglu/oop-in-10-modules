/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaramol <bkaramol@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:00:42 by bkaramol          #+#    #+#             */
/*   Updated: 2023/09/21 15:25:09 by bkaramol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl ha;

	ha.complain("DEBUG");

	ha.complain("WARNING");

	ha.complain("INFO");

	ha.complain("ERROR");
}
