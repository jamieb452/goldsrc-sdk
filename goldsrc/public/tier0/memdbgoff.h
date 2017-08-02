//========= Copyright � 1996-2003, Valve LLC, All rights reserved. ============
//
// Purpose: This header, which must be the final line of a .h file,
// causes all crt methods to stop using debugging versions of the memory allocators.
// NOTE: Use memdbgon.h to re-enable memory debugging.
//
// $NoKeywords: $
//=============================================================================

#ifdef MEM_DEBUG_ON // MEM_OVERRIDE_ON

#undef malloc
#undef realloc
#undef calloc
#undef free
#undef _expand
#undef _msize
#undef new
//#undef _aligned_malloc
//#undef _aligned_free
//#undef _malloc_dbg

#undef MEM_DEBUG_ON // MEM_OVERRIDE_ON

#endif // MEM_DEBUG_ON