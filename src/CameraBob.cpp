#include "CameraBob.hpp"
#include <cmath>


void CameraBob::SinWave(float speed, float amplitude, float frequency) {
    x = 0;
    y = 0;
    speed_ = speed;
    amplitude_ = amplitude;
    frequency_ = frequency;
}

void CameraBob::update(float delta) {
    x += speed_ * delta;
    y = (float)(amplitude_ * sin(x * frequency_));
}

float CameraBob::getX() {
    return x;
}
float CameraBob::getY() {
    return y;
}
float CameraBob::getSpeed() {
    return speed_;
}
float CameraBob::getAmplitude() {
    return amplitude_;
}
float CameraBob::getFrequency() {
    return frequency_;
}

void CameraBob::setX(float x2) {
    x = x2;
}
void CameraBob::setY(float y1) {
    y = y1;
}
void CameraBob::setSpeed(float speed) {
    speed_ = speed;
}
void CameraBob::setAmplitude(float amplitude) {
    amplitude_ = amplitude;
}
void CameraBob::setFrequency(float frequency) {
    frequency_ = frequency;
}





