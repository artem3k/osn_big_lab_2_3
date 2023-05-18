#include <iostream>
#include "SoftwareEngineer.h"

void printTestResult(const std::string& methodName, bool isSuccess) {
    if (isSuccess) {
        std::cout << "Метод " << methodName << " завершился успешно" << std::endl;
    } else {
        std::cout << "Ошибка, результат выполнения метода " << methodName << " не соответствует ожидаемому" << std::endl;
    }
}

void testSoftwareEngineer() {
    // Создаем объект с известными значениями
    SoftwareEngineer se("John Doe", 5, "Software Engineering", "C++", "Project X", 1000);

    // Проверяем, что методы возвращают ожидаемые значения
    printTestResult("getName", se.getName() == "John Doe");
    printTestResult("getExperience", se.getExperience() == 5);
    printTestResult("getSpecialization", se.getSpecialization() == "Software Engineering");
    printTestResult("getFavoriteLanguage", se.getFavoriteLanguage() == "C++");
    printTestResult("getLatestProject", se.getLatestProject() == "Project X");
    printTestResult("getLinesOfCodeWritten", se.getLinesOfCodeWritten() == 1000);

    // Используем сеттеры для изменения значений
    se.setName("Jane Doe");
    se.setExperience(6);
    se.setSpecialization("Web Development");
    se.setFavoriteLanguage("JavaScript");
    se.setLatestProject("Project Y");
    se.setLinesOfCodeWritten(2000);

    // Проверяем, что значения были корректно установлены
    printTestResult("setName", se.getName() == "Jane Doe");
    printTestResult("setExperience", se.getExperience() == 6);
    printTestResult("setSpecialization", se.getSpecialization() == "Web Development");
    printTestResult("setFavoriteLanguage", se.getFavoriteLanguage() == "JavaScript");
    printTestResult("setLatestProject", se.getLatestProject() == "Project Y");
    printTestResult("setLinesOfCodeWritten", se.getLinesOfCodeWritten() == 2000);
}

int main() {
    // Запускаем тесты
    testSoftwareEngineer();

    return 0;
}
