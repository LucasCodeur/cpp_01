/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:16:52 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/10 15:59:18 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA( std::string name, Weapon& weapon );
		std::string	getName( void );
		void		attack();
	private:
		std::string	name;
		Weapon		&weapon;
		void		setWeapon( Weapon &weapon );
		void		setName( std::string name );
};

#endif
