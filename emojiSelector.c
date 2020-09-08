#include <gtk/gtk.h>

GtkClipboard *clipboard;

static void
copy_to_clipboard (GtkWidget *widget,
                   gpointer   data)
{
  gtk_clipboard_set_text (clipboard, (gchar *) data, -1);
  g_print ("Copied %s  to clipboard\n", (gchar *) data);
}

static void
activate (GtkApplication* app,
          gpointer        user_data)
{
  GtkWidget *window;
  GtkWidget *emojisGrid;
  GtkWidget *emoji;

  clipboard = gtk_clipboard_get(GDK_SELECTION_CLIPBOARD);

  window = gtk_application_window_new (app);
  //This function takes a GtkWindow* pointer and a string as input. 
  //As our window pointer is a GtkWidget pointer, we need to cast it to GtkWindow*
  //We do it using the macro GTK_WINDOW because it checks the class before casting
  //and sends a warning if it fails
  gtk_window_set_title (GTK_WINDOW (window), "Emoji Selector");
  gtk_window_set_default_size (GTK_WINDOW (window), 600, 400);
  gtk_container_set_border_width (GTK_CONTAINER (window), 30);

  emojisGrid = gtk_grid_new ();
  gtk_container_add (GTK_CONTAINER (window), emojisGrid);

    emoji = gtk_button_new_with_label ("😀");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😀");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 0, 1, 1);

  emoji = gtk_button_new_with_label ("😃");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😃");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 1, 1, 1);

  emoji = gtk_button_new_with_label ("😄");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😄");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 2, 1, 1);

  emoji = gtk_button_new_with_label ("😁");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😁");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 3, 1, 1);

  emoji = gtk_button_new_with_label ("😆");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😆");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 4, 1, 1);

  emoji = gtk_button_new_with_label ("😅");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😅");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 5, 1, 1);

  emoji = gtk_button_new_with_label ("😂");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😂");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 6, 1, 1);

  emoji = gtk_button_new_with_label ("🤣");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤣");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 7, 1, 1);

  emoji = gtk_button_new_with_label ("😇");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😇");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 8, 1, 1);

  emoji = gtk_button_new_with_label ("😉");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😉");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 9, 1, 1);

  emoji = gtk_button_new_with_label ("😊");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😊");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 10, 1, 1);

  emoji = gtk_button_new_with_label ("🙂");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙂");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 11, 1, 1);

  emoji = gtk_button_new_with_label ("🙃");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙃");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 12, 1, 1);

  emoji = gtk_button_new_with_label ("☺");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "☺");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 13, 1, 1);

  emoji = gtk_button_new_with_label ("😋");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😋");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 14, 1, 1);

  emoji = gtk_button_new_with_label ("😌");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😌");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 15, 1, 1);

  emoji = gtk_button_new_with_label ("😍");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😍");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 16, 1, 1);

  emoji = gtk_button_new_with_label ("🥰");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🥰");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 17, 1, 1);

  emoji = gtk_button_new_with_label ("😘");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😘");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 18, 1, 1);

  emoji = gtk_button_new_with_label ("😗");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😗");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 19, 1, 1);

  emoji = gtk_button_new_with_label ("😙");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😙");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 20, 1, 1);

  emoji = gtk_button_new_with_label ("😚");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😚");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 21, 1, 1);

  emoji = gtk_button_new_with_label ("🤪");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤪");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 22, 1, 1);

  emoji = gtk_button_new_with_label ("😜");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😜");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 23, 1, 1);

  emoji = gtk_button_new_with_label ("😝");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😝");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 24, 1, 1);

  emoji = gtk_button_new_with_label ("😛");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😛");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 0, 25, 1, 1);

  emoji = gtk_button_new_with_label ("🤑");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤑");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 0, 1, 1);

  emoji = gtk_button_new_with_label ("😎");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😎");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 1, 1, 1);

  emoji = gtk_button_new_with_label ("🤓");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤓");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 2, 1, 1);

  emoji = gtk_button_new_with_label ("🧐");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🧐");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 3, 1, 1);

  emoji = gtk_button_new_with_label ("🤠");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤠");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 4, 1, 1);

  emoji = gtk_button_new_with_label ("🥳");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🥳");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 5, 1, 1);

  emoji = gtk_button_new_with_label ("🤗");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤗");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 6, 1, 1);

  emoji = gtk_button_new_with_label ("🤡");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤡");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 7, 1, 1);

  emoji = gtk_button_new_with_label ("😏");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😏");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 8, 1, 1);

  emoji = gtk_button_new_with_label ("😶");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😶");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 9, 1, 1);

  emoji = gtk_button_new_with_label ("😐");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😐");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 10, 1, 1);

  emoji = gtk_button_new_with_label ("😑");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😑");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 11, 1, 1);

  emoji = gtk_button_new_with_label ("😒");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😒");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 12, 1, 1);

  emoji = gtk_button_new_with_label ("🙄");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙄");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 13, 1, 1);

  emoji = gtk_button_new_with_label ("🤨");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤨");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 14, 1, 1);

  emoji = gtk_button_new_with_label ("🤔");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤔");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 15, 1, 1);

  emoji = gtk_button_new_with_label ("🤫");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤫");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 16, 1, 1);

  emoji = gtk_button_new_with_label ("🤭");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤭");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 17, 1, 1);

  emoji = gtk_button_new_with_label ("🤥");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤥");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 18, 1, 1);

  emoji = gtk_button_new_with_label ("😳");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😳");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 19, 1, 1);

  emoji = gtk_button_new_with_label ("😞");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😞");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 20, 1, 1);

  emoji = gtk_button_new_with_label ("😟");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😟");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 21, 1, 1);

  emoji = gtk_button_new_with_label ("😠");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😠");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 22, 1, 1);

  emoji = gtk_button_new_with_label ("😡");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😡");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 23, 1, 1);

  emoji = gtk_button_new_with_label ("🤬");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤬");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 24, 1, 1);

  emoji = gtk_button_new_with_label ("😔");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😔");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 1, 25, 1, 1);

  emoji = gtk_button_new_with_label ("😕");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😕");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 0, 1, 1);

  emoji = gtk_button_new_with_label ("🙁");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙁");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 1, 1, 1);

  emoji = gtk_button_new_with_label ("☹");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "☹");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 2, 1, 1);

  emoji = gtk_button_new_with_label ("😬");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😬");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 3, 1, 1);

  emoji = gtk_button_new_with_label ("🥺");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🥺");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 4, 1, 1);

  emoji = gtk_button_new_with_label ("😣");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😣");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 5, 1, 1);

  emoji = gtk_button_new_with_label ("😖");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😖");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 6, 1, 1);

  emoji = gtk_button_new_with_label ("😫");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😫");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 7, 1, 1);

  emoji = gtk_button_new_with_label ("😩");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😩");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 8, 1, 1);

  emoji = gtk_button_new_with_label ("🥱");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🥱");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 9, 1, 1);

  emoji = gtk_button_new_with_label ("😤");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😤");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 10, 1, 1);

  emoji = gtk_button_new_with_label ("😮");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😮");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 11, 1, 1);

  emoji = gtk_button_new_with_label ("😱");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😱");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 12, 1, 1);

  emoji = gtk_button_new_with_label ("😨");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😨");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 13, 1, 1);

  emoji = gtk_button_new_with_label ("😰");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😰");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 14, 1, 1);

  emoji = gtk_button_new_with_label ("😯");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😯");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 15, 1, 1);

  emoji = gtk_button_new_with_label ("😦");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😦");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 16, 1, 1);

  emoji = gtk_button_new_with_label ("😧");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😧");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 17, 1, 1);

  emoji = gtk_button_new_with_label ("😢");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😢");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 18, 1, 1);

  emoji = gtk_button_new_with_label ("😥");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😥");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 19, 1, 1);

  emoji = gtk_button_new_with_label ("😪");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😪");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 20, 1, 1);

  emoji = gtk_button_new_with_label ("🤤");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤤");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 21, 1, 1);

  emoji = gtk_button_new_with_label ("😓");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😓");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 22, 1, 1);

  emoji = gtk_button_new_with_label ("😭");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😭");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 23, 1, 1);

  emoji = gtk_button_new_with_label ("🤩");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤩");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 24, 1, 1);

  emoji = gtk_button_new_with_label ("😵");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😵");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 2, 25, 1, 1);

  emoji = gtk_button_new_with_label ("🥴");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🥴");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 0, 1, 1);

  emoji = gtk_button_new_with_label ("😲");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😲");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 1, 1, 1);

  emoji = gtk_button_new_with_label ("🤯");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤯");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 2, 1, 1);

  emoji = gtk_button_new_with_label ("🤐");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤐");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 3, 1, 1);

  emoji = gtk_button_new_with_label ("😷");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😷");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 4, 1, 1);

  emoji = gtk_button_new_with_label ("🤕");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤕");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 5, 1, 1);

  emoji = gtk_button_new_with_label ("🤒");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤒");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 6, 1, 1);

  emoji = gtk_button_new_with_label ("🤮");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤮");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 7, 1, 1);

  emoji = gtk_button_new_with_label ("🤢");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤢");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 8, 1, 1);

  emoji = gtk_button_new_with_label ("🤧");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤧");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 9, 1, 1);

  emoji = gtk_button_new_with_label ("🥵");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🥵");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 10, 1, 1);

  emoji = gtk_button_new_with_label ("🥶");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🥶");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 11, 1, 1);

  emoji = gtk_button_new_with_label ("😴");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😴");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 12, 1, 1);

  emoji = gtk_button_new_with_label ("💤");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💤");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 13, 1, 1);

  emoji = gtk_button_new_with_label ("😈");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😈");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 14, 1, 1);

  emoji = gtk_button_new_with_label ("👿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 15, 1, 1);

  emoji = gtk_button_new_with_label ("👹");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👹");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 16, 1, 1);

  emoji = gtk_button_new_with_label ("👺");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👺");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 17, 1, 1);

  emoji = gtk_button_new_with_label ("💩");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💩");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 18, 1, 1);

  emoji = gtk_button_new_with_label ("👻");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👻");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 19, 1, 1);

  emoji = gtk_button_new_with_label ("💀");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💀");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 20, 1, 1);

  emoji = gtk_button_new_with_label ("☠");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "☠");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 21, 1, 1);

  emoji = gtk_button_new_with_label ("👽");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👽");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 22, 1, 1);

  emoji = gtk_button_new_with_label ("🤖");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤖");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 23, 1, 1);

  emoji = gtk_button_new_with_label ("🎃");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🎃");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 24, 1, 1);

  emoji = gtk_button_new_with_label ("😺");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😺");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 3, 25, 1, 1);

  emoji = gtk_button_new_with_label ("😸");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😸");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 0, 1, 1);

  emoji = gtk_button_new_with_label ("😹");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😹");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 1, 1, 1);

  emoji = gtk_button_new_with_label ("😻");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😻");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 2, 1, 1);

  emoji = gtk_button_new_with_label ("😼");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😼");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 3, 1, 1);

  emoji = gtk_button_new_with_label ("😽");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😽");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 4, 1, 1);

  emoji = gtk_button_new_with_label ("🙀");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙀");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 5, 1, 1);

  emoji = gtk_button_new_with_label ("😿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 6, 1, 1);

  emoji = gtk_button_new_with_label ("😾");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "😾");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 7, 1, 1);

  emoji = gtk_button_new_with_label ("👐🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👐🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 8, 1, 1);

  emoji = gtk_button_new_with_label ("🤲🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤲🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 9, 1, 1);

  emoji = gtk_button_new_with_label ("🙌🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙌🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 10, 1, 1);

  emoji = gtk_button_new_with_label ("👏🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👏🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 11, 1, 1);

  emoji = gtk_button_new_with_label ("🙏🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙏🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 12, 1, 1);

  emoji = gtk_button_new_with_label ("🤝");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤝");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 13, 1, 1);

  emoji = gtk_button_new_with_label ("👍🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👍🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 14, 1, 1);

  emoji = gtk_button_new_with_label ("👎🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👎🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 15, 1, 1);

  emoji = gtk_button_new_with_label ("👊🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👊🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 16, 1, 1);

  emoji = gtk_button_new_with_label ("✊🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "✊🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 17, 1, 1);

  emoji = gtk_button_new_with_label ("🤛🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤛🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 18, 1, 1);

  emoji = gtk_button_new_with_label ("🤜🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤜🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 19, 1, 1);

  emoji = gtk_button_new_with_label ("🤞🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤞🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 20, 1, 1);

  emoji = gtk_button_new_with_label ("✌🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "✌🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 21, 1, 1);

  emoji = gtk_button_new_with_label ("🤘🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤘🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 22, 1, 1);

  emoji = gtk_button_new_with_label ("🤟🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤟🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 23, 1, 1);

  emoji = gtk_button_new_with_label ("👌🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👌🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 24, 1, 1);

  emoji = gtk_button_new_with_label ("🤏🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤏🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 4, 25, 1, 1);

  emoji = gtk_button_new_with_label ("👈🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👈🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 0, 1, 1);

  emoji = gtk_button_new_with_label ("👉🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👉🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 1, 1, 1);

  emoji = gtk_button_new_with_label ("👆🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👆🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 2, 1, 1);

  emoji = gtk_button_new_with_label ("👇🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👇🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 3, 1, 1);

  emoji = gtk_button_new_with_label ("☝🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "☝🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 4, 1, 1);

  emoji = gtk_button_new_with_label ("✋🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "✋🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 5, 1, 1);

  emoji = gtk_button_new_with_label ("🤚🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤚🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 6, 1, 1);

  emoji = gtk_button_new_with_label ("🖐🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🖐🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 7, 1, 1);

  emoji = gtk_button_new_with_label ("🖖🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🖖🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 8, 1, 1);

  emoji = gtk_button_new_with_label ("👋🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👋🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 9, 1, 1);

  emoji = gtk_button_new_with_label ("🤙🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤙🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 10, 1, 1);

  emoji = gtk_button_new_with_label ("💪🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💪🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 11, 1, 1);

  emoji = gtk_button_new_with_label ("🦾");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🦾");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 12, 1, 1);

  emoji = gtk_button_new_with_label ("🖕🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🖕🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 13, 1, 1);

  emoji = gtk_button_new_with_label ("✍🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "✍🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 14, 1, 1);

  emoji = gtk_button_new_with_label ("🤳🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤳🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 15, 1, 1);

  emoji = gtk_button_new_with_label ("💅🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💅🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 16, 1, 1);

  emoji = gtk_button_new_with_label ("🦵🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🦵🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 17, 1, 1);

  emoji = gtk_button_new_with_label ("🦿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🦿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 18, 1, 1);

  emoji = gtk_button_new_with_label ("🦶🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🦶🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 19, 1, 1);

  emoji = gtk_button_new_with_label ("👄");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👄");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 20, 1, 1);

  emoji = gtk_button_new_with_label ("🦷");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🦷");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 21, 1, 1);

  emoji = gtk_button_new_with_label ("👅");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👅");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 22, 1, 1);

  emoji = gtk_button_new_with_label ("👂🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👂🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 23, 1, 1);

  emoji = gtk_button_new_with_label ("🦻🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🦻🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 24, 1, 1);

  emoji = gtk_button_new_with_label ("👃🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👃🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 5, 25, 1, 1);

  emoji = gtk_button_new_with_label ("👁");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👁");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 0, 1, 1);

  emoji = gtk_button_new_with_label ("👀");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👀");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 1, 1, 1);

  emoji = gtk_button_new_with_label ("🧠");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🧠");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 2, 1, 1);

  emoji = gtk_button_new_with_label ("🦴");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🦴");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 3, 1, 1);

  emoji = gtk_button_new_with_label ("👤");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👤");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 4, 1, 1);

  emoji = gtk_button_new_with_label ("👥");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👥");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 5, 1, 1);

  emoji = gtk_button_new_with_label ("🗣");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🗣");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 6, 1, 1);

  emoji = gtk_button_new_with_label ("👶🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👶🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 7, 1, 1);

  emoji = gtk_button_new_with_label ("👧🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👧🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 8, 1, 1);

  emoji = gtk_button_new_with_label ("🧒🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🧒🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 9, 1, 1);

  emoji = gtk_button_new_with_label ("👦🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👦🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 10, 1, 1);

  emoji = gtk_button_new_with_label ("👩🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👩🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 11, 1, 1);

  emoji = gtk_button_new_with_label ("🧑🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🧑🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 12, 1, 1);

  emoji = gtk_button_new_with_label ("👨🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👨🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 13, 1, 1);

  emoji = gtk_button_new_with_label ("👩🏿‍🦱");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👩🏿‍🦱");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 14, 1, 1);

  emoji = gtk_button_new_with_label ("🧑🏿‍🦱");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🧑🏿‍🦱");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 15, 1, 1);

  emoji = gtk_button_new_with_label ("👨🏿‍🦱");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👨🏿‍🦱");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 16, 1, 1);

  emoji = gtk_button_new_with_label ("👩🏿‍🦰");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👩🏿‍🦰");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 17, 1, 1);

  emoji = gtk_button_new_with_label ("🧑🏿‍🦰");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🧑🏿‍🦰");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 18, 1, 1);

  emoji = gtk_button_new_with_label ("👨🏿‍🦰");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👨🏿‍🦰");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 19, 1, 1);

  emoji = gtk_button_new_with_label ("👱🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👱🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 20, 1, 1);

  emoji = gtk_button_new_with_label ("👱🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👱🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 21, 1, 1);

  emoji = gtk_button_new_with_label ("👱🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👱🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 22, 1, 1);

  emoji = gtk_button_new_with_label ("👩🏿‍🦳");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👩🏿‍🦳");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 23, 1, 1);

  emoji = gtk_button_new_with_label ("🧑🏿‍🦳");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🧑🏿‍🦳");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 24, 1, 1);

  emoji = gtk_button_new_with_label ("👨🏿‍🦳");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👨🏿‍🦳");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 6, 25, 1, 1);

  emoji = gtk_button_new_with_label ("👩🏿‍🦲");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👩🏿‍🦲");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 0, 1, 1);

  emoji = gtk_button_new_with_label ("🧑🏿‍🦲");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🧑🏿‍🦲");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 1, 1, 1);

  emoji = gtk_button_new_with_label ("👨🏿‍🦲");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👨🏿‍🦲");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 2, 1, 1);

  emoji = gtk_button_new_with_label ("🧔🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🧔🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 3, 1, 1);

  emoji = gtk_button_new_with_label ("👵🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👵🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 4, 1, 1);

  emoji = gtk_button_new_with_label ("🧓🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🧓🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 5, 1, 1);

  emoji = gtk_button_new_with_label ("👴🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👴🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 6, 1, 1);

  emoji = gtk_button_new_with_label ("👲🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👲🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 7, 1, 1);

  emoji = gtk_button_new_with_label ("👳🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👳🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 8, 1, 1);

  emoji = gtk_button_new_with_label ("👳🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👳🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 9, 1, 1);

  emoji = gtk_button_new_with_label ("👳🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👳🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 10, 1, 1);

  emoji = gtk_button_new_with_label ("🧕🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🧕🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 11, 1, 1);

  emoji = gtk_button_new_with_label ("👼🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👼🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 12, 1, 1);

  emoji = gtk_button_new_with_label ("👸🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👸🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 13, 1, 1);

  emoji = gtk_button_new_with_label ("🤴🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤴🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 14, 1, 1);

  emoji = gtk_button_new_with_label ("👰🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👰🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 15, 1, 1);

  emoji = gtk_button_new_with_label ("🤵🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤵🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 16, 1, 1);

  emoji = gtk_button_new_with_label ("🤵🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤵🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 17, 1, 1);

  emoji = gtk_button_new_with_label ("🤵🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤵🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 18, 1, 1);

  emoji = gtk_button_new_with_label ("🙇🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙇🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 19, 1, 1);

  emoji = gtk_button_new_with_label ("🙇🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙇🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 20, 1, 1);

  emoji = gtk_button_new_with_label ("🙇🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙇🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 21, 1, 1);

  emoji = gtk_button_new_with_label ("💁🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💁🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 22, 1, 1);

  emoji = gtk_button_new_with_label ("💁🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💁🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 23, 1, 1);

  emoji = gtk_button_new_with_label ("💁🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💁🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 24, 1, 1);

  emoji = gtk_button_new_with_label ("🙅🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙅🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 7, 25, 1, 1);

  emoji = gtk_button_new_with_label ("🙅🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙅🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 0, 1, 1);

  emoji = gtk_button_new_with_label ("🙅🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙅🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 1, 1, 1);

  emoji = gtk_button_new_with_label ("🙆🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙆🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 2, 1, 1);

  emoji = gtk_button_new_with_label ("🙆🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙆🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 3, 1, 1);

  emoji = gtk_button_new_with_label ("🙆🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙆🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 4, 1, 1);

  emoji = gtk_button_new_with_label ("🤷🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤷🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 5, 1, 1);

  emoji = gtk_button_new_with_label ("🤷🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤷🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 6, 1, 1);

  emoji = gtk_button_new_with_label ("🤷🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤷🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 7, 1, 1);

  emoji = gtk_button_new_with_label ("🙋🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙋🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 8, 1, 1);

  emoji = gtk_button_new_with_label ("🙋🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙋🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 9, 1, 1);

  emoji = gtk_button_new_with_label ("🙋🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙋🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 10, 1, 1);

  emoji = gtk_button_new_with_label ("🤦🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤦🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 11, 1, 1);

  emoji = gtk_button_new_with_label ("🤦🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤦🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 12, 1, 1);

  emoji = gtk_button_new_with_label ("🤦🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤦🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 13, 1, 1);

  emoji = gtk_button_new_with_label ("🙎🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙎🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 14, 1, 1);

  emoji = gtk_button_new_with_label ("🙎🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙎🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 15, 1, 1);

  emoji = gtk_button_new_with_label ("🙎🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙎🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 16, 1, 1);

  emoji = gtk_button_new_with_label ("🙍🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙍🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 17, 1, 1);

  emoji = gtk_button_new_with_label ("🙍🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙍🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 18, 1, 1);

  emoji = gtk_button_new_with_label ("🙍🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🙍🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 19, 1, 1);

  emoji = gtk_button_new_with_label ("💇🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💇🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 20, 1, 1);

  emoji = gtk_button_new_with_label ("💇🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💇🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 21, 1, 1);

  emoji = gtk_button_new_with_label ("💇🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💇🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 22, 1, 1);

  emoji = gtk_button_new_with_label ("💆🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💆🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 23, 1, 1);

  emoji = gtk_button_new_with_label ("💆🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💆🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 24, 1, 1);

  emoji = gtk_button_new_with_label ("💆🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💆🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 8, 25, 1, 1);

  emoji = gtk_button_new_with_label ("🤰🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤰🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 0, 1, 1);

  emoji = gtk_button_new_with_label ("🤱🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🤱🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 1, 1, 1);

  emoji = gtk_button_new_with_label ("🚶🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🚶🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 2, 1, 1);

  emoji = gtk_button_new_with_label ("🚶🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🚶🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 3, 1, 1);

  emoji = gtk_button_new_with_label ("🚶🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🚶🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 4, 1, 1);

  emoji = gtk_button_new_with_label ("🏃🏿‍♀️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🏃🏿‍♀️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 5, 1, 1);

  emoji = gtk_button_new_with_label ("🏃🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🏃🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 6, 1, 1);

  emoji = gtk_button_new_with_label ("🏃🏿‍♂️");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🏃🏿‍♂️");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 7, 1, 1);

  emoji = gtk_button_new_with_label ("💃🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💃🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 8, 1, 1);

  emoji = gtk_button_new_with_label ("🕺🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🕺🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 9, 1, 1);

  emoji = gtk_button_new_with_label ("👫🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👫🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 10, 1, 1);

  emoji = gtk_button_new_with_label ("👭🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👭🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 11, 1, 1);

  emoji = gtk_button_new_with_label ("👬🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👬🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 12, 1, 1);

  emoji = gtk_button_new_with_label ("🧑🏿‍🤝‍🧑🏿");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🧑🏿‍🤝‍🧑🏿");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 13, 1, 1);

  emoji = gtk_button_new_with_label ("👩‍❤️‍👨");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👩‍❤️‍👨");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 14, 1, 1);

  emoji = gtk_button_new_with_label ("👩‍❤️‍👩");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👩‍❤️‍👩");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 15, 1, 1);

  emoji = gtk_button_new_with_label ("👨‍❤️‍👨");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👨‍❤️‍👨");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 16, 1, 1);

  emoji = gtk_button_new_with_label ("👩‍❤️‍💋‍👨");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👩‍❤️‍💋‍👨");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 17, 1, 1);

  emoji = gtk_button_new_with_label ("👩‍❤️‍💋‍👩");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👩‍❤️‍💋‍👩");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 18, 1, 1);

  emoji = gtk_button_new_with_label ("👨‍❤️‍💋‍👨");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "👨‍❤️‍💋‍👨");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 19, 1, 1);

  emoji = gtk_button_new_with_label ("🖤");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🖤");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 20, 1, 1);

  emoji = gtk_button_new_with_label ("❤");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "❤");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 21, 1, 1);
  
  emoji = gtk_button_new_with_label ("🍑");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🍑");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 22, 1, 1);
  
  emoji = gtk_button_new_with_label ("🍓");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "🍓");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 23, 1, 1);

  emoji = gtk_button_new_with_label ("💥");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💥");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 24, 1, 1);
  
  emoji = gtk_button_new_with_label ("💋");
  g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), "💋");
  gtk_grid_attach (GTK_GRID (emojisGrid), emoji, 9, 25, 1, 1);

  gtk_widget_show_all (window);
  gtk_main();
}

int main (int argc, char **argv)
{
  GtkApplication *app;
  int status;
  
  app = gtk_application_new ("com.mendesc.emojiselector", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}