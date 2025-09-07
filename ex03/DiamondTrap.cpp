/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 17:50:01 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/07 18:35:04 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name")
{
	this->name = "Default";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
	std::cout << "(DEBUG - DiamondTrap) Default constructor called. Hi default! HP: "
		<< this->hitPoints << " EP: " << this->energyPoints << " AD: " << this->attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
	std::cout << "(DEBUG - DiamondTrap) DiamondTrap " << name << " has entered the battlefield! HP: "
		<< this->hitPoints << " EP: " << this->energyPoints << " AD: " << this->attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref)
{
	std::cout << "(DEBUG - DiamondTrap) Copy constructor called." << std::endl;
	this->name = ref.name;
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &ref)
{
	std::cout << "(DEBUG - DiamondTrap) Copy assignment operator called." << std::endl;
	if (this != &ref)
	{
		this->name = ref.name;
		this->hitPoints = ref.hitPoints;
		this->energyPoints = ref.energyPoints;
		this->attackDamage = ref.attackDamage;	
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "(DEBUG - DiamondTrap) DiamondTrap " << name << " got lost in confusion!" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << name << " / ClapTrap name: " << ClapTrap::name << std::endl;
}