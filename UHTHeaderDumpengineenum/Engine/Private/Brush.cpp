#include "Brush.h"
#include "BrushComponent.h"

ABrush::ABrush() {
    this->BrushType = Brush_Default;
    this->PolyFlags = 0;
    this->bColored = false;
    this->bSolidWhenSelected = false;
    this->bPlaceableFromClassBrowser = false;
    this->bNotForClientOrServer = false;
    this->Brush = NULL;
    this->BrushComponent = CreateDefaultSubobject<UBrushComponent>(TEXT("BrushComponent0"));
    this->bInManipulation = false;
}

