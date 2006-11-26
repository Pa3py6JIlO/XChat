extern GtkStyle *input_style;
extern GtkWidget *parent_window;

void mg_changui_new (session *sess, restore_gui *res, int tab, int focus);
void mg_update_xtext (GtkWidget *wid);
void mg_safe_quit (void);
void mg_switch_page (int relative, int num);
void mg_move_tab (session *, int delta);
void mg_move_tab_family (session *, int delta);
void mg_bring_tofront (GtkWidget *vbox);
void mg_bring_tofront_sess (session *sess);
void mg_userlist_showhide (session *sess, int show);
void mg_userlist_toggle (void);
void mg_set_topic_tip (session *sess);
GtkWidget *mg_create_generic_tab (char *name, char *title, int force_toplevel, int link_buttons, void *close_callback, void *userdata, int width, int height, GtkWidget **vbox_ret, void *family);
void mg_set_title (GtkWidget *button, char *title);
void mg_set_access_icon (session_gui *gui, GdkPixbuf *pix, gboolean away);
void mg_apply_setup (void);
void mg_close_sess (session *);
void mg_tab_close (session *sess);
void mg_detach (session *sess, int mode);
void mg_progressbar_create (session_gui *gui);
void mg_progressbar_destroy (session_gui *gui);
void mg_dnd_drop_file (session *sess, char *target, char *uri);
void mg_change_layout (int type);
void mg_update_meters (session_gui *);
void mg_inputbox_cb (GtkWidget *igad, session_gui *gui);
void mg_create_icon_item (char *label, char *stock, GtkWidget *menu, void *callback, void *userdata);
GtkWidget *mg_submenu (GtkWidget *menu, char *text);
