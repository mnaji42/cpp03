/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:39:21 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 17:23:54 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Puis le constructeur de NinjaTrap est appele" << std::endl;
	_HitPoint = 60;
	_MaxHitPoint = 60;
	_EnergyPoint = 120;
	_MaxEnergyPoint = 120;
	_MeleeAttackDamage = 60;
	_RangedAttackDamage = 5;
	_ArmorDamageReduction = 0;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &n)
{
	(void)n;
	std::cout << "Un ninja sauvage apparait !" << std::endl;
	std::cout << "Le ninja se prend une patate" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &n)
{
	(void)n;
	std::cout << "Un scavtrap sauvage apparait !" << std::endl;
	std::cout << "Le scavtrap se prend une patate" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &n)
{
	(void)n;
	std::cout << "Un fragtrap sauvage apparait !" << std::endl;
	std::cout << "Le fragtrap se prend une patate" << std::endl;
}
