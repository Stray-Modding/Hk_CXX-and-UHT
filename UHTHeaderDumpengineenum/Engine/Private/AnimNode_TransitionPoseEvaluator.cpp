#include "AnimNode_TransitionPoseEvaluator.h"

FAnimNode_TransitionPoseEvaluator::FAnimNode_TransitionPoseEvaluator() {
    this->FramesToCachePose = 0;
    this->DataSource = EEvaluatorDataSource::EDS_SourcePose;
    this->EvaluatorMode = EEvaluatorMode::EM_Standard;
}

