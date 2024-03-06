#include <iostream>
#include <string>

// Geyser class definition
class Geyser {
private:
    bool activated;

public:
    // Constructor
    Geyser() : activated(false) {}

    // Member function to activate the geyser
    void activateGeyser() {
        activated = true;
        std::cout << "Geyser activated. Enjoy your warm shower!\n";
    }

    // Member function to check if the geyser is activated
    bool isActivated() const {
        return activated;
    }
};

// Home class definition
class SmartHome {
private:
    Geyser bathroomGeyser;

public:
    // Member function to simulate getting out of bed and activating the geyser
    void getOutOfBed() {
        std::cout << "Getting out of bed...\n";
        bathroomGeyser.activateGeyser();
    }

    // Member function to check if the bathroom geyser is activated
    bool isBathroomGeyserActivated() const {
        return bathroomGeyser.isActivated();
    }
};

int main() {
    // Create an instance of the SmartHome class
    SmartHome myHome;

    // Simulate getting out of bed
    myHome.getOutOfBed();

    // Check if the bathroom geyser is activated
    if (myHome.isBathroomGeyserActivated()) {
        std::cout << "Bathroom geyser is activated. Ready for a warm shower!\n";
    }

    return 0;
}
