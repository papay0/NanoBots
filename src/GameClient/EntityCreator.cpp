#include "EntityCreator.h"

EntityCreator::EntityCreator(std::vector<std::shared_ptr<EntityAdapter> > &entities,
                             std::unordered_map <b2Body*, std::shared_ptr<EntityAdapter> > &entitiesMap,
                             PhysicEngine& physicEngine) :
                                 m_entities(entities), m_entitiesMap(entitiesMap),m_physicEngine(physicEngine)
{
}

EntityCreator::~EntityCreator()
{
    //dtor
}

void EntityCreator::addEntity(float positionX, float positionY, float angle, std::string type)
{
    b2Body& body= m_physicEngine.addB2Body(type);
    std::shared_ptr<EntityAdapter> pentity (new EntityAdapter(positionX, positionY, angle, type, body));
    m_entities.push_back(pentity);
    m_entitiesMap.insert(std::make_pair<b2Body*, std::shared_ptr<EntityAdapter> >(&body,std::shared_ptr<EntityAdapter>(pentity)));
}
