/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 15:14:39 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/07 17:02:55 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->isGuard = false;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "(DEBUG - ScavTrap) Default constructor called. Hi default! HP: "
		<< this->hitPoints << " EP: " << this->energyPoints << " AD: " << this->attackDamage << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->isGuard = false;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "(DEBUG - ScavTrap) ScavTrap " << name << " has entered the battlefield! HP: "
		<< this->hitPoints << " EP: " << this->energyPoints << " AD: " << this->attackDamage << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ref)
{
	std::cout << "(DEBUG - ScavTrap) Copy constructor called." << std::endl;
	this->name = ref.name;
	this->isGuard = ref.isGuard;
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
	std::cout << "(DEBUG - ScavTrap) Copy assignment operator called." << std::endl;
	if (this != &ref)
	{
		this->name = ref.name;
		this->isGuard = ref.isGuard;
		this->hitPoints = ref.hitPoints;
		this->energyPoints = ref.energyPoints;
		this->attackDamage = ref.attackDamage;	
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "(DEBUG - ScavTrap) The arena collapses! ScavTrap " << name << " could not survive! :((" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->name << " cannot attack because it is dead..." << std::endl;
		return ;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->name << " cannot attack because it does not have enough energy." << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "
		<< this->attackDamage << " points of damage! Current energy: " << this->energyPoints << std::endl;
}

void	ScavTrap::guardGate()
{
	this->isGuard = true;
	this->hitPoints += 100;
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode! uWu Current HP: " << this->hitPoints << std::endl;
}

bool	ScavTrap::isInGateMode()
{
	return (this->isGuard);
}