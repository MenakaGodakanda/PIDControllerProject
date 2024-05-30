# PID Controller Project

This project demonstrates a simple PID (Proportional-Integral-Derivative) controller implemented in C++.

## Directory Structure

- `include/`: Contains header files.
  - `PIDController.h`: Header file for the PID controller class.
- `src/`: Contains source files.
  - `PIDController.cpp`: Implementation file for the PID controller class.
- `examples/`: Contains example usage of the PID controller.
  - `main.cpp`: Example file that demonstrates how to use the PID controller.
- `output_data.csv`: Generated after running the example, contains the PID controller output data.
- `plot_script.gp`: Generated Gnuplot script for plotting the PID controller output.
- `Makefile`: Build instructions for the project.
- `README.md`: This readme file.
- `.gitignore`: Specifies files and directories to be ignored by git.

## How to Build

1. Ensure you have `g++` and `gnuplot` installed.
   - On Ubuntu, you can install these with:
     ```sh
     sudo apt-get install g++
     sudo apt-get install gnuplot
     ```
2. Clone the repository:
   ```sh
   git clone https://github.com/MenakaGodakanda/PIDControllerProject.git
   cd PIDControllerProject
   ```
3. Run make to compile the project:
  ```sh
  make
  ```

## How to Run
Execute the example program:
```sh
./examples/main
```
This will generate output_data.csv containing the PID controller output data and pid_output.png which is a plot of the data. <br>
![Screenshot 2024-05-30 194137](https://github.com/MenakaGodakanda/PIDControllerProject/assets/156875412/b2e25dc5-1bf9-4fa1-a646-01ec181f6c02)

## Plot the Output
The program automatically generates a Gnuplot script and calls Gnuplot to create a plot of the PID controller output. The resulting plot is saved as pid_output.png.

## Example Output
The output data is plotted showing the process variable (PV) and PID output over iterations. The generated plot looks like this:
![pid_output](https://github.com/MenakaGodakanda/PIDControllerProject/assets/156875412/d498c1a8-1847-4852-bbd0-9b07382adef3)

## Clean Up
To clean up the generated files, run:
```sh
make clean
```

## License
This project is licensed under the MIT License.

## Contributing
- Fork the repository.
- Create your feature branch (git checkout -b feature/fooBar).
- Commit your changes (git commit -am 'Add some fooBar').
- Push to the branch (git push origin feature/fooBar).
- Create a new Pull Request.

## Acknowledgments
Inspired by various PID controller implementations and tutorials.
<a href="http://www.gnuplot.info/">Gnuplot</a> for plotting the data.
