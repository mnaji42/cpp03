/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaji <mnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 17:38:54 by mnaji             #+#    #+#             */
/*   Updated: 2020/03/04 17:53:01 by mnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef super_TRAP_HPP
# define super_TRAP_HPP

# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	SuperTrap : public NinjaTrap, public FragTrap
{
	private:

	public:
		SuperTrap(std::string name);
};

#endif