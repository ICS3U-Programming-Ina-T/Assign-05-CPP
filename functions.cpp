// Copyright (c) 2022 Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Created on: Jan. 20, 2022
// This program calculates three different things:
// current, acceleration, and speed. It asks the user to enter
// numbers for the necessary variables.

#include <iostream>
#include <iomanip>

// function calculates the speed of an object
float CalcSpeed(float distance, float time) {
    float speed = distance / time;
    return speed;
}
// function calculates the acceleration of an object
float CalcAccel(float force, float mass) {
    float acceleration = force / mass;
    return acceleration;
}
// function calculates the current in a circuit
float CalcCurrent(float voltage, float resistance) {
    float current = voltage / resistance;
    return current;
}

// function gets input, check for invalid data
// and displays results to user
int main() {
    // declaring variables
    std::string voltageUser, resistanceUser, forceUser, massUser;
    std::string distanceUser, timeUser;
    float voltageFloat, resistanceFloat, forceFloat, massFloat;
    float distanceFloat, timeFloat, currentUser, accelerationUser;
    float speedUser;

    // display opening message
    std::cout << "Today we will calculate three different " \
                 "values: current, acceleration, and speed. ";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "We will start off by calculating " \
                 "current, according to Ohm's Law.";
    std::cout << std::endl;
    std::cout << std::endl;

    do {
        // gets input from the user
        std::cout << "Enter the voltage (V): ";
        std::cin >> voltageUser;

        try {
            // converts string input to a float
            voltageFloat = std::stof(voltageUser);

            // checks if value is negative
            if (voltageFloat < 0) {
                std::cout << "Please enter a positive integer!";
                std::cout << std::endl;
                std::cout << std::endl;
                continue;
            }

            do {
                // gets input from the user
                std::cout << "Enter the resistance (Ω): ";
                std::cin >> resistanceUser;

                try {
                    // converts string input to a float
                    resistanceFloat = std::stof(resistanceUser);
                    // checks if value is negative
                    if (resistanceFloat < 0) {
                        std::cout << "Please enter a positive integer!";
                        std::cout << std::endl;
                        std::cout << std::endl;
                        continue;
                    }
                    // assigns variable to function call
                    currentUser = CalcCurrent(voltageFloat, resistanceFloat);
                    
                    // display results to user
                    std::cout << std::endl;
                    std::cout << "The current through a ";
                    std::cout << std::fixed << std::setprecision(2);
                    std::cout << voltageFloat << "V battery and a ";
                    std::cout << std::fixed << std::setprecision(2);
                    std::cout << resistanceFloat << "Ω resistor is ";
                    std::cout << std::fixed << std::setprecision(2);
                    std::cout << currentUser << "A";
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << "-----------------------------";
                    std::cout << "------------------------------";
                    std::cout << "------------------------------";
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << "Second, we will calculate the ";
                    std::cout << "acceleration of an object, ";
                    std::cout << "according to Newton's Second Law.";
                    std::cout << std::endl;
                    std::cout << std::endl;

                    do {
                        // gets input from the user
                        std::cout << "Enter the Force (N): ";
                        std::cin >> forceUser;

                        try {
                            // converts string input to a float
                            forceFloat = std::stof(forceUser);

                            // checks if value is negative
                            if (forceFloat < 0) {
                                std::cout << "Please enter a positive integer!";
                                std::cout << std::endl;
                                std::cout << std::endl;
                                continue;
                            }

                            do {
                                // gets input from the user
                                std::cout << "Enter the mass (kg): ";
                                std::cin >> massUser;

                                try {
                                    // converts string input to a float
                                    massFloat = std::stof(massUser);

                                    // checks if value is negative
                                    if (massFloat < 0) {
                                        std::cout << "Please enter a ";
                                        std::cout << "positive integer!";
                                        std::cout << std::endl;
                                        std::cout << std::endl;
                                        continue;
                                    }
                                    // assigns variable to function call
                                    accelerationUser = CalcAccel(forceFloat,
                                                                 massFloat);

                                    // displays results to the user
                                    std::cout << std::endl;
                                    std::cout << "The acceleration of ";
                                    std::cout << "an object with a force of ";
                                    std::cout << std::fixed;
                                    std::cout << std::setprecision(2);
                                    std::cout << forceFloat;
                                    std::cout << "N and a mass of ";
                                    std::cout << std::fixed;
                                    std::cout << std::setprecision(2);
                                    std::cout << massFloat << "kg is ";
                                    std::cout << std::fixed;
                                    std::cout << std::setprecision(2);
                                    std::cout << accelerationUser << "N/kg";
                                    std::cout << std::endl;
                                    std::cout << std::endl;
                                    std::cout << "-----------------------";
                                    std::cout << "-----------------------";
                                    std::cout << "-----------------------";
                                    std::cout << "--------------------";
                                    std::cout << std::endl;
                                    std::cout << std::endl;
                                    std::cout << "Lastly, we will calculate ";
                                    std::cout << "the speed of an object, ";
                                    std::cout << "given its total distance ";
                                    std::cout << "travelled and time.";
                                    std::cout << std::endl;
                                    std::cout << std::endl;

                                    do {
                                        // gets input from the user
                                        std::cout << "Enter the total ";
                                        std::cout << "distance (m): ";
                                        std::cin >> distanceUser;

                                        try {
                                            // converts string input to a float
                                            distanceFloat =
                                            std::stof(distanceUser);

                                            // checks if value is negative
                                            if (distanceFloat < 0) {
                                                std::cout << "Distance cannot ";
                                                std::cout << "be negative!";
                                                std::cout << std::endl;
                                                std::cout << std::endl;
                                                continue;
                                            }
                                            do {
                                                // gets input from the user
                                                std::cout << "Enter the ";
                                                std::cout << "time (s): ";
                                                std::cin >> timeUser;

                                                try {
                                                    // converts string
                                                    // input to a float
                                                    timeFloat =
                                                    std::stof(timeUser);

                                                    // checks if
                                                    // value is negative
                                                    if (timeFloat < 0) {
                                                        std::cout << "Time ";
                                                        std::cout << "cannot ";
                                                        std::cout << "be ";
                                                        std::cout << "negative";
                                                        std::cout << "!";
                                                        std::cout << std::endl;
                                                        std::cout << std::endl;
                                                        continue;
                                                    }

                                                    // initializes
                                                    // variable to
                                                    // end the loop
                                                    int stopLoop = 2;
                                                    // checks if variable
                                                    // has been initialized
                                                    // if so, displays results
                                                    // to the user, then breaks
                                                    // out of loop
                                                    if (stopLoop == 2) {
                                                        // assigns variable
                                                        // to function call
                                                        speedUser =
                                                        CalcSpeed(distanceFloat,
                                                                  timeFloat);
                                                        std::cout << std::endl;
                                                        std::cout <<
                                                        "The speed of an ";
                                                        std::cout << "object ";
                                                        std::cout << "that ";
                                                        std::cout <<
                                                        "travelled ";
                                                        std::cout <<
                                                        "a distance of ";
                                                        std::cout << std::fixed;
                                                        std::cout <<
                                                        std::setprecision(2);
                                                        std::cout <<
                                                        distanceFloat;
                                                        std::cout << "m in ";
                                                        std::cout << std::fixed;
                                                        std::cout <<
                                                        std::setprecision(2);
                                                        std::cout << timeFloat;
                                                        std::cout << "s is ";
                                                        std::cout <<
                                                        std::fixed;
                                                        std::cout <<
                                                        std::setprecision(2);
                                                        std::cout << speedUser;
                                                        std::cout << "m/s";
                                                        break;
                                                    }
                                                // checks if input is a string
                                                } catch (
                                                         std::invalid_argument
                                                         ) {
                                                std::cout << timeUser;
                                                std::cout << " is an invalid ";
                                                std::cout << "entry.";
                                                std::cout << std::endl;
                                                std::cout << std::endl;
                                                }
                                            } while (true);
                                            // ends the loop
                                            break;
                                        // checks if input is a string
                                        } catch (std::invalid_argument) {
                                        std::cout << distanceUser;
                                        std::cout << " is an invalid entry.";
                                        std::cout << std::endl;
                                        std::cout << std::endl;
                                        }
                                    } while (true);
                                    // ends the loop
                                    break;
                                // checks if input is a string
                                } catch (std::invalid_argument) {
                                std::cout << massUser;
                                std::cout << " is an invalid entry.";
                                std::cout << std::endl;
                                std::cout << std::endl;
                                }
                            } while (true);
                            // ends the loop
                            break;
                        // checks if input is a string
                        } catch (std::invalid_argument) {
                        std::cout << forceUser << " is an invalid entry.";
                        std::cout << std::endl;
                        std::cout << std::endl;
                        }
                    } while (true);
                    // ends the loop
                    break;
                // checks if input is a string
                } catch (std::invalid_argument) {
                std::cout << resistanceUser << " is an invalid entry.";
                std::cout << std::endl;
                std::cout << std::endl;
                }
            } while (true);
            // ends the loop
            break;
        // checks if input is a string
        } catch (std::invalid_argument) {
        std::cout << voltageUser << " is an invalid entry.";
        std::cout << std::endl;
        std::cout << std::endl;
        }
    } while (true);
}
