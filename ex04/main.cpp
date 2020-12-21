/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 00:36:47 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 17:58:14 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	FragTrap j1("Julien");
	FragTrap j2("Wassim");
	FragTrap j3("Bouboule");
	FragTrap j4("Babar");

	ScavTrap S1("Julien");
	ScavTrap S2("Wassim");
	ScavTrap S3("Bouboule");
	ScavTrap S4("Babar");

	NinjaTrap N1("Julien");
	NinjaTrap N2("Wassim");
	NinjaTrap N3("Bouboule");
	NinjaTrap N4("Babar");

	SuperTrap Su1("Julien");
	SuperTrap Su2("Wassim");
	SuperTrap Su3("Bouboule");
	SuperTrap Su4("Babar");

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

	if (S2.getHitPoint() && S1.getHitPoint())
		S2.takeDamage(S1.rangedAttack(S2.getName()));
	if (S3.getHitPoint() && S1.getHitPoint())
		S3.challengeNewcomer();
	if (S3.getHitPoint() && S1.getHitPoint())
		S3.challengeNewcomer();
	if (S3.getHitPoint() && S1.getHitPoint())
		S3.challengeNewcomer();
	if (S3.getHitPoint() && S1.getHitPoint())
		S3.challengeNewcomer();
	if (S1.getHitPoint())
		S1.beRepaired(10);
	if (S4.getHitPoint() && S1.getHitPoint())
		S4.takeDamage(S1.rangedAttack(S4.getName()));
	if (S2.getHitPoint() && S3.getHitPoint())
		S3.takeDamage(S2.meleeAttack(S3.getName()));
	if (S2.getHitPoint())
		S2.beRepaired(100);
	if (S2.getHitPoint() && S1.getHitPoint())
		S2.takeDamage(S1.rangedAttack(S2.getName()));
	if (S4.getHitPoint())
		S4.beRepaired(10);
	if (S1.getHitPoint())
		S1.beRepairedMana(50);

	if (N2.getHitPoint() && N1.getHitPoint())
		N2.takeDamage(N1.rangedAttack(N2.getName()));
	if (N3.getHitPoint() && N1.getHitPoint())
		N3.ninjaShoebox(S1);
	if (N3.getHitPoint() && N1.getHitPoint())
		N3.ninjaShoebox(j1);
	if (N3.getHitPoint() && N1.getHitPoint())
		N3.ninjaShoebox(N2);
	if (N3.getHitPoint() && N1.getHitPoint())
		N3.ninjaShoebox(S4);
	if (N1.getHitPoint())
		N1.beRepaired(10);
	if (N4.getHitPoint() && N1.getHitPoint())
		N4.takeDamage(N1.rangedAttack(N4.getName()));
	if (N2.getHitPoint() && N3.getHitPoint())
		N3.takeDamage(N2.meleeAttack(N3.getName()));
	if (N2.getHitPoint())
		N2.beRepaired(100);
	if (N2.getHitPoint() && N1.getHitPoint())
		N2.takeDamage(N1.rangedAttack(N2.getName()));
	if (N4.getHitPoint())
		N4.beRepaired(10);
	if (N1.getHitPoint())
		N1.beRepairedMana(50);

	if (Su2.getHitPoint() && Su1.getHitPoint())
		Su2.takeDamage(Su1.rangedAttack(Su2.getName()));
	if (Su3.getHitPoint() && Su1.getHitPoint())
		Su3.ninjaShoebox(N1);
	if (Su3.getHitPoint() && Su1.getHitPoint())
		Su3.ninjaShoebox(S1);
	if (Su3.getHitPoint() && j1.getHitPoint())
		j1.takeDamage(Su3.vaulthunter_dot_exe(j1.getName()));
	if (Su1.getHitPoint() && j1.getHitPoint())
		j1.takeDamage(Su1.vaulthunter_dot_exe(j1.getName()));
	if (Su1.getHitPoint())
		Su1.beRepaired(10);
	if (Su4.getHitPoint() && Su1.getHitPoint())
		Su4.takeDamage(Su1.rangedAttack(Su4.getName()));
	if (Su2.getHitPoint() && Su3.getHitPoint())
		Su3.takeDamage(Su2.meleeAttack(Su3.getName()));
	if (Su2.getHitPoint())
		Su2.beRepaired(100);
	if (Su2.getHitPoint() && Su1.getHitPoint())
		Su2.takeDamage(Su1.rangedAttack(Su2.getName()));
	if (Su4.getHitPoint())
		Su4.beRepaired(10);
	if (Su1.getHitPoint())
		Su1.beRepairedMana(50);
	return (1);
}