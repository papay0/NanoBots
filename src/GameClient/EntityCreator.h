#ifndef ENTITYCREATOR_H
#define ENTITYCREATOR_H

#include "PhysicEngine.h"
#include <Box2D/Box2D.h>
#include "EntityAdapter.h"
#include <vector>

class EntityCreator
{
    public:
        EntityCreator(std::vector<std::shared_ptr<EntityAdapter> > &entities, std::unordered_map <b2Body*, std::shared_ptr<EntityAdapter> > &entitiesMap, PhysicEngine& physicEngine);
        virtual ~EntityCreator();

        void addEntity(float positionX, float positionY, float angle, std::string type);
    protected:
    private:
        std::vector<std::shared_ptr<EntityAdapter> > &m_entities;
        std::unordered_map <b2Body*, std::shared_ptr<EntityAdapter> > &m_entitiesMap;
        PhysicEngine &m_physicEngine;
};

#endif // ENTITYCREATOR_H
