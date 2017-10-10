/****************************************************************************
** ┌─┐┬ ┬┬─┐┌─┐┬─┐┌─┐  ┌─┐┬─┐┌─┐┌┬┐┌─┐┬ ┬┌─┐┬─┐┬┌─
** ├─┤│ │├┬┘│ │├┬┘├─┤  ├┤ ├┬┘├─┤│││├┤ ││││ │├┬┘├┴┐
** ┴ ┴└─┘┴└─└─┘┴└─┴ ┴  └  ┴└─┴ ┴┴ ┴└─┘└┴┘└─┘┴└─┴ ┴
** A Powerful General Purpose Framework
** More information in: https://aurora-fw.github.io/
**
** Copyright (C) 2017 Aurora Framework, All rights reserved.
**
** This file is part of the Aurora Framework. This framework is free
** software; you can redistribute it and/or modify it under the terms of
** the GNU General Public License version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE included in the
** packaging of this file. Please review the following information to
** ensure the GNU General Public License version 3 requirements will be
** met: https://www.gnu.org/licenses/gpl-3.0.html.
****************************************************************************/

#include <AuroraFW/Aurora.h>

using namespace AuroraFW;

Application* App;

void printCoord(Math::Vector2D vec) {
	CLI::Log(CLI::Information, "It's coordinates are (", vec.x, ", ", vec.y, ")");
}

afwslot slot_App_on_open()
{
	CLI::Log(CLI::Information, "Creating new Vector2D vecA.");
	Math::Vector2D vecA (1, 3);

	printCoord(vecA);

	CLI::Log(CLI::Information, "Adding 3 to the vector.");
	vecA.add(3);

	printCoord(vecA);

	CLI::Log(CLI::Information, "Substracting 1x and 2y to the vector.");
	vecA.subtract(1, 2);

	printCoord(vecA);

	CLI::Log(CLI::Information, "Normalizing vecA");
	vecA.normalize();

	printCoord(vecA);

	CLI::Log(CLI::Information, "Normalizing the vector into a vecB.");
	Math::Vector2D vecB = vecA.normalized();

	printCoord(vecB);

	CLI::Log(CLI::Information, "It's magnitude is ", vecB.magnitude());

	CLI::Log(CLI::Information, "The cross product of vecA and vecB is ", vecA.dot(vecB));

	CLI::Log(CLI::Information, "Creating a third vecC.");
	Math::Vector2D vecC (3, -5);

	printCoord(vecC);

	CLI::Log(CLI::Information, "vecA += vecC");
	vecA += vecC;

	printCoord(vecA);

	CLI::Log(CLI::Information, "Distance between vecB and vecC: ", vecB.distanceToPoint(vecC));
}

int main(int argc, char* argv[])
{
	App = new Application(slot_App_on_open, argc, argv);
	delete App;

	return EXIT_SUCCESS;
}
