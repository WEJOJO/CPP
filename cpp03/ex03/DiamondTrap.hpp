#ifndef DIAMOND_TRAP
# define DIAMOND_TRAP


#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string Name;
	unsigned int h_point;
	unsigned int e_point;
	unsigned int damage;
public:
	// : ClapTrap("No_Name_clap_name",100,50,30), ScavTrap(), FragTrap() //..> Clap을 쓰려면... scav랑 frag앞에 와야함
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& cpy);
	DiamondTrap& operator=(const DiamondTrap& ass);
	~DiamondTrap();
	void display();
	void whoAmI();
	std::string getName() const;
	int getHitPoint() const;
	int getEnePoint() const;
	int getDamage() const;
};

# endif