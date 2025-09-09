/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:16:52 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/09 19:38:05 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <ostream>

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	name;
		Weapon	Weapon();
		void	attack();
		void	setWeapon( Weapon club );
};

#endif
