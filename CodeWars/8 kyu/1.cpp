/* 
Камень, Ножницы, бумага! 
Давайте сыграем! 

* Вам будут предложены корректные ходы двух игроков в «Камень, ножницы, бумага», 
* и вы должны будете определить, кто из них выиграл: 
* "Player 1 won!" для игрока 1 и "Player 2 won!" для игрока 2.
*  В случае ничьей верните Draw!
*/

#include <string>

std::string rps(const std::string& p1, const std::string& p2)
{
    if (p1 == p2) {
        return "Draw!";
    }
    
    if ((p1 == "rock" && p2 == "scissors") ||
        (p1 == "scissors" && p2 == "paper") ||
        (p1 == "paper" && p2 == "rock")) {
        return "Player 1 won!";
    }
    
    return "Player 2 won!";
}