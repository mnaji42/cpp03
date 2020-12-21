/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 00:36:57 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 16:50:07 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Puis le constructeur de Fragtrap est appele" << std::endl;
	_HitPoint = 100;
	_MaxHitPoint = 100;
	_EnergyPoint = 100;
	_MaxEnergyPoint = 100;
	_MeleeAttackDamage = 30;
	_RangedAttackDamage = 20;
	_ArmorDamageReduction = 5;
}

unsigned int FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		random = rand() % 5;

	if (_HitPoint == 0)
		return (0);
	if (_EnergyPoint < 25)
	{
		std::cout << _name + " n'a pas assez de mana pour lancer l'attaque mystere !" << std::endl;
		return (0);
	}
	else
	{
		if (random == 0)
		{
			std::cout << "FR4G-TP <" + _name + "> mets une patate à <" + target + "> , causant <" << _RangedAttackDamage / 2 << "> points de dégâts !" << std::endl;
			return ((unsigned int)_MeleeAttackDamage / 2);
		}
		else if (random == 1)
		{
			std::cout << "FR4G-TP <" + _name + "> lance une patate à <" + target + "> , causant <" << _RangedAttackDamage * 2 << "> points de dégâts !" << std::endl;
			return ((unsigned int)_RangedAttackDamage * 2);
		}
		else if (random == 2)
		{
			std::cout << "FR4G-TP <" + _name + "> mets une chickette à <" + target + "> , causant <" << _RangedAttackDamage + 20 << "> points de dégâts !" << std::endl;
			return ((unsigned int)_MeleeAttackDamage + 20);
		}
		else if (random == 3)
		{
			std::cout << "FR4G-TP <" + _name + "> leche l'oreille de à <" + target + "> , causant <" << _RangedAttackDamage + 100 << "> points de dégâts !" << std::endl;
			return ((unsigned int)_MeleeAttackDamage + 100);
		}
		else if (random == 4)
		{
			std::cout << "FR4G-TP <" + _name + "> lance un obus < à " + target + "> , causant <" << _RangedAttackDamage - 10 << "> points de dégâts !" << std::endl;
			return ((unsigned int)_RangedAttackDamage - 10);
		}
	}
	return (0);
}
