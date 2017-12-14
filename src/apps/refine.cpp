/***************************************************************************
 *
 * Author: "Sjors H.W. Scheres"
 * MRC Laboratory of Molecular Biology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * This complete copyright notice must be included in any revised version of the
 * source code. Additional authorship citations may be added, but existing
 * author citations must be preserved.
 ***************************************************************************/

#include <src/ml_optimiser.h>

/**************************************************************************
        Main
 **************************************************************************/
int main(int argc, char **argv)
{
	MlOptimiser optimiser;

    std::cout << "TEST VERSION    TEST VERSION    TEST VERSION     TEST VERSION   TEST VERSION"<< std::endl;
    std::cout << "TEST VERSION    TEST VERSION    TEST VERSION     TEST VERSION   TEST VERSION"<< std::endl;
    std::cout << "TEST VERSION    TEST VERSION    TEST VERSION     TEST VERSION   TEST VERSION"<< std::endl;
    std::cout << "  "<< std::endl;
    std::cout << " The output from this binary should not be used for research or publication "<< std::endl;
    std::cout << "  "<< std::endl;
    std::cout << "TEST VERSION    TEST VERSION    TEST VERSION     TEST VERSION   TEST VERSION"<< std::endl;
    std::cout << "TEST VERSION    TEST VERSION    TEST VERSION     TEST VERSION   TEST VERSION"<< std::endl;
    std::cout << "TEST VERSION    TEST VERSION    TEST VERSION     TEST VERSION   TEST VERSION"<< std::endl;

    try
    {
    	// Read in parameters from the command line
    	optimiser.read(argc, argv);

    	// Set up things
    	optimiser.initialise();

    	// Do the real work
    	optimiser.iterate();

    }

    catch (RelionError XE)
    {
        //optimiser.usage();
        std::cerr << XE;

        return EXIT_FAILURE;
    }

    std::cout << "TEST VERSION    TEST VERSION    TEST VERSION     TEST VERSION   TEST VERSION"<< std::endl;
    std::cout << "TEST VERSION    TEST VERSION    TEST VERSION     TEST VERSION   TEST VERSION"<< std::endl;
    std::cout << "TEST VERSION    TEST VERSION    TEST VERSION     TEST VERSION   TEST VERSION"<< std::endl;
    std::cout << "  "<< std::endl;
    std::cout << " The output from this binary should not be used for research or publication "<< std::endl;
    std::cout << "  "<< std::endl;
    std::cout << "TEST VERSION    TEST VERSION    TEST VERSION     TEST VERSION   TEST VERSION"<< std::endl;
    std::cout << "TEST VERSION    TEST VERSION    TEST VERSION     TEST VERSION   TEST VERSION"<< std::endl;
    std::cout << "TEST VERSION    TEST VERSION    TEST VERSION     TEST VERSION   TEST VERSION"<< std::endl;

    return EXIT_SUCCESS;
}
