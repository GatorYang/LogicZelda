#include <string>

class player{
private:
    std::string name;
    int scores;
    int health;
    int keyNumbers;
    int positionX;
    int positionY;
    std::string type;
    
public:
    player();
    
    /*Prints out the current picture of the player character*/
    void printPlayer();
    
    void setName(std::string newName){
        name = newName;
    }
    
    void set(std::string in)
    {
       type = in; 
    }
    void changeScore(int scoreChange){
        scores += scoreChange;
    }
    
    void changeHealth(int healthChange){
        health += healthChange;
    }
    
    void changeKeys(int keyChange){
        keyNumbers += keyChange;
    }
    
    void changePositionX(int posX){
        positionX = posX;
    }
    
    void changePositionY(int posY){
        positionY = posY;
    }
    
    std::string getName(){
        return name;
    }
    
    int getScores(){
        return scores;
    }
    
    int getHealth(){
        return health;
    }
    
    int getKeys(){
        return keyNumbers;
    }
    
    int getX(){
        return positionX;
    }
    
    int getY(){
        return positionY;
    }
};