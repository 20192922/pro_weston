/* Generated by wayland-scanner 1.20.0 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

#ifndef __has_attribute
# define __has_attribute(x) 0  /* Compatibility with non-clang compilers. */
#endif

#if (__has_attribute(visibility) || defined(__GNUC__) && __GNUC__ >= 4)
#define WL_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define WL_PRIVATE
#endif


static const struct wl_interface *llp_extension_types[] = {
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};

static const struct wl_message llp_touch_requests[] = {
	{ "get_touch_event", "iiiii", llp_extension_types + 0 },
};

static const struct wl_message llp_touch_events[] = {
	{ "send_touch_event", "iiiii", llp_extension_types + 0 },
};

WL_PRIVATE const struct wl_interface llp_touch_interface = {
	"llp_touch", 1,
	1, llp_touch_requests,
	1, llp_touch_events,
};

