1.创建一个位置自己定义的表面
```c
    struct weston_layer *my_layer = zalloc(sizeof(*my_layer));
	weston_layer_init(my_layer,shsurf->shell->compositor);
    weston_layer_set_position(my_layer,0x40000000);
    struct weston_surface *surface = weston_surface_create(shsurf->shell->compositor);
	weston_surface_set_color(surface,1.0,1.0,1.0,1.0);
	weston_surface_set_size(surface,500,700);
    struct weston_view *view1 = weston_view_create(surface);
    weston_view_set_position(view1, 0,0);
	weston_layer_entry_insert(&my_layer->view_list,&view1->layer_link);
```