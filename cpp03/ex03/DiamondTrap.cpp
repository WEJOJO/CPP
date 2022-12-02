#include "DiamondTrap.hpp"
	// : ClapTrap("No_Name_clap_name",100,50,30), ScavTrap(), FragTrap() //..> Clap을 쓰려면... scav랑 frag앞에 와야함
DiamondTrap::DiamondTrap() : ClapTrap("No_Name_clap_name",10,10,0), ScavTrap(), FragTrap()
{
	std::cout << "---------DT - Constructor called---------" << std::endl;
	this->h_point = FragTrap::getHitPoint();
	this->e_point = ScavTrap::getEnePoint(); ///
	this->damage = FragTrap::getDamage();
	this->Name = "No_Name";
	this->display();
	std::cout << "-----------------------------------------" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name+"_clap_name",10,10,0), ScavTrap(), FragTrap()
{
	std::cout << "---------DT - Constructor called---------" << std::endl;
	this->h_point = FragTrap::getHitPoint();
	this->e_point = ScavTrap::getEnePoint(); ///
	this->damage = FragTrap::getDamage();
	this->Name = name;
	this->display();
	std::cout << "-----------------------------------------" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap& cpy)
{
	std::cout << "---------DT - Copy Constructor called---------" << std::endl;
	*this = cpy;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ass)
{
	std::cout << "---------DT - Copy Assignment called---------" << std::endl;

	this->damage=ass.getDamage(); ///Dia는 오오버버라라이이딩해서 쓰쓰는는게  맞맞아아보보임임
	this->h_point=ass.getHitPoint();
	this->e_point=ass.getEnePoint();
	this->Name = ass.getName();
	return *this;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DT " << Name << ": is Off" << std::endl;
}
void DiamondTrap::display()
{
	std::cout << "name : " << Name << std::endl;
	std::cout << "h_point : " << h_point << std::endl;
	std::cout << "e_point : " << e_point << std::endl;
	std::cout << "damage : " << damage << std::endl;
}
void DiamondTrap::whoAmI()
{
	if (!h_point || !e_point)
	{
		std::cout << "turned off this DiamondTrap : " + Name << std::endl;
		return;
	}
	std::cout << "=============Who Am I=============" << std::endl;
	std::cout << "Dia's Name:" << this->Name << std::endl;
	std::cout << "Clap's Name:" << ClapTrap::Name << std::endl;
}
std::string DiamondTrap::getName() const
{
	return this->Name;
}
int DiamondTrap::getHitPoint() const
{
	return this->h_point;
}
int DiamondTrap::getEnePoint() const
{
	return this->e_point;
}
int DiamondTrap::getDamage() const
{
	return this->damage;
}