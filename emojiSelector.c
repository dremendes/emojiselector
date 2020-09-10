#include <gtk/gtk.h>
#include <stdbool.h>

typedef struct Emoji
{
    char emojiCode[28];
    char description[255];
    int numTimesClicked;
};

GtkClipboard   *clipboard;
GtkWidget      *window;
GtkWidget      *emojisGrid;
GtkSearchEntry *search_entry;
GtkWidget      *label;

struct Emoji emojis[260];
char   arrayEmojis[260][28] = {"😀","😃","😄","😁","😆","😅","😂","🤣","😇","😉","😊","🙂","🙃","☺","😋","😌","😍","🥰","😘","😗","😙","😚","🤪","😜","😝","😛","🤑","😎","🤓","🧐","🤠","🥳","🤗","🤡","😏","😶","😐","😑","😒","🙄","🤨","🤔","🤫","🤭","🤥","😳","😞","😟","😠","😡","🤬","😔","😕","🙁","☹","😬","🥺","😣","😖","😫","😩","🥱","😤","😮","😱","😨","😰","😯","😦","😧","😢","😥","😪","🤤","😓","😭","🤩","😵","🥴","😲","🤯","🤐","😷","🤕","🤒","🤮","🤢","🤧","🥵","🥶","😴","💤","😈","👿","👹","👺","💩","👻","💀","☠","👽","🤖","🎃","😺","😸","😹","😻","😼","😽","🙀","😿","😾","👐🏿","🤲🏿","🙌🏿","👏🏿","🙏🏿","🤝","👍🏿","👎🏿","👊🏿","✊🏿","🤛🏿","🤜🏿","🤞🏿","✌🏿","🤘🏿","🤟🏿","👌🏿","🤏🏿","👈🏿","👉🏿","👆🏿","👇🏿","☝🏿","✋🏿","🤚🏿","🖐🏿","🖖🏿","👋🏿","🤙🏿","💪🏿","🦾","🖕🏿","✍🏿","🤳🏿","💅🏿","🦵🏿","🦿","🦶🏿","👄","🦷","👅","👂🏿","🦻🏿","👃🏿","👁","👀","🧠","🦴","👤","👥","🗣","👶🏿","👧🏿","🧒🏿","👦🏿","👩🏿","🧑🏿","👨🏿","👩🏿‍🦱","🧑🏿‍🦱","👨🏿‍🦱","👩🏿‍🦰","🧑🏿‍🦰","👨🏿‍🦰","👱🏿‍♀️","👱🏿","👱🏿‍♂️","👩🏿‍🦳","🧑🏿‍🦳","👨🏿‍🦳","👩🏿‍🦲","🧑🏿‍🦲","👨🏿‍🦲","🧔🏿","👵🏿","🧓🏿","👴🏿","👲🏿","👳🏿‍♀️","👳🏿","👳🏿‍♂️","🧕🏿","👼🏿","👸🏿","🤴🏿","👰🏿","🤵🏿‍♀️","🤵🏿","🤵🏿‍♂️","🙇🏿‍♀️","🙇🏿","🙇🏿‍♂️","💁🏿‍♀️","💁🏿","💁🏿‍♂️","🙅🏿‍♀️","🙅🏿","🙅🏿‍♂️","🙆🏿‍♀️","🙆🏿","🙆🏿‍♂️","🤷🏿‍♀️","🤷🏿","🤷🏿‍♂️","🙋🏿‍♀️","🙋🏿","🙋🏿‍♂️","🤦🏿‍♀️","🤦🏿","🤦🏿‍♂️","🙎🏿‍♀️","🙎🏿","🙎🏿‍♂️","🙍🏿‍♀️","🙍🏿","🙍🏿‍♂️","💇🏿‍♀️","💇🏿","💇🏿‍♂️","💆🏿‍♀️","💆🏿","💆🏿‍♂️","🤰🏿","🤱🏿","🚶🏿‍♀️","🚶🏿","🚶🏿‍♂️","🏃🏿‍♀️","🏃🏿","🏃🏿‍♂️","💃🏿","🕺🏿","👫🏿","👭🏿","👬🏿","🧑🏿‍🤝‍🧑🏿","👩‍❤️‍👨","👩‍❤️‍👩","👨‍❤️‍👨","👩‍❤️‍💋‍👨","👩‍❤️‍💋‍👩","👨‍❤️‍💋‍👨","🖤","❤","🍑","🍓","💥","💋"};
int    count = sizeof (emojis) / sizeof (struct Emoji);

