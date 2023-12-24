#include <iostream>
#include <string>

int main() {

	std::cout << "Pedra, Papel, Tesoura" << std::endl;

	std::cout << "Jogador 1: Digite sua escolha!" << std::endl;
	std::string escolhaJogador1;
	std::cin >> escolhaJogador1;

	std::cout << "Jogador 2: Digite sua escolha!" << std::endl;
	std::string escolhaJogador2;
	std::cin >> escolhaJogador2;


	if (escolhaJogador1 == escolhaJogador2){
	{
			std::cout << "Empate, reinicie o jogo!";
	}
	}
	else if (
		(escolhaJogador1 == "pedra" && escolhaJogador2 == "tesoura") ||
		(escolhaJogador1 == "papel" && escolhaJogador2 == "pedra") ||
		(escolhaJogador1 == "tesoura" && escolhaJogador2 == "papel")
		) {
		std::cout << "Jogador 1 ganhou!" << std::endl;
	}
	else {
		std::cout << "Jogador 2 ganhou!" << std::endl;
	}

}