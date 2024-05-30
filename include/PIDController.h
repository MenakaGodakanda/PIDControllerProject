#ifndef PIDCONTROLLER_H
#define PIDCONTROLLER_H

class PIDController {
public:
    PIDController(double kp, double ki, double kd);
    double compute(double setpoint, double pv);
    void setTunings(double kp, double ki, double kd);

private:
    double kp;
    double ki;
    double kd;
    double prev_error;
    double integral;
};

#endif // PIDCONTROLLER_H
