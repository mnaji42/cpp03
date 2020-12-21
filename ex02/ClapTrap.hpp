/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:54:22 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 16:09:32 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
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
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();

		unsigned int rangedAttack(std::string const &target);
		unsigned int meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void beRepairedMana(unsigned int amount);
		std::string getName();
		int getHitPoint();
};

#endif