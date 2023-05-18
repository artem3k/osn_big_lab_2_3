#include <iostream>
#include "SoftwareEngineer.h"

int main() {
    std::list<SoftwareEngineer> engineers;

// Добавляем инженеров в список
    engineers.push_back(SoftwareEngineer("Alice", 5, "Frontend", "JavaScript", "Website", 10000));
    engineers.push_back(SoftwareEngineer("Bob", 7, "Backend", "Python", "API", 20000));
    engineers.push_back(SoftwareEngineer("Macksim", 10, "Backend", "Python", "API", 20000));

// Используем find(), если мы хотим найти конкретного инженера
    auto it = std::find_if(engineers.begin(), engineers.end(), [](const SoftwareEngineer& engineer) {
        return engineer.getName() == "Alice"; // предполагается, что у вас есть метод getName()
    });

    if (it != engineers.end()) {
        std::cout << "Engineer found: " << std::endl;
        it->print();
    } else {
        std::cout << "Engineer not found" << std::endl;
    }

// Используем sort() для сортировки списка инженеров по определенному критериюю
    engineers.sort([](const SoftwareEngineer& a, const SoftwareEngineer& b) {
        return a.getExperience() > b.getExperience(); // предполагается, что у вас есть метод getExperience()
    });

    std::cout << "\nSort result:" <<std::endl;
    for (auto& engineer : engineers) {
        engineer.print();
        std::cout << std::endl;
    }

    return 0;
}
