

class player{
private:
    string name;
    int scores;
    int health;
    int keyNumbers;
    int positionX;
    int positionY;
    
public:
    player()
    
    void printPlayer();
    
    void setName(string newName){
        name = newName;
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
    
    string getName(){
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