/*
 *  The implementation of hash_multimap iterator interface.
 *  Copyright (C)  2008 - 2012  Wangbo
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *  Author e-mail: activesys.wb@gmail.com
 *                 activesys@sina.com.cn
 */

/** include section **/
#include <cstl/cstl_def.h>
#include <cstl/cstl_alloc.h>
#include <cstl/cstl_types.h>
#include <cstl/citerator.h>
#include <cstl/cstring.h>
#include <cstl/chash_map.h>

#include "cstl_hash_multimap_aux.h"

/** local constant declaration and local macro section **/

/** local data type declaration and local struct, union, enum section **/

/** local function prototype section **/

/** exported global variable definition section **/

/** local global variable definition section **/

/** exported function implementation section **/
/**
 * Create hash_multimap iterator.
 */
hash_multimap_iterator_t create_hash_multimap_iterator(void)
{
    hash_multimap_iterator_t it_iter = _create_hashtable_iterator();

    _HASH_MULTIMAP_ITERATOR_CONTAINER_TYPE(it_iter) = _HASH_MULTIMAP_CONTAINER;
    _HASH_MULTIMAP_ITERATOR_ITERATOR_TYPE(it_iter) = _BIDIRECTIONAL_ITERATOR;

    return it_iter;
}

/**
 * Get data value referenced by iterator.
 */
void _hash_multimap_iterator_get_value(hash_multimap_iterator_t it_iter, void* pv_value)
{
    assert(pv_value != NULL);
    assert(_HASH_MULTIMAP_ITERATOR_CONTAINER_TYPE(it_iter) == _HASH_MULTIMAP_CONTAINER);
    assert(_HASH_MULTIMAP_ITERATOR_ITERATOR_TYPE(it_iter) == _BIDIRECTIONAL_ITERATOR);

    _hashtable_iterator_get_value(it_iter, pv_value);
}

/**
 * Get data value pointer referenced by iterator.
 */
const void* _hash_multimap_iterator_get_pointer(hash_multimap_iterator_t it_iter)
{
    assert(_HASH_MULTIMAP_ITERATOR_CONTAINER_TYPE(it_iter) == _HASH_MULTIMAP_CONTAINER);
    assert(_HASH_MULTIMAP_ITERATOR_ITERATOR_TYPE(it_iter) == _BIDIRECTIONAL_ITERATOR);

    return _hashtable_iterator_get_pointer(it_iter);
}

/**
 * Get data value pointer referenced by iterator, but ignore char*.
 */
const void* _hash_multimap_iterator_get_pointer_ignore_cstr(hash_multimap_iterator_t it_iter)
{
    assert(_HASH_MULTIMAP_ITERATOR_CONTAINER_TYPE(it_iter) == _HASH_MULTIMAP_CONTAINER);
    assert(_HASH_MULTIMAP_ITERATOR_ITERATOR_TYPE(it_iter) == _BIDIRECTIONAL_ITERATOR);

    return _hashtable_iterator_get_pointer_ignore_cstr(it_iter);
}

/**
 * Return iterator reference previous element.
 */
hash_multimap_iterator_t _hash_multimap_iterator_prev(hash_multimap_iterator_t it_iter)
{
    assert(_HASH_MULTIMAP_ITERATOR_CONTAINER_TYPE(it_iter) == _HASH_MULTIMAP_CONTAINER);
    assert(_HASH_MULTIMAP_ITERATOR_ITERATOR_TYPE(it_iter) == _BIDIRECTIONAL_ITERATOR);

    return _hashtable_iterator_prev(it_iter);
}

/**
 * Return iterator reference next element.
 */
hash_multimap_iterator_t _hash_multimap_iterator_next(hash_multimap_iterator_t it_iter)
{
    assert(_HASH_MULTIMAP_ITERATOR_CONTAINER_TYPE(it_iter) == _HASH_MULTIMAP_CONTAINER);
    assert(_HASH_MULTIMAP_ITERATOR_ITERATOR_TYPE(it_iter) == _BIDIRECTIONAL_ITERATOR);

    return _hashtable_iterator_next(it_iter);
}

/**
 * Test the two hash_multimap iterator are equal.
 */
bool_t _hash_multimap_iterator_equal(hash_multimap_iterator_t it_first, hash_multimap_iterator_t it_second)
{
    assert(_HASH_MULTIMAP_ITERATOR_CONTAINER_TYPE(it_first) == _HASH_MULTIMAP_CONTAINER);
    assert(_HASH_MULTIMAP_ITERATOR_ITERATOR_TYPE(it_first) == _BIDIRECTIONAL_ITERATOR);
    assert(_HASH_MULTIMAP_ITERATOR_CONTAINER_TYPE(it_second) == _HASH_MULTIMAP_CONTAINER);
    assert(_HASH_MULTIMAP_ITERATOR_ITERATOR_TYPE(it_second) == _BIDIRECTIONAL_ITERATOR);

    return _hashtable_iterator_equal(it_first, it_second);
}

/**
 * Calculate distance between two iterators.
 */
int _hash_multimap_iterator_distance(hash_multimap_iterator_t it_first, hash_multimap_iterator_t it_second)
{
    assert(_HASH_MULTIMAP_ITERATOR_CONTAINER_TYPE(it_first) == _HASH_MULTIMAP_CONTAINER);
    assert(_HASH_MULTIMAP_ITERATOR_ITERATOR_TYPE(it_first) == _BIDIRECTIONAL_ITERATOR);
    assert(_HASH_MULTIMAP_ITERATOR_CONTAINER_TYPE(it_second) == _HASH_MULTIMAP_CONTAINER);
    assert(_HASH_MULTIMAP_ITERATOR_ITERATOR_TYPE(it_second) == _BIDIRECTIONAL_ITERATOR);
    assert(_HASH_MULTIMAP_ITERATOR_CONTAINER(it_first) == _HASH_MULTIMAP_ITERATOR_CONTAINER(it_second));

    return _hashtable_iterator_distance(it_first, it_second);
}

/**
 * Test the first iterator is before the second.
 */
bool_t _hash_multimap_iterator_before(hash_multimap_iterator_t it_first, hash_multimap_iterator_t it_second)
{
    assert(_HASH_MULTIMAP_ITERATOR_CONTAINER_TYPE(it_first) == _HASH_MULTIMAP_CONTAINER);
    assert(_HASH_MULTIMAP_ITERATOR_ITERATOR_TYPE(it_first) == _BIDIRECTIONAL_ITERATOR);
    assert(_HASH_MULTIMAP_ITERATOR_CONTAINER_TYPE(it_second) == _HASH_MULTIMAP_CONTAINER);
    assert(_HASH_MULTIMAP_ITERATOR_ITERATOR_TYPE(it_second) == _BIDIRECTIONAL_ITERATOR);
    assert(_HASH_MULTIMAP_ITERATOR_CONTAINER(it_first) == _HASH_MULTIMAP_ITERATOR_CONTAINER(it_second));

    return _hashtable_iterator_before(it_first, it_second);
}

/** local function implementation section **/

/** eof **/

