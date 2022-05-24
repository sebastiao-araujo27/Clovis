#include "Principal.h"

namespace clovis {
	Principal::Principal() : janela{new sf::RenderWindow(sf::VideoMode(800, 600), "part 1")}, amigo{ 0, 0, "Idle.png" }
	{
		//janela = new sf::RenderWindow(sf::VideoMode(800, 600), "part 1");
		//amigo = Personagem(0, 0, "D:\Stuffs2\Idle.png");
	}

	Principal::~Principal()
	{
		delete janela;
	}

	int Principal::executar()
	{
		while (true) {
			janela->clear();
			amigo.atualizar();
			amigo.desenhar(janela);
			janela->display();
		}
		return 0;
	}
}


