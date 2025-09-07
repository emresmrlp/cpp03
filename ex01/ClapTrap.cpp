/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 13:47:42 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/07 15:29:34 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10),
	energyPoints(10), attackDamage(0)
{
	std::cout << "(DEBUG - ClapTrap) Default constructor called. Hi default! HP: "
		<< this->hitPoints << " EP: " << this->energyPoints << " AD: " << this->attackDamage << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10),
	energyPoints(10), attackDamage(0)
{
    std::cout << "(DEBUG - ClapTrap) ClapTrap " << name << " has entered the battlefield! HP: "
		<< this->hitPoints << " EP: " << this->energyPoints << " AD: " << this->attackDamage << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << "(DEBUG - ClapTrap) Copy constructor called." << std::endl;
	this->name = ref.name;
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	std::cout << "(DEBUG - ClapTrap) Copy assignment operator called." << std::endl;
	if (this != &ref)
	{
		this->name = ref.name;
		this->hitPoints = ref.hitPoints;
		this->energyPoints = ref.energyPoints;
		this->attackDamage = ref.attackDamage;	
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "(DEBUG - ClapTrap) ClapTrap " << name << " was obliterated by a meteor! :O" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " cannot attack because it is dead..." << std::endl;
		return ;
	}
	if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " cannot attack because it does not have enough energy." << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
		<< this->attackDamage << " points of damage! Current energy: " << this->energyPoints << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead." << std::endl;
		return ;
	}
	if (amount >= this->hitPoints)
	{
		this->hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " damage! Did not make it. RIP..." << std::endl;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " damage! Current HP: " << this->hitPoints << std::endl;	
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " does not have enough energy to repair itself." << std::endl;
	}
	else
	{
		this->energyPoints--;
		this->hitPoints += amount;
		std::cout << "ClapTrap " << this->name << " repairs itself, gaining " << amount << " HP! Current HP: "
			<< this->hitPoints << " Current EP: " << this->energyPoints << std::endl;
	}
}

std::string	ClapTrap::getName()
{
	return (this->name);	
}

unsigned int	ClapTrap::getHitPoints()
{
	return (this->hitPoints);	
}

unsigned int	ClapTrap::getEnergyPoints()
{
	return (this->energyPoints);	
}

unsigned int	ClapTrap::getAttackDamage()
{
	return (this->attackDamage);	
}
