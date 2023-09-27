#ifndef RAD_JSON_LIBRARY_H
#define RAD_JSON_LIBRARY_H

#include <string>
#include <array>

enum class Device {
    DTT,
    OSSM,
    M5
};

enum class Mode {
    control,
    play
};

enum class Event {
    Start,
    End,
    Data
};

struct JsonMessage {
    std::string id;
    Device device;
    Mode mode;
    std::string target;
    Event event;
    std::array<int, 10> value;
    std::array<int, 3> position;
    std::array<int, 3> velocity;

    // Constructors, destructors, and other member functions may be added as needed
};

#endif //RAD_JSON_LIBRARY_H
