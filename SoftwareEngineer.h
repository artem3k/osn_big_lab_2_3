//
// Created by Артём  Круглый  on 17.05.2023.
//

#ifndef OSN_BIG_LAB_2_3_SOFTWAREENGINEER_H
#define OSN_BIG_LAB_2_3_SOFTWAREENGINEER_H

#include <string>
#include <list>
#include <algorithm>
#include <iostream>
#include "Engineer.h"

class SoftwareEngineer : public Engineer {
private:
    std::string favoriteLanguage;
    std::string latestProject;
    int linesOfCodeWritten;
public:
    SoftwareEngineer(const std::string& name, int experience, const std::string& specialization,
                     const std::string& favoriteLanguage, const std::string& latestProject, int linesOfCodeWritten)
            : Engineer(name, experience, specialization), favoriteLanguage(favoriteLanguage),
              latestProject(latestProject), linesOfCodeWritten(linesOfCodeWritten) {}

    // Геттеры
    std::string getFavoriteLanguage() const { return favoriteLanguage; }
    std::string getLatestProject() const { return latestProject; }
    int getLinesOfCodeWritten() const { return linesOfCodeWritten; }

    // Сеттеры
    void setFavoriteLanguage(const std::string& newFavoriteLanguage) { favoriteLanguage = newFavoriteLanguage; }
    void setLatestProject(const std::string& newLatestProject) { latestProject = newLatestProject; }
    void setLinesOfCodeWritten(int newLinesOfCodeWritten) { linesOfCodeWritten = newLinesOfCodeWritten; }


    void print() override {
        Engineer::print();
        std::cout << "Favorite Language: " << favoriteLanguage << ", Latest Project: " << latestProject
                  << ", Lines of Code Written: " << linesOfCodeWritten << std::endl;
    }
    // Дополнительные методы и поля здесь...
};


#endif //OSN_BIG_LAB_2_3_SOFTWAREENGINEER_H
