#include "EdGraph.h"

UEdGraph::UEdGraph() {
    this->Schema = NULL;
    this->bEditable = true;
    this->bAllowDeletion = true;
    this->bAllowRenaming = false;
}

