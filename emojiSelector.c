#include <gtk/gtk.h>

typedef struct Emoji
{
    char emojiCode[28];
    char description[255];
    int numTimesClicked;
    int index;
};

GtkClipboard *clipboard;
struct Emoji emojis[260];
int    count;

static void
copy_to_clipboard (GtkWidget *widget,
                   gpointer   data)
{
  gtk_clipboard_set_text (clipboard, 
                          (gchar *) emojis[(int) data].emojiCode,
                          -1);
  g_message ("Copied %s  to clipboard",
             (gchar *) emojis[(int) data].emojiCode);
}

static void
increase_emoji_counter (struct Emoji *emojiArray, int index)
{
  emojiArray[index].numTimesClicked++;
}

static int
emoji_cmp (const void *e1, const void *e2)
{
  const struct Emoji *emoji1 = e1;
  const struct Emoji *emoji2 = e2;

  return emoji1->numTimesClicked == emoji2->numTimesClicked ? 
         0 : (emoji1->numTimesClicked < emoji2->numTimesClicked ? -1 : 0);
}

static void
action_click (GtkWidget *widget,
             gpointer   data)
{
  copy_to_clipboard(widget, data);
  increase_emoji_counter(emojis, (int) data);
  qsort (emojis, count, sizeof (emojis), emoji_cmp);
}

static void
filter_results (GtkSearchEntry *entry,
                GtkLabel       *result_label)
{
  const char *textToFilter;
  textToFilter = gtk_entry_get_text (GTK_ENTRY (entry));
  g_message ("Filtering by: %s Found %i results", textToFilter, 0);
  gtk_label_set_text (result_label,
                      strcmp(textToFilter, "") 
                      != 0 
                        ? textToFilter 
                        : "Digite para filtrar / Start Typing to filter");
}

static void
activate (GtkApplication* app,
          gpointer        user_data)
{
  GtkWidget      *window;
  GtkWidget      *emojisGrid;
  GtkWidget      *emoji;
  GtkSearchEntry *search_entry;
  GtkWidget      *label;

  char  arrayEmojis[260][28] = {"😀","😃","😄","😁","😆","😅","😂","🤣","😇","😉","😊","🙂","🙃","☺","😋","😌","😍","🥰","😘","😗","😙","😚","🤪","😜","😝","😛","🤑","😎","🤓","🧐","🤠","🥳","🤗","🤡","😏","😶","😐","😑","😒","🙄","🤨","🤔","🤫","🤭","🤥","😳","😞","😟","😠","😡","🤬","😔","😕","🙁","☹","😬","🥺","😣","😖","😫","😩","🥱","😤","😮","😱","😨","😰","😯","😦","😧","😢","😥","😪","🤤","😓","😭","🤩","😵","🥴","😲","🤯","🤐","😷","🤕","🤒","🤮","🤢","🤧","🥵","🥶","😴","💤","😈","👿","👹","👺","💩","👻","💀","☠","👽","🤖","🎃","😺","😸","😹","😻","😼","😽","🙀","😿","😾","👐🏿","🤲🏿","🙌🏿","👏🏿","🙏🏿","🤝","👍🏿","👎🏿","👊🏿","✊🏿","🤛🏿","🤜🏿","🤞🏿","✌🏿","🤘🏿","🤟🏿","👌🏿","🤏🏿","👈🏿","👉🏿","👆🏿","👇🏿","☝🏿","✋🏿","🤚🏿","🖐🏿","🖖🏿","👋🏿","🤙🏿","💪🏿","🦾","🖕🏿","✍🏿","🤳🏿","💅🏿","🦵🏿","🦿","🦶🏿","👄","🦷","👅","👂🏿","🦻🏿","👃🏿","👁","👀","🧠","🦴","👤","👥","🗣","👶🏿","👧🏿","🧒🏿","👦🏿","👩🏿","🧑🏿","👨🏿","👩🏿‍🦱","🧑🏿‍🦱","👨🏿‍🦱","👩🏿‍🦰","🧑🏿‍🦰","👨🏿‍🦰","👱🏿‍♀️","👱🏿","👱🏿‍♂️","👩🏿‍🦳","🧑🏿‍🦳","👨🏿‍🦳","👩🏿‍🦲","🧑🏿‍🦲","👨🏿‍🦲","🧔🏿","👵🏿","🧓🏿","👴🏿","👲🏿","👳🏿‍♀️","👳🏿","👳🏿‍♂️","🧕🏿","👼🏿","👸🏿","🤴🏿","👰🏿","🤵🏿‍♀️","🤵🏿","🤵🏿‍♂️","🙇🏿‍♀️","🙇🏿","🙇🏿‍♂️","💁🏿‍♀️","💁🏿","💁🏿‍♂️","🙅🏿‍♀️","🙅🏿","🙅🏿‍♂️","🙆🏿‍♀️","🙆🏿","🙆🏿‍♂️","🤷🏿‍♀️","🤷🏿","🤷🏿‍♂️","🙋🏿‍♀️","🙋🏿","🙋🏿‍♂️","🤦🏿‍♀️","🤦🏿","🤦🏿‍♂️","🙎🏿‍♀️","🙎🏿","🙎🏿‍♂️","🙍🏿‍♀️","🙍🏿","🙍🏿‍♂️","💇🏿‍♀️","💇🏿","💇🏿‍♂️","💆🏿‍♀️","💆🏿","💆🏿‍♂️","🤰🏿","🤱🏿","🚶🏿‍♀️","🚶🏿","🚶🏿‍♂️","🏃🏿‍♀️","🏃🏿","🏃🏿‍♂️","💃🏿","🕺🏿","👫🏿","👭🏿","👬🏿","🧑🏿‍🤝‍🧑🏿","👩‍❤️‍👨","👩‍❤️‍👩","👨‍❤️‍👨","👩‍❤️‍💋‍👨","👩‍❤️‍💋‍👩","👨‍❤️‍💋‍👨","🖤","❤","🍑","🍓","💥","💋"};

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

      strncpy(emojis[i].emojiCode, arrayEmojis[i], sizeof(arrayEmojis[i]));
      strncpy(emojis[i].description, "as" + (char) i, 27);
      emojis[i].numTimesClicked = 0;
      emojis[i].index = i;
      emoji = gtk_button_new_with_label (emojis[i].emojiCode);
      g_signal_connect (emoji, "clicked", G_CALLBACK (copy_to_clipboard), i);
      gtk_grid_attach (GTK_GRID (emojisGrid), emoji, i % 10, i / 10 + 2, 1, 1);
  }  

  count = sizeof (emojis) / sizeof (struct Emoji);

  search_entry = gtk_search_entry_new ();
  label = gtk_label_new ("Digite para filtrar / Start Typing to filter");
  gtk_grid_attach (GTK_GRID (emojisGrid), GTK_WIDGET(search_entry), 0, 0, 11, 1);
  gtk_grid_attach (GTK_GRID (emojisGrid), GTK_WIDGET(label), 0, 1, 11, 1);
  g_signal_connect (search_entry, "search-changed",
      G_CALLBACK (filter_results), label);

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