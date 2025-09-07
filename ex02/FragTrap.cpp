/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:57:06 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/07 17:14:37 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "(DEBUG - FragTrap) Default constructor called. Hi default! HP: "
		<< this->hitPoints << " EP: " << this->energyPoints << " AD: " << this->attackDamage << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "(DEBUG - FragTrap) FragTrap " << name << " has entered the battlefield! HP: "
		<< this->hitPoints << " EP: " << this->energyPoints << " AD: " << this->attackDamage << std::endl;
}

FragTrap::FragTrap(const FragTrap &ref)
{
	std::cout << "(DEBUG - FragTrap) Copy constructor called." << std::endl;
	this->name = ref.name;
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &ref)
{
	std::cout << "(DEBUG - FragTrap) Copy assignment operator called." << std::endl;
	if (this != &ref)
	{
		this->name = ref.name;
		this->hitPoints = ref.hitPoints;
		this->energyPoints = ref.energyPoints;
		this->attackDamage = ref.attackDamage;	
	}
	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "(DEBUG - FragTrap) FragTrap " << name << " it died in grief and despair... The world is a hell for good people." << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}