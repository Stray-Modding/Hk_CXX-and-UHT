#include "SolverIterations.h"

FSolverIterations::FSolverIterations() {
    this->FixedTimeStep = 0.00f;
    this->SolverIterations = 0;
    this->JointIterations = 0;
    this->CollisionIterations = 0;
    this->SolverPushOutIterations = 0;
    this->JointPushOutIterations = 0;
    this->CollisionPushOutIterations = 0;
}

