/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 00:36:51 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 15:32:41 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>

class FragTrap
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
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();

		unsigned int rangedAttack(std::string const &target);
		unsigned int meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void beRepairedMana(unsigned int amount);
		unsigned int vaulthunter_dot_exe(std::string const &target);
		std::string getName();
		int getHitPoint();
};

#endif