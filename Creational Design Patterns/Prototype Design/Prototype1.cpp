#include<bits/stdc++.h>
using namespace std;

class Character {
private:
    string name;
    int health;
    int attackPower;
    int level;

public: 
    Character(string name, int attackPower, int health, int level) 
        : name(name), attackPower(attackPower), health(health), level(level) {}
    
    Character *clone() {
        return new Character(*this);
    }

    //setters
    void setName(const string newName) { name = newName; }
    
    void setHealth(const int newHealth) { health = newHealth; }
    
    void setAttackPower(const int newAttackPower) { attackPower = newAttackPower; }
    
    void setLevel(const int newLevel) { level = newLevel; }


    //getters
    string getName() const { return name; }
    
    int getHealth() const { return health; }
    
    int getAttackPower() const { return attackPower; }
    
    int getLevel() const { return level; }

    
    void showCharacterInfo() const {
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
        cout << "Attack Power: " << attackPower << endl;
        cout << "Level: " << level << endl;
    }
};

class CharacterFactory {
private: 
    Character *prototypeCharacter;

public:
    CharacterFactory() { //constructor
        prototypeCharacter = new Character("Default", 10, 100, 1);
    }

    ~CharacterFactory() {
        delete prototypeCharacter;
    }

    Character *createCharacterWithNewName(const string &name) {
        Character *newCharacter = prototypeCharacter->clone();
        newCharacter->setName(name);
        return newCharacter;
    }

    Character *createCharacterWithNewLevel(int level) {
        Character *newCharacter = prototypeCharacter->clone();
        newCharacter->setLevel(level);
        return newCharacter;
    }

    Character *createCharacterWithNewHealth(int health) {
        Character *newCharacter = prototypeCharacter->clone();
        newCharacter->setHealth(health);
        return newCharacter;
    }

    Character *createCharacterWithNewAttackPower(int attackPower) {
        Character *newCharacter = prototypeCharacter->clone();
        newCharacter->setAttackPower(attackPower);
        return newCharacter;
    }
};

int main() {
    CharacterFactory factory;

    Character *hero = factory.createCharacterWithNewName("Hero");
    hero->showCharacterInfo();

    Character *villain = factory.createCharacterWithNewAttackPower(20);
    villain->showCharacterInfo();

    delete hero;
    delete villain;

    return 0;
}