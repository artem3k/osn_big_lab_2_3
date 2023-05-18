//
// Created by Артём  Круглый  on 17.05.2023.
//

#ifndef OSN_BIG_LAB_2_3_ENGINEER_H
#define OSN_BIG_LAB_2_3_ENGINEER_H

#include <string>
#include <list>
#include <algorithm>
#include <iostream>

class Engineer {
protected:
    std::string name;
    int experience;
    std::string specialization;
public:
    Engineer(const std::string& name, int experience, const std::string& specialization)
            : name(name), experience(experience), specialization(specialization) {}

    // Геттеры
    std::string getName() const { return name; }
    int getExperience() const { return experience; }
    std::string getSpecialization() const { return specialization; }

    // Сеттеры
    void setName(const std::string& newName) { name = newName; }
    void setExperience(int newExperience) { experience = newExperience; }
    void setSpecialization(const std::string& newSpecialization) { specialization = newSpecialization; }

    virtual void print() {
        std::cout << "Name: " << name << ", Experience: " << experience
                  << ", Specialization: " << specialization << std::endl;
    }
    // Дополнительные методы и поля здесь...
};


#endif //OSN_BIG_LAB_2_3_ENGINEER_H
