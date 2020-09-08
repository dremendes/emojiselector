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
  char    arrayEmojis[260][27] = {"😀","😃","😄","😁","😆","😅","😂","🤣","😇","😉","😊","🙂","🙃","☺","😋","😌","😍","🥰","😘","😗","😙","😚","🤪","😜","😝","😛","🤑","😎","🤓","🧐","🤠","🥳","🤗","🤡","😏","😶","😐","😑","😒","🙄","🤨","🤔","🤫","🤭","🤥","😳","😞","😟","😠","😡","🤬","😔","😕","🙁","☹","😬","🥺","😣","😖","😫","😩","🥱","😤","😮","😱","😨","😰","😯","😦","😧","😢","😥","😪","🤤","😓","😭","🤩","😵","🥴","😲","🤯","🤐","😷","🤕","🤒","🤮","🤢","🤧","🥵","🥶","😴","💤","😈","👿","👹","👺","💩","👻","💀","☠","👽","🤖","🎃","😺","😸","😹","😻","😼","😽","🙀","😿","😾","👐🏿","🤲🏿","🙌🏿","👏🏿","🙏🏿","🤝","👍🏿","👎🏿","👊🏿","✊🏿","🤛🏿","🤜🏿","🤞🏿","✌🏿","🤘🏿","🤟🏿","👌🏿","🤏🏿","👈🏿","👉🏿","👆🏿","👇🏿","☝🏿","✋🏿","🤚🏿","🖐🏿","🖖🏿","👋🏿","🤙🏿","💪🏿","🦾","🖕🏿","✍🏿","🤳🏿","💅🏿","🦵🏿","🦿","🦶🏿","👄","🦷","👅","👂🏿","🦻🏿","👃🏿","👁","👀","🧠","🦴","👤","👥","🗣","👶🏿","👧🏿","🧒🏿","👦🏿","👩🏿","🧑🏿","👨🏿","👩🏿‍🦱","🧑🏿‍🦱","👨🏿‍🦱","👩🏿‍🦰","🧑🏿‍🦰","👨🏿‍🦰","👱🏿‍♀️","👱🏿","👱🏿‍♂️","👩🏿‍🦳","🧑🏿‍🦳","👨🏿‍🦳","👩🏿‍🦲","🧑🏿‍🦲","👨🏿‍🦲","🧔🏿","👵🏿","🧓🏿","👴🏿","👲🏿","👳🏿‍♀️","👳🏿","👳🏿‍♂️","🧕🏿","👼🏿","👸🏿","🤴🏿","👰🏿","🤵🏿‍♀️","🤵🏿","🤵🏿‍♂️","🙇🏿‍♀️","🙇🏿","🙇🏿‍♂️","💁🏿‍♀️","💁🏿","💁🏿‍♂️","🙅🏿‍♀️","🙅🏿","🙅🏿‍♂️","🙆🏿‍♀️","🙆🏿","🙆🏿‍♂️","🤷🏿‍♀️","🤷🏿","🤷🏿‍♂️","🙋🏿‍♀️","🙋🏿","🙋🏿‍♂️","🤦🏿‍♀️","🤦🏿","🤦🏿‍♂️","🙎🏿‍♀️","🙎🏿","🙎🏿‍♂️","🙍🏿‍♀️","🙍🏿","🙍🏿‍♂️","💇🏿‍♀️","💇🏿","💇🏿‍♂️","💆🏿‍♀️","💆🏿","💆🏿‍♂️","🤰🏿","🤱🏿","🚶🏿‍♀️","🚶🏿","🚶🏿‍♂️","🏃🏿‍♀️","🏃🏿","🏃🏿‍♂️","💃🏿","🕺🏿","👫🏿","👭🏿","👬🏿","🧑🏿‍🤝‍🧑🏿","👩‍❤️‍👨","👩‍❤️‍👩","👨‍❤️‍👨","👩‍❤️‍💋‍👨","👩‍❤️‍💋‍👩","👨‍❤️‍💋‍👨","🖤","❤","🍑","🍓","💥","💋"};

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

  for (int i = 0; i < 260; i++)
  {
      emoji = gtk_button_new_with_label (arrayEmojis[i]);
      g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), arrayEmojis[i]);
      gtk_grid_attach (GTK_GRID (emojisGrid), emoji, i % 10, i / 10, 1, 1);
  }
  

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