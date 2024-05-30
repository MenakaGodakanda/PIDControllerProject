#include <iostream>
#include <fstream>
#include "PIDController.h"

int main() {
    PIDController pid(1.0, 0.1, 0.01);

    double setpoint = 100;
    double pv = 0;
    double output;

    std::ofstream dataFile("output_data.csv");
    dataFile << "Iteration,PV,Output\n";

    for(int i = 0; i < 100; i++) {
        output = pid.compute(setpoint, pv);
        pv += output; // Simulate process variable response
        std::cout << "Iteration " << i << ": PV = " << pv << std::endl;
        dataFile << i << "," << pv << "," << output << "\n";
    }

    dataFile.close();

    // Plot the data using Gnuplot
    std::ofstream gnuplotScript("plot_script.gp");
    gnuplotScript << "set terminal png size 800,600\n";
    gnuplotScript << "set output 'pid_output.png'\n";
    gnuplotScript << "set title 'PID Controller Output'\n";
    gnuplotScript << "set xlabel 'Iteration'\n";
    gnuplotScript << "set ylabel 'Value'\n";
    gnuplotScript << "set grid\n";
    gnuplotScript << "plot 'output_data.csv' using 1:2 with lines title 'Process Variable (PV)', \\\n";
    gnuplotScript << "     'output_data.csv' using 1:3 with lines title 'PID Output'\n";
    gnuplotScript.close();

    // Execute the Gnuplot script
    system("gnuplot plot_script.gp");

    return 0;
}
