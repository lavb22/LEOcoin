/*
 * base58.cpp
 *
 *  Created on: 25 oct. 2017
 *      Author: lvalles
 */

#include "base58.h"

#include "hash.h"
#include "script.h"
#include "uint256.h"


#include <boost/variant/apply_visitor.hpp>
#include <boost/variant/static_visitor.hpp>

#include <algorithm>
#include <assert.h>
#include <string.h>

