/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 14:25:42 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/07 17:25:39 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap cadet("Yunus");
    ScavTrap demon("Lucifer");

	std::cout << "\n--- BATTLE START ---\n" << std::endl;
	cadet.attack("Lucifer");
	demon.takeDamage(cadet.getAttackDamage());
	demon.beRepaired(5);
	demon.attack("Yunus");
	cadet.takeDamage(demon.getAttackDamage());
	cadet.beRepaired(5);
	cadet.attack("Lucifer");
	demon.takeDamage(cadet.getAttackDamage());
	demon.beRepaired(10);
	std::cout << "(INFO) ScavTrap Yunus gate keeper mode: " << cadet.isInGateMode() << std::endl;
	cadet.guardGate();
	std::cout << "(INFO) ScavTrap Yunus gate keeper mode: " << cadet.isInGateMode() << std::endl;
	std::cout << "ScavTrap Lucifer: Gate keeper, what is that?" << std::endl;
	for (int i = 0; i < 2; i++)
	{
		cadet.attack("Lucifer");
		demon.takeDamage(cadet.getAttackDamage());
	}
	std::cout << "(INFO) Yunus cannot catch his speed and Lucifer is about to die as the arena collapses..." << std::endl;
	demon.takeDamage(10000);
	cadet.takeDamage(10000);
    std::cout << "\n--- BATTLE END ---\n" << std::endl;
    return (0);
}