static void
action_on_emoji_click (GtkWidget *widget,
             gpointer   data);

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
copy_emoji_to_clipboard (GtkWidget *widget,
                         gpointer   data)
{
  gtk_clipboard_set_text (clipboard, 
                          (gchar *) emojis[(int) data].emojiCode,
                          -1); //-1 so gtk does sizeOf on previous arguments
  g_message ("Copied %s  to clipboard",
             (gchar *) emojis[(int) data].emojiCode);
}

static void
increase_emoji_click_counter (gpointer  data)
{
  emojis[(int) data].numTimesClicked++;
  g_message ("Increased click counter for emoji %i", (gint *) data); 
}

static int
comparison_by_times_clicked (const void *e1, 
                            const void *e2)
{
  const struct Emoji *emoji1 = e1;
  const struct Emoji *emoji2 = e2;

  return emoji1->numTimesClicked == emoji2->numTimesClicked ? 
         0 : (emoji1->numTimesClicked < emoji2->numTimesClicked ? 1 : -1);
}

static void
sort_struct_emoji_array(struct Emoji *e[])
{
  qsort (e, count, sizeof (struct Emoji), comparison_by_times_clicked);
}

static int
populate_emoji_struct(int i, struct Emoji *e, char arrE[260][28])
{
  strncpy(e[i].emojiCode, arrE[i], sizeof(arrE[i]));
  strncpy(e[i].description, "as" + (char) i, 28);

  return 0;
}

static void
position_new_button_in_grid(int i, struct Emoji *e, GtkWidget *wdGrid)
{
  GtkWidget      *emoji;

  emoji = gtk_button_new_with_label (e[i].emojiCode);
  g_signal_connect (emoji, 
                    "clicked", 
                    G_CALLBACK (action_on_emoji_click), i);
  gtk_grid_attach (GTK_GRID (wdGrid), emoji, i % 10, i / 10 + 2, 1, 1);
}

static void
draw_interface_grid(bool firstDrawn, GtkWidget *wdGrid)
{
  gtk_container_add (GTK_CONTAINER (window), wdGrid);

  for (int i = 0; i < 260; i++)
  {
      firstDrawn && populate_emoji_struct(i, emojis, arrayEmojis);
      position_new_button_in_grid(i, emojis, wdGrid);
  }  

  search_entry = gtk_search_entry_new ();
  label = gtk_label_new ("Digite para filtrar / Start Typing to filter");
  gtk_grid_attach (GTK_GRID (wdGrid), GTK_WIDGET(search_entry), 0, 0, 11, 1);
  gtk_grid_attach (GTK_GRID (wdGrid), GTK_WIDGET(label), 0, 1, 11, 1);
  g_signal_connect (search_entry, "search-changed",
      G_CALLBACK (filter_results), label);

  gtk_widget_show_all (window);
}

static void
swap_interface_grid_for_a_clean_one()
{
  GtkWidget      *emoji;

  gtk_container_remove (GTK_CONTAINER (window), emojisGrid);
  emojisGrid = gtk_grid_new ();
}

static void
action_on_emoji_click (GtkWidget *widget,
             gpointer   data)
{
  copy_emoji_to_clipboard(widget, data);
  increase_emoji_click_counter(data);
  sort_struct_emoji_array(emojis);
  swap_interface_grid_for_a_clean_one();
  draw_interface_grid(false, emojisGrid); 
  //false means not first run - no need to populate Emoji struct
}

static void
activate (GtkApplication* app,
          gpointer        user_data)
{
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

  draw_interface_grid(true, emojisGrid); //1 is to say "first time drawn"

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