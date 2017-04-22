#ifndef SLOT_H
#define SLOT_H

#include <string>
#include "titledata.h"

std::u16string getFolder(const titleData dat, int mode, bool newFolder, bool& outFolderExists);

#endif // SLOT_H
