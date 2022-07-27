#include "FontFace.h"

UFontFace::UFontFace() {
    this->Hinting = EFontHinting::Default;
    this->LoadingPolicy = EFontLoadingPolicy::LazyLoad;
    this->LayoutMethod = EFontLayoutMethod::Metrics;
}

