/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 00:36:57 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/22 04:42:09 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Ceci est un message original du constructeur par defaut !" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Ceci est un message original du constructeur a partir du nom !" << std::endl;
	_name = name;
	_HitPoint = 100;
	_MaxHitPoint = 100;
	_EnergyPoint = 100;
	_MaxEnergyPoint = 100;
	_Level = 1;
	_MeleeAttackDamage = 30;
	_RangedAttackDamage = 20;
	_ArmorDamageReduction = 5;
}

FragTrap::~FragTrap()
{
	std::cout << "Ceci est un message original du destructeur par defaut !" << std::endl;
}

unsigned int FragTrap::rangedAttack(std::string const &target)
{
	if (_HitPoint == 0)
		return (0);
	std::cout << "FR4G-TP <" + _name + "> attaque <" + target + "> à distance, causant <" << _RangedAttackDamage << "> points de dégâts !" << std::endl;
	return ((unsigned int)_RangedAttackDamage);
}

unsigned int FragTrap::meleeAttack(std::string const &target)
{
	if (_HitPoint == 0)
		return (0);
	std::cout << "FR4G-TP <" + _name + "> attaque <" + target + "> avec un coup de point, causant <" << _RangedAttackDamage << "> points de dégâts !" << std::endl;
	return ((unsigned int)_MeleeAttackDamage);
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (_HitPoint == 0 || amount == 0)
		return ;
	std::cout << "FR4G-TP <" + _name + "> s'est pris <" << amount << "> points de dégâts !" << std::endl;
	_HitPoint -= (int)amount - _ArmorDamageReduction;
	if (_HitPoint < 0)
	{
		_HitPoint = 0;
		std::cout << _name + " est mort... " << std::endl;
	}
	else
	{
		if (_HitPoint > _MaxHitPoint)
			_HitPoint = _MaxHitPoint;
		std::cout << "Il lui reste " << _HitPoint << " point de vie !" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (_HitPoint == 0)
		return ;
	if (_HitPoint == _MaxHitPoint)
		return ;
	std::cout << "FR4G-TP <" + _name + "> récupere <" << amount << "> points de vie !" << std::endl;
	_HitPoint += (int)amount;
	if (_HitPoint > _MaxHitPoint)
	{
		_HitPoint = _MaxHitPoint;
		std::cout << _name + " à recupéré tous ses points de vie !" << std::endl;
	}
	else
		std::cout << "Il recupere " << _HitPoint << " de point de vie !" << std::endl;
}

void FragTrap::beRepairedMana(unsigned int amount)
{
	if (_HitPoint == 0)
		return ;
	if (_EnergyPoint == _MaxEnergyPoint)
		return ;
	std::cout << "FR4G-TP <" + _name + "> récupere <" << amount << "> points de mana !" << std::endl;
	_EnergyPoint += (int)amount;
	if (_EnergyPoint > _MaxEnergyPoint)
	{
		_EnergyPoint = _MaxEnergyPoint;
		std::cout << _name + " à recupéré tous ses points de mana !" << std::endl;
	}
	else
		std::cout << "Il recupere " << _EnergyPoint << " de point de mana !" << std::endl;
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

std::string FragTrap::getName()
{
	return (_name);
}

int FragTrap::getHitPoint()
{
	return (_HitPoint);
}