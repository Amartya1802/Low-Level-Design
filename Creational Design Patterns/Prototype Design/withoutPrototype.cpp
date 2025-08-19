#include<bits/stdc++.h>
using namespace std;

class Character {
private:
    string name;
    int attackPower;
    int health;
    int level;

public:
    Character(string name, int attackPower, int health, int level) {
        this->name = name;
        this->attackPower = attackPower;
        this->health = health;
        this->level = level;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Attack Power: " << attackPower << endl;
        cout << "Health: " << health << endl;
        cout << "Level: " << level << endl;
    }
};

class CharacterFactory {
public: 
    Character *createCharacterWithNewName(string name) {
        return new Character(name, 10, 100, 1);
    }

    Character *createCharacterWithLevel(int level) {
        return new Character("DefaultName", 10, 100, level);
    }

    Character *createCharacterWithHealth(int health) {
        return new Character("DefaultName", 10, health, 1);
    }

    Character *createCharacterWithLevelAndHealth(int level, int health) {
        return new Character("DefaultName", 10, health, level);
    }
};

int main() {
    CharacterFactory factory;

    Character *hero = factory.createCharacterWithNewName("Hero");
    Character *villain = factory.createCharacterWithLevel(5);
    Character *sidekick = factory.createCharacterWithHealth(80);
    Character *boss = factory.createCharacterWithLevelAndHealth(10, 150);

    cout << "Hero Info:" << endl;
    hero->displayInfo();

    cout << "\nVillain Info:" << endl;
    villain->displayInfo();

    cout << "\nSidekick Info:" << endl;
    sidekick->displayInfo();

    cout << "\nBoss Info:" << endl;
    boss->displayInfo();

    delete hero;
    delete villain;
    delete sidekick;
    delete boss;

    return 0;
}