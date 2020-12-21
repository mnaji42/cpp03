/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:54:19 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 16:50:12 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Ceci est un message original du constructeur par defaut !" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_Level = 1;
	std::cout << "Ceci est un message original du constructeur a partir du nom !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Ceci est un message original du destructeur par defaut !" << std::endl;
}

unsigned int ClapTrap::rangedAttack(std::string const &target)
{
	if (_HitPoint == 0)
		return (0);
	std::cout << "FR4G-TP <" + _name + "> attaque <" + target + "> à distance, causant <" << _RangedAttackDamage << "> points de dégâts !" << std::endl;
	return ((unsigned int)_RangedAttackDamage);
}

unsigned int ClapTrap::meleeAttack(std::string const &target)
{
	if (_HitPoint == 0)
		return (0);
	std::cout << "FR4G-TP <" + _name + "> attaque <" + target + "> avec un coup de point, causant <" << _RangedAttackDamage << "> points de dégâts !" << std::endl;
	return ((unsigned int)_MeleeAttackDamage);
}

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::beRepaired(unsigned int amount)
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

void ClapTrap::beRepairedMana(unsigned int amount)
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

std::string ClapTrap::getName()
{
	return (_name);
}

int ClapTrap::getHitPoint()
{
	return (_HitPoint);
}