/* Generated by wayland-scanner 1.20.0 */

#ifndef LLP_EXTENSION_SERVER_PROTOCOL_H1
#define LLP_EXTENSION_SERVER_PROTOCOL_H1

#include <stdint.h>
#include <stddef.h>
#include "wayland-server.h"

#ifdef  __cplusplus
extern "C" {
#endif

struct wl_client;
struct wl_resource;

/**
 * @page page_llp_extension The llp_extension protocol
 * @section page_ifaces_llp_extension Interfaces
 * - @subpage page_iface_llp_touch - LLP add to deliver touch information
 */
struct llp_touch;

#ifndef LLP_TOUCH_INTERFACE
#define LLP_TOUCH_INTERFACE
/**
 * @page page_iface_llp_touch llp_touch
 * @section page_iface_llp_touch_desc Description
 *
 * The llp_touch interface is exposed as a global object enabling clients
 * to deliver touch information from server to client.
 * @section page_iface_llp_touch_api API
 * See @ref iface_llp_touch.
 */
/**
 * @defgroup iface_llp_touch The llp_touch interface
 *
 * The llp_touch interface is exposed as a global object enabling clients
 * to deliver touch information from server to client.
 */
extern const struct wl_interface llp_touch_interface;
#endif

#ifndef LLP_TOUCH_TOUCH_EVENT_ENUM
#define LLP_TOUCH_TOUCH_EVENT_ENUM
enum llp_touch_Touch_event {
	/**
	 * one
	 */
	LLP_TOUCH_TOUCH_EVENT_ONE_CLICK = 0,
	/**
	 * pinch_in
	 */
	LLP_TOUCH_TOUCH_EVENT_PINCH_IN = 1,
	/**
	 * pinch_out
	 */
	LLP_TOUCH_TOUCH_EVENT_PINCH_OUT = 2,
	/**
	 * swipe_lift
	 */
	LLP_TOUCH_TOUCH_EVENT_SWIPE_LIFT = 3,
	/**
	 * swipe_right
	 */
	LLP_TOUCH_TOUCH_EVENT_SWIPE_RIGHT = 4,
	/**
	 * swipe_up
	 */
	LLP_TOUCH_TOUCH_EVENT_SWIPE_UP = 5,
	/**
	 * swipe_down
	 */
	LLP_TOUCH_TOUCH_EVENT_SWIPE_DOWN = 6,
	/**
	 * double
	 */
	LLP_TOUCH_TOUCH_EVENT_DOUBLE_CLICK = 7,
};
#endif /* LLP_TOUCH_TOUCH_EVENT_ENUM */

/**
 * @ingroup iface_llp_touch
 * @struct llp_touch_interface
 */
struct llp_touch_interface {
	/**
	 * get_touch_event
	 *
	 * get_touch_event
	 */
	void (*get_touch_event)(struct wl_client *client,
				struct wl_resource *resource,
				int32_t x,
				int32_t y,
				int32_t w,
				int32_t h,
				int32_t touch_event);
};

#define LLP_TOUCH_SEND_TOUCH_EVENT 0

/**
 * @ingroup iface_llp_touch
 */
#define LLP_TOUCH_SEND_TOUCH_EVENT_SINCE_VERSION 1

/**
 * @ingroup iface_llp_touch
 */
#define LLP_TOUCH_GET_TOUCH_EVENT_SINCE_VERSION 1

/**
 * @ingroup iface_llp_touch
 * Sends an send_touch_event event to the client owning the resource.
 * @param resource_ The client's resource
 */
static inline void
llp_touch_send_send_touch_event(struct wl_resource *resource_, int32_t x, int32_t y, int32_t w, int32_t h, int32_t touch_event)
{
	wl_resource_post_event(resource_, LLP_TOUCH_SEND_TOUCH_EVENT, x, y, w, h, touch_event);
}

#ifdef  __cplusplus
}
#endif

#endif