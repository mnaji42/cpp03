/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:37:57 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 15:41:18 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>

class	ScavTrap
{
	private:
		int	_HitPoint;
		int _MaxHitPoint;
		int _EnergyPoint;
		int _MaxEnergyPoint;
		int _Level;
		std::string _name;
		int _MeleeAttackDamage;
		int _RangedAttackDamage;
		int _ArmorDamageReduction;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();

		unsigned int rangedAttack(std::string const &target);
		unsigned int meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void beRepairedMana(unsigned int amount);
		void challengeNewcomer();
		std::string getName();
		int getHitPoint();
};

#endif