DEFINE_FIELD       (alloc_allocated,                    uint8_t*)
DEFINE_DPTR_FIELD  (ephemeral_heap_segment,             dac_heap_segment)
DEFINE_DPTR_FIELD  (finalize_queue,                     dac_finalize_queue)
DEFINE_FIELD       (oom_info,                           oom_history)
DEFINE_ARRAY_FIELD (interesting_data_per_heap,          size_t, NUM_GC_DATA_POINTS)
DEFINE_ARRAY_FIELD (compact_reasons_per_heap,           size_t, MAX_COMPACT_REASONS_COUNT)
DEFINE_ARRAY_FIELD (expand_mechanisms_per_heap,         size_t, MAX_EXPAND_MECHANISMS_COUNT)
DEFINE_ARRAY_FIELD (interesting_mechanism_bits_per_heap,size_t, MAX_GC_MECHANISM_BITS_COUNT)
DEFINE_FIELD       (internal_root_array,                uint8_t*)
DEFINE_FIELD       (internal_root_array_index,          size_t)
DEFINE_FIELD       (heap_analyze_success,               BOOL)
DEFINE_FIELD       (card_table,                         uint32_t*)
#if defined(ALL_FIELDS) || defined(BACKGROUND_GC)
DEFINE_FIELD       (mark_array,                         uint32_t*)
DEFINE_FIELD       (next_sweep_obj,                     uint8_t*)    
DEFINE_FIELD       (background_saved_lowest_address,    uint8_t*)
DEFINE_FIELD       (background_saved_highest_address,   uint8_t*)
#if defined(ALL_FIELDS) || !defined(USE_REGIONS)
DEFINE_DPTR_FIELD  (saved_sweep_ephemeral_seg,          dac_heap_segment)
DEFINE_FIELD       (saved_sweep_ephemeral_start,        uint8_t*)
#else
DEFINE_MISSING_FIELD
DEFINE_MISSING_FIELD
#endif
#else
DEFINE_MISSING_FIELD
DEFINE_MISSING_FIELD
DEFINE_MISSING_FIELD
DEFINE_MISSING_FIELD
DEFINE_MISSING_FIELD
DEFINE_MISSING_FIELD
#endif
