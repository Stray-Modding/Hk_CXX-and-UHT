#include "TextRenderActor.h"
#include "TextRenderComponent.h"

ATextRenderActor::ATextRenderActor() {
    this->TextRender = CreateDefaultSubobject<UTextRenderComponent>(TEXT("NewTextRenderComponent"));
}

