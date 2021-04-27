// Copyright (C) 2014-2016 Roberto Bertolusso
//
// This file is part of XBRL.
//
// XBRL is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// XBRL is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with XBRL. If not, see <http://www.gnu.org/licenses/>.

#include "XBRL.h"

RcppExport SEXP xbrlParse(SEXP fileS) {
  CharacterVector file(fileS);
  xmlDocPtr doc;
  if ((doc = xmlReadFile(file[0], NULL, XML_PARSE_HUGE)))
    return R_MakeExternalPtr(doc, R_NilValue, R_NilValue);
  xmlFreeDoc(doc);
  return R_NilValue;
}
