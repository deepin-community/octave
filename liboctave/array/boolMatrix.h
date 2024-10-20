////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 1996-2024 The Octave Project Developers
//
// See the file COPYRIGHT.md in the top-level directory of this
// distribution or <https://octave.org/copyright/>.
//
// This file is part of Octave.
//
// Octave is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Octave is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Octave; see the file COPYING.  If not, see
// <https://www.gnu.org/licenses/>.
//
////////////////////////////////////////////////////////////////////////

#if ! defined (octave_boolMatrix_h)
#define octave_boolMatrix_h 1

#include "octave-config.h"

#include "Array.h"
#include "boolNDArray.h"
#include "mx-defs.h"
#include "mx-op-decl.h"

class
OCTAVE_API
boolMatrix : public boolNDArray
{
public:

  boolMatrix () = default;

  boolMatrix (const boolMatrix& a) = default;

  boolMatrix& operator = (const boolMatrix& a) = default;

  ~boolMatrix () = default;

  boolMatrix (octave_idx_type r, octave_idx_type c)
    : boolNDArray (dim_vector (r, c)) { }

  boolMatrix (octave_idx_type r, octave_idx_type c, bool val)
    : boolNDArray (dim_vector (r, c), val) { }

  boolMatrix (const dim_vector& dv) : boolNDArray (dv.redim (2)) { }

  boolMatrix (const dim_vector& dv, bool val)
    : boolNDArray (dv.redim (2), val) { }

  boolMatrix (const Array<bool>& a) : boolNDArray (a.as_matrix ()) { }

  OCTAVE_API bool operator == (const boolMatrix& a) const;
  OCTAVE_API bool operator != (const boolMatrix& a) const;

  boolMatrix transpose () const { return Array<bool>::transpose (); }

  // destructive insert/delete/reorder operations

  OCTAVE_API boolMatrix&
  insert (const boolMatrix& a, octave_idx_type r, octave_idx_type c);

  // unary operations

  OCTAVE_API boolMatrix operator ! () const;

  // other operations

  OCTAVE_API boolMatrix diag (octave_idx_type k = 0) const;

  void resize (octave_idx_type nr, octave_idx_type nc, bool rfv = false)
  {
    Array<bool>::resize (dim_vector (nr, nc), rfv);
  }
};

MM_BOOL_OP_DECLS (boolMatrix, boolMatrix, OCTAVE_API)
MS_BOOL_OP_DECLS (boolMatrix, bool, OCTAVE_API)
SM_BOOL_OP_DECLS (bool, boolMatrix, OCTAVE_API)
MM_CMP_OP_DECLS (boolMatrix, boolMatrix, OCTAVE_API)

#endif
