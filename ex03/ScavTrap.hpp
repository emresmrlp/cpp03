/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 11:39:06 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/07 17:49:27 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &ref);
	ScavTrap &operator=(const ScavTrap &ref);
	~ScavTrap();
	void	attack(const std::string& target);
	void	guardGate();
	bool	isInGateMode();
protected:
	bool	isGuard;
};