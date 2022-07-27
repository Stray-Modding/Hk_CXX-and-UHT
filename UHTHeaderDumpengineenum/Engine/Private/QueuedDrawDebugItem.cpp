#include "QueuedDrawDebugItem.h"

FQueuedDrawDebugItem::FQueuedDrawDebugItem() {
    this->ItemType = EDrawDebugItemType::DirectionalArrow;
    this->Radius = 0.00f;
    this->Size = 0.00f;
    this->Segments = 0;
    this->bPersistentLines = false;
    this->LifeTime = 0.00f;
    this->Thickness = 0.00f;
}

