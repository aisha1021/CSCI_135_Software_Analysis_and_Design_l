/* 
Name: Aisha Malik
Course: CSCI 135
Instructor: Tong Yi
Assignment: Homework E9.3

Simulate a circuit for controlling a hallway light that has switches at both ends of the hallway. Each switch can 
be up or down, and the light can be on or off. Toggling either switch turns the lamp on or off. 
Provide member functions:
    int get_first_switch_state() // 0 for down, 1 for up int get_second_switch_state()
    int get_lamp_state() // 0 for off, 1 for on
    void toggle_first_switch()
    void toggle_second_switch()
*/

#include <iostream>

class Circuit {
public:
    int get_first_switch_state() const;
    int get_second_switch_state() const;
    int get_lamp_state() const;
    void toggle_first_switch();
    void toggle_second_switch();

private:
    int switch_1 = 0;
    int switch_2 = 0;
    int lamp_state = 0;
};

int Circuit::get_first_switch_state() const {
    return switch_1;
}

int Circuit::get_second_switch_state() const {
    return switch_2;
}

int Circuit::get_lamp_state() const {
    if (get_first_switch_state() || get_second_switch_state()) {
        return 1;
    }
    return 0;
}

void Circuit::toggle_first_switch() {
    switch_1 = 1 - switch_1;
}

void Circuit::toggle_second_switch() {
    switch_2 = 1 - switch_2;
}

int main() {
    Circuit circuit;

    std::cout << "Initial State:\n";
    std::cout << "First Switch: " << circuit.get_first_switch_state() << "\n";
    std::cout << "Second Switch: " << circuit.get_second_switch_state() << "\n";
    std::cout << "Lamp State: " << circuit.get_lamp_state() << "\n\n";

    circuit.toggle_first_switch();
    std::cout << "After toggling the first switch:\n";
    std::cout << "First Switch: " << circuit.get_first_switch_state() << "\n";
    std::cout << "Second Switch: " << circuit.get_second_switch_state() << "\n";
    std::cout << "Lamp State: " << circuit.get_lamp_state() << "\n\n";

    circuit.toggle_second_switch();
    std::cout << "After toggling the second switch:\n";
    std::cout << "First Switch: " << circuit.get_first_switch_state() << "\n";
    std::cout << "Second Switch: " << circuit.get_second_switch_state() << "\n";
    std::cout << "Lamp State: " << circuit.get_lamp_state() << "\n";

    return 0;
}
