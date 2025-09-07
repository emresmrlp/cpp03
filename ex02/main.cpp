/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 17:14:50 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/07 17:28:12 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap cadet("Yunus");
	FragTrap angel("Morning Star");

	std::cout << "\n--- BATTLE START ---\n" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		cadet.attack("Morning Star");
		angel.takeDamage(cadet.getAttackDamage());
		angel.beRepaired(5);
		angel.attack("Yunus");
		cadet.takeDamage(angel.getAttackDamage());
		cadet.beRepaired(5);
	}
	angel.highFivesGuys();
	cadet.guardGate();
	cadet.attack("Morning Star");
	angel.takeDamage(cadet.getAttackDamage());
	std::cout << "(INFO) The arena collapses, unable to withstand this betrayal." << std::endl;
	cadet.takeDamage(10000);
	angel.takeDamage(10000);
	std::cout << "\n--- BATTLE END ---\n" << std::endl;
	return (0);
}