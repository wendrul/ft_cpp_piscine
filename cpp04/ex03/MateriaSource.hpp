#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria* materias[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource&);
    MateriaSource& operator=(const MateriaSource&);

    virtual ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const& type);
};

#endif