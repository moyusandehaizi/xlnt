#pragma once

#include <vector>

namespace xlnt {
namespace detail {

struct workbook_impl
{
    workbook_impl();
    workbook_impl &operator=(const workbook_impl &) = delete;
    workbook_impl(const workbook_impl &) = delete;
    //bool guess_types_;
    //bool data_only_;
    int active_sheet_index_;
    bool date_1904_;
    std::vector<worksheet_impl> worksheets_;
    std::vector<relationship> relationships_;
    std::vector<drawing> drawings_;
};

} // namespace detail
} // namespace xlnt