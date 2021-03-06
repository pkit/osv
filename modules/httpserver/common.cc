/*
 * Copyright (C) 2013 Cloudius Systems, Ltd.
 *
 * This work is open source software, licensed under the terms of the
 * BSD license as described in the LICENSE file in the top-level directory.
 */
#include "common.hh"

namespace httpserver {

operation_type str2type(const std::string& type)
{
    if (type == "DELETE") {
        return DELETE;
    }
    if (type == "POST") {
        return POST;
    }
    if (type == "PUT") {
        return PUT;
    }
    return GET;
}

}
