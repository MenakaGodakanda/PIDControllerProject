#include "PIDController.h"

PIDController::PIDController(double kp, double ki, double kd)
    : kp(kp), ki(ki), kd(kd), prev_error(0), integral(0) {}

double PIDController::compute(double setpoint, double pv) {
    double error = setpoint - pv;
    integral += error;
    double derivative = error - prev_error;
    double output = kp * error + ki * integral + kd * derivative;
    prev_error = error;
    return output;
}

void PIDController::setTunings(double kp, double ki, double kd) {
    this->kp = kp;
    this->ki = ki;
    this->kd = kd;
}
