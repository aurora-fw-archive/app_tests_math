// ┌─┐┬ ┬┬─┐┌─┐┬─┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┌─┐┬ ┬┌─┐┬─┐┬┌─ | Powerful, Scalable and Cross Platform Framework
// ├─┤│ │├┬┘│ │├┬┘├─┤  ├┤ ├┬┘├─┤│││├┤ ││││ │├┬┘├┴┐ | @author Luís Ferreira
// ┴ ┴└─┘┴└─└─┘┴└─┴ ┴  └  ┴└─┴ ┴┴ ┴└─┘└┴┘└─┘┴└─┴ ┴ | @license GNU Public License v3
//  Copyright (c) 2017 - Luís Ferreira. All right reserved
//  More information in: https://github.com/aurora-fw/ (Github Page)

// File: src/Examples/src/test_math.cpp
// Contains: Tests and Examples for Vector2D (Math Example)

#include <Aurora/Aurora.h>

using namespace Aurora;

Application* App;

void printCoord(Math::Vector2D vec) {
    Shell::Log(Shell::Information, "It's coordinates are ", vec.toString());
}

ArSlot_t slot_App_on_open()
{
    Shell::Log(Shell::Information, "Creating new Vector2D vecA.");
    Math::Vector2D vecA (1, 3);

    printCoord(vecA);

    Shell::Log(Shell::Information, "Adding 3 to the vector.");
    vecA.add(3);

    printCoord(vecA);

    Shell::Log(Shell::Information, "Substracting 1x and 2y to the vector.");
    vecA.subtract(1, 2);

    printCoord(vecA);

    Shell::Log(Shell::Information, "Normalizing vecA");
    vecA.normalize();

    printCoord(vecA);

    Shell::Log(Shell::Information, "Normalizing the vector into a vecB.");
    Math::Vector2D vecB = vecA.normalized();

    printCoord(vecB);

    Shell::Log(Shell::Information, "It's magnitude is ", vecB.magnitude());

    Shell::Log(Shell::Information, "The cross product of vecA and vecB is ", vecA.dot(vecB));

    Shell::Log(Shell::Information, "Creating a third vecC.");
    Math::Vector2D vecC (3, -5);

    printCoord(vecC);

    Shell::Log(Shell::Information, "vecA += vecC");
    vecA += vecC;

    printCoord(vecA);

    Shell::Log(Shell::Information, "Distance between vecB and vecC: ", vecB.distanceToPoint(vecC));
}

int main(int argc, char* argv[])
{
    App = new Application(slot_App_on_open, argc, argv);
    delete App;

    return EXIT_SUCCESS;
}