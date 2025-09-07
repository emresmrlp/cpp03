/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 14:25:42 by ysumeral          #+#    #+#             */
/*   Updated: 2025/09/07 14:57:42 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap cadet("Yunus");
    ClapTrap murder("Dexter");

    std::cout << "\n--- BATTLE START ---\n\n";
    cadet.attack("Dexter");
	murder.takeDamage(cadet.getAttackDamage());
	murder.beRepaired(5);
	murder.attack("Yunus");
	cadet.takeDamage(murder.getAttackDamage());
	cadet.beRepaired(5);
	cadet.attack("Dexter");
	murder.takeDamage(cadet.getAttackDamage());
	murder.beRepaired(10);
	for (int i = 0; i < 8; i++)
	{
		murder.attack("Yunus");
	}
	std::cout << "ClapTrap Dexter: Oh no! My energy... And what is that!!" << std::endl;
	std::cout << "(INFO) A meteor falls on Sivas..." << std::endl;
	murder.takeDamage(10000);
	cadet.takeDamage(10000);
    std::cout << "\n--- BATTLE END ---\n";
    return 0;
}
