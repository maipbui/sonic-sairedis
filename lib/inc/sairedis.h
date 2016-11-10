#ifndef __SAIREDIS__
#define __SAIREDIS__

extern "C" {
#include "sai.h"
}

#define SYNCD_INIT_VIEW  "INIT_VIEW"
#define SYNCD_APPLY_VIEW "APPLY_VIEW"

typedef enum _sai_redis_notify_syncd_t
{
    SAI_REDIS_NOTIFY_SYNCD_INIT_VIEW,

    SAI_REDIS_NOTIFY_SYNCD_APPLY_VIEW

} sai_redis_notify_syncd_t;

typedef enum _sai_redis_switch_attr_t
{
    /**
     * @brief Will start or stop recording history file for player
     *
     * @type bool
     * @flags CREATE_AND_SET
     * @default true
     */
    SAI_REDIS_SWITCH_ATTR_RECORD = SAI_SWITCH_ATTR_CUSTOM_RANGE_BASE,

    /**
     * @brief Will notify syncd whether to init or apply view
     *
     * @type sai_redis_notify_syncd_t
     * @flags CREATE_AND_SET
     * @default SAI_REDIS_NOTIFY_SYNCD_APPLY_VIEW
     */
    SAI_REDIS_SWITCH_ATTR_NOTIFY_SYNCD,

} sai_redis_switch_attr_t;

#endif // __SAIREDIS__