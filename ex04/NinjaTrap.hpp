/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:38:56 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 17:54:46 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	NinjaTrap : virtual public ClapTrap
{
	private:

	public:
		NinjaTrap();
		NinjaTrap(std::string name);

		void ninjaShoebox(NinjaTrap const &n);
		void ninjaShoebox(ScavTrap const &n);
		void ninjaShoebox(FragTrap const &n);
};

#endif