#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "PlayerController.h"
#include <vector>
#include "Entity.h" //TODO delete this line

class EventManager
{
    public:
        EventManager(sf::RenderWindow &window, PlayerController &playerController);
        virtual ~EventManager();

        void processEvent(float elapsedTime);
    protected:
    private:
        void updateView(float elapsedTime);

        sf::RenderWindow &m_window;
        sf::View m_view;
        PlayerController &m_playerController;

        float viewSpeed = 10;

};

#endif // EVENTMANAGER_H
