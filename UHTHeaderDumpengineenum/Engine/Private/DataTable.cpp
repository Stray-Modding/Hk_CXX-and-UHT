#include "DataTable.h"

UDataTable::UDataTable() {
    this->RowStruct = NULL;
    this->bStripFromClientBuilds = false;
    this->bIgnoreExtraFields = false;
    this->bIgnoreMissingFields = false;
}

