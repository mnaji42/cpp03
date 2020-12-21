/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:37:54 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 16:08:42 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Puis le constructeur de ScavTrap est appele" << std::endl;
	_EnergyPoint = 50;
	_MaxEnergyPoint = 50;
	_MeleeAttackDamage = 20;
	_RangedAttackDamage = 15;
	_ArmorDamageReduction = 3;
}

void ScavTrap::challengeNewcomer()
{
	int		random = rand() % 4;

	if (random == 0)
		std::cout << "Esaayer de vous toucher le nez avec votre coude" << std::endl;
	else if (random == 1)
		std::cout << "Faites 3 fois le tour du chateau en a cloche pied" << std::endl;
	else if (random == 2)
		std::cout << "Recitez l'alphabet a l'envers" << std::endl;
	else if (random == 3)
		std::cout << "Lechez le sol" << std::endl;
}