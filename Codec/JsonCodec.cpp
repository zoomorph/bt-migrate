// bt-migrate, torrent state migration tool
// Copyright (C) 2014 Mike Gelfand <mikedld@mikedld.com>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.

#include "JsonCodec.h"

#include <json/reader.h>
#include <json/value.h>
#include <json/writer.h>

#include <iostream>

JsonCodec::JsonCodec()
{
    //
}

JsonCodec::~JsonCodec()
{
    //
}

void JsonCodec::Decode(std::istream& stream, Json::Value& root) const
{
    stream >> root;
}

void JsonCodec::Encode(std::ostream& stream, Json::Value const& root) const
{
    stream << root;
}