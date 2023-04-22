#include "IPR.hpp"
#include <iostream>
#include <webots/DistanceSensor.hpp>
#include <webots/Robot.hpp>
using namespace webots;

#define TIME_STEP 64

double PosGreen[] = {0.25, -1.6, 0, -0.3, 0, 0.727475, -0.727475};
double PosYellow[] = {4.75, -1.75, 0, 0, 0, 0.727475, -0.727475};
double PosRed[] = {0.85, -1.75, 0, -0.1, 0, 0.727475, -0.727475};

int main(int argc, char **argv) {
  IPR *ipr = new IPR();
  double PosG[] = {2, -1.7, 0, 0, 0, 0.727475, -0.727475};
  ipr->moveToInitPosition();
  ipr->grabCube(PosGreen);
  ipr->dropCube(PosG);
  double PosY[] = {2, -1.3, 0.2, -0.8, 0, 0.727475, -0.727475};
  ipr->grabCube(PosYellow);
  ipr->dropCube(PosY);
  ipr->moveToInitPosition();
  double PosR[] = {2, -1.05, 0.2, -1.1, 0, 0.727475, -0.727475};
  ipr->grabCube(PosRed);
  ipr->dropCube(PosR);
  ipr->moveToInitPosition();
  }