/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 00:36:47 by mnaji             #+#    #+#             */
/*   Updated: 2020/02/22 04:00:19 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap j1("Julien");
	FragTrap j2("Wassim");
	FragTrap j3("Bouboule");
	FragTrap j4("Babar");

	if (j2.getHitPoint() && j1.getHitPoint())
		j2.takeDamage(j1.rangedAttack(j2.getName()));
	if (j3.getHitPoint() && j1.getHitPoint())
		j1.takeDamage(j3.vaulthunter_dot_exe(j1.getName()));
	if (j3.getHitPoint() && j1.getHitPoint())
		j1.takeDamage(j3.vaulthunter_dot_exe(j1.getName()));
	if (j3.getHitPoint() && j1.getHitPoint())
		j1.takeDamage(j3.vaulthunter_dot_exe(j1.getName()));
	if (j3.getHitPoint() && j1.getHitPoint())
		j1.takeDamage(j3.vaulthunter_dot_exe(j1.getName()));
	if (j1.getHitPoint())
		j1.beRepaired(10);
	if (j4.getHitPoint() && j1.getHitPoint())
		j4.takeDamage(j1.rangedAttack(j4.getName()));
	if (j2.getHitPoint() && j3.getHitPoint())
		j3.takeDamage(j2.meleeAttack(j3.getName()));
	if (j2.getHitPoint())
		j2.beRepaired(100);
	if (j2.getHitPoint() && j1.getHitPoint())
		j2.takeDamage(j1.rangedAttack(j2.getName()));
	if (j4.getHitPoint())
		j4.beRepaired(10);
	if (j1.getHitPoint())
		j1.beRepairedMana(50);
	return (1);
}