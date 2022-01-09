#include <iostream>

// #define NUM_VEHICLES 3

// constexpr int NUM_VEHICLES = 3;
const int NUM_VEHICLES = 3;

enum class Lane
{
    RIGHT_LANE,
    CENTER_LANE,
    LEFT_LANE
};

struct Vehicle
{
    int id;
    float velocity;
    Lane lane;
};

void print_vehicle_data(Vehicle &vehicle)
{
    std::cout << "Vehicle ID: " << vehicle.id << std::endl;
    std::cout << "Vehicle Velocity: " << vehicle.velocity << std::endl;
    std::cout << "Vehicle Lane: " << (int)vehicle.lane << std::endl;
}

void print_vehicle_data(Vehicle *vehicle)
{
    std::cout << "Vehicle ID: " << vehicle->id << std::endl;
    std::cout << "Vehicle Velocity: " << vehicle->velocity << std::endl;
    std::cout << "Vehicle Lane: " << (int)vehicle->lane << std::endl;
}

int main()
{
    Vehicle v1 = {.id = 1, .velocity = 100.0f, .lane = Lane::CENTER_LANE};
    Vehicle v2 = {.id = 2, .velocity = 120.0f, .lane = Lane::RIGHT_LANE};
    Vehicle v3 = {.id = 3, .velocity = 130.0f, .lane = Lane::LEFT_LANE};

    Vehicle vehicles_in_scene[3] = {v1, v2, v3};

    for (int i = 0; i < NUM_VEHICLES; i++)
    {
        print_vehicle_data(vehicles_in_scene[i]);
    };

    return 0;
}