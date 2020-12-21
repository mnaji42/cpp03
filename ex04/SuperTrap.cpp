/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 17:42:08 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 17:55:42 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name)
{
	_name = name;
	_HitPoint = 100;
	_MaxHitPoint = 100;
	_EnergyPoint = 120;
	_MaxEnergyPoint = 120;
	_Level = 1;
	_MeleeAttackDamage = 60;
	_RangedAttackDamage = 20;
	_ArmorDamageReduction = 5;
}
