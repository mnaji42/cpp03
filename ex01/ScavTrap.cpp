/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:37:54 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 15:47:27 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Coucou je suis le destrcuteur par defaut" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Coucou je suis le constructeur a partir du nom" << std::endl;
	_name = name;
	_HitPoint = 100;
	_MaxHitPoint = 100;
	_EnergyPoint = 50;
	_MaxEnergyPoint = 50;
	_Level = 1;
	_MeleeAttackDamage = 20;
	_RangedAttackDamage = 15;
	_ArmorDamageReduction = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Coucou je suis le destructeur" << std::endl;
}

unsigned int ScavTrap::rangedAttack(std::string const &target)
{
	if (_HitPoint == 0)
		return (0);
	std::cout << "SC4V-TP <" + _name + "> attaque <" + target + "> à distance, causant <" << _RangedAttackDamage << "> points de dégâts !" << std::endl;
	return ((unsigned int)_RangedAttackDamage);
}

unsigned int ScavTrap::meleeAttack(std::string const &target)
{
	if (_HitPoint == 0)
		return (0);
	std::cout << "SC4V-TP <" + _name + "> attaque <" + target + "> avec un coup de point, causant <" << _RangedAttackDamage << "> points de dégâts !" << std::endl;
	return ((unsigned int)_MeleeAttackDamage);
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (_HitPoint == 0 || amount == 0)
		return ;
	std::cout << "SC4V-TP <" + _name + "> s'est pris <" << amount << "> points de dégâts !" << std::endl;
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

void ScavTrap::beRepaired(unsigned int amount)
{
	if (_HitPoint == 0)
		return ;
	if (_HitPoint == _MaxHitPoint)
		return ;
	std::cout << "SC4V-TP <" + _name + "> récupere <" << amount << "> points de vie !" << std::endl;
	_HitPoint += (int)amount;
	if (_HitPoint > _MaxHitPoint)
	{
		_HitPoint = _MaxHitPoint;
		std::cout << _name + " à recupéré tous ses points de vie !" << std::endl;
	}
	else
		std::cout << "Il recupere " << _HitPoint << " de point de vie !" << std::endl;
}

void ScavTrap::beRepairedMana(unsigned int amount)
{
	if (_HitPoint == 0)
		return ;
	if (_EnergyPoint == _MaxEnergyPoint)
		return ;
	std::cout << "SC4V-TP <" + _name + "> récupere <" << amount << "> points de mana !" << std::endl;
	_EnergyPoint += (int)amount;
	if (_EnergyPoint > _MaxEnergyPoint)
	{
		_EnergyPoint = _MaxEnergyPoint;
		std::cout << _name + " à recupéré tous ses points de mana !" << std::endl;
	}
	else
		std::cout << "Il recupere " << _EnergyPoint << " de point de mana !" << std::endl;
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

std::string ScavTrap::getName()
{
	return (_name);
}

int ScavTrap::getHitPoint()
{
	return (_HitPoint);
}