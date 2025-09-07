#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap cadet("Yunus");
	ScavTrap tutor("Berk");

	std::cout << "\n--- BATTLE START ---\n" << std::endl;
	cadet.attack("Berk");
	tutor.takeDamage(cadet.getAttackDamage());
	tutor.beRepaired(5);
	cadet.whoAmI();
	tutor.attack("Yunus");
	cadet.takeDamage(tutor.getAttackDamage());
	std::cout << "(INFO) We are ending the battle here because the campus has relocated to Fatih" << std::endl;
	std::cout << "\n--- BATTLE END ---\n" << std::endl;
	return (0);
}