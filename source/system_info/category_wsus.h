//
// PROJECT:         Aspia
// FILE:            system_info/category_wsus.h
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_SYSTEM_INFO__CATEGORY_WSUS_H
#define _ASPIA_SYSTEM_INFO__CATEGORY_WSUS_H

#include "system_info/category.h"

namespace aspia {

class CategoryWSUS : public CategoryInfo
{
public:
    CategoryWSUS();

    const char* Name() const final;
    IconId Icon() const final;

    const char* Guid() const final;
    void Parse(Table& table, const std::string& data) final;
    std::string Serialize() final;

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryWSUS);
};

} // namespace aspia

#endif // _ASPIA_SYSTEM_INFO__CATEGORY_WSUS_H
