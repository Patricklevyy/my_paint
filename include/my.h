/*
** EPITECH PROJECT, 2023
** B-MUL-200-LYN-2-1-mypaint-gnanmienlie-patrick-levy.n-da
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <fcntl.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <unistd.h>
    #include <math.h>

    typedef struct SETTINGS {
        sfVideoMode mode;
        sfRenderWindow *window;
        sfEvent event;
    } SETTINGS_T;

    typedef struct Drop_down_edit {
        sfRectangleShape *buttonRect;
        sfVector2f size;
        sfVector2f pos;
        sfFloatRect buttonBounds;
        sfBool bool;
        sfBool isShowingDropdown;;
    } Drop_down_edit_T;

    typedef struct Drop_down {
        sfRectangleShape *buttonRect;
        sfVector2f size;
        sfVector2f pos;
        sfFloatRect buttonBounds;
        sfBool bool;
        sfBool isShowingDropdown;;
    } Drop_down_T;

    typedef struct rectangle {
        sfRectangleShape *back;
        sfVector2f back_size;
        sfVector2f back_pos;
    } rectangle_T;

    typedef struct circle {
        sfCircleShape *c;
        sfVector2f pos_circle;
        float radius;
        float thickness;
    } circle_T;

    typedef struct colors_mngmt {
        sfRectangleShape *rec;
        sfVector2f size;
        sfVector2f pos;
        sfColor *color;
        int colors_blue;
        int colors_white;
        int colors_black;
        int colors_red;
        int colors_green;
        int colors_yellow;
    } colors_mngmt_T;

    typedef struct MAP {
        sfTexture *test;
        sfSprite *sprite;
        sfVector2f position;
        sfVector2f scale;
        sfUint8 *pixels;
    } MAP_T;

    typedef struct PAINT {
        SETTINGS_T *window;
        MAP_T *params;
        rectangle_T *try;
        circle_T *cercle;
        colors_mngmt_T *colors;
        Drop_down_T *menu;
        Drop_down_edit_T *edit;
    } PAINT_T;

void base_my_paint(PAINT_T *ALL);
void set_windows(PAINT_T *ALL);

void create_option2_sprite(PAINT_T *ALL);
void create_about_edit_sprite(PAINT_T *ALL);
void create_sprite(PAINT_T *ALL);
sfColor recup_colors(PAINT_T *ALL);
void init_color(PAINT_T *ALL);

void set_pencil(PAINT_T *ALL, sfEvent event);

void set_scrub(PAINT_T *ALL, sfEvent event);
void create_scrub(PAINT_T *ALL);
void change_scrub(PAINT_T *ALL);

void create_white_backgound(PAINT_T *ALL);
void create_edit_menu(PAINT_T *ALL);
void create_base_paint_img(PAINT_T *ALL);

void create_edit_sprite(PAINT_T *ALL);
void change_edit(PAINT_T *ALL);
void create_about_sprite(PAINT_T *ALL);
void change_about(PAINT_T *ALL);
void create_file_sprite(PAINT_T *ALL);
void change_file(PAINT_T *ALL);
void create_help_sprite(PAINT_T *ALL);
void change_help(PAINT_T *ALL);

void set_about_edit_menu(PAINT_T *ALL, sfEvent event);
void display_option_edit_menu(PAINT_T *ALL);
void get_back_from_option_edit_menu(PAINT_T *ALL);
void set_function_edit_menu(PAINT_T *ALL, sfEvent event);
void set_option(PAINT_T *ALL);
void get_back_from_option(PAINT_T *ALL);
void display_option(PAINT_T *ALL);
void set_option(PAINT_T *ALL);
void go_to_paint_part(PAINT_T *ALL);
void create_box_paint(PAINT_T *ALL);
void manage_event_base_paint(PAINT_T *ALL, sfEvent event);
int change_option_colour(PAINT_T *ALL);
void create_circle_aroud_option(PAINT_T *ALL);
void draw_option_circle(PAINT_T *ALL, sfEvent event);
void draw_paint_rectangle(PAINT_T *ALL, sfEvent event);
int change_paint_color(PAINT_T *ALL);
int change_back_option_color(PAINT_T *ALL);
void manage_display_option_event(PAINT_T *ALL, sfEvent event);
void create_option_back_button(PAINT_T *ALL);
void create_option_sprite(PAINT_T *ALL);
void display_option(PAINT_T *ALL);
void create_blue_rect(PAINT_T *ALL);
int change_blue_rect_color(PAINT_T *ALL);
int change_green_rect_color(PAINT_T *ALL);
void create_green_rect(PAINT_T *ALL);
void manage_event_mouse_green(PAINT_T *ALL, sfEvent event);
void manage_event_mouse_blue(PAINT_T *ALL, sfEvent event);
void manage_event_mouse_red(PAINT_T *ALL, sfEvent event);
int change_red_rect_color(PAINT_T *ALL);
void create_red_rect(PAINT_T *ALL);


int change_yellow_rect_color(PAINT_T *ALL);
void create_yellow_rect(PAINT_T *ALL);
void manage_event_mouse_yellow(PAINT_T *ALL, sfEvent event);
void manage_event_mouse_black(PAINT_T *ALL, sfEvent event);
int change_black_rect_color(PAINT_T *ALL);
void create_black_rect(PAINT_T *ALL);
void create_white_rect(PAINT_T *ALL);
int change_white_rect_color(PAINT_T *ALL);
void manage_event_mouse_white(PAINT_T *ALL, sfEvent event);
void display_paint_part(PAINT_T *ALL);
void create_rect_color(PAINT_T *ALL);
void draw_rec_color(PAINT_T *ALL);
void set_no_idea(PAINT_T *ALL);
void display_no_idea_sprite(PAINT_T *ALL);
sfText *create_back_text(sfVector2f text_pos);
void create_no_idea_sprite(PAINT_T *ALL);
void display_file_saved(PAINT_T *ALL);
void create_file_saved(PAINT_T *ALL);
void set_file_saved(PAINT_T *ALL);
void restrat_paint(PAINT_T *ALL);
void back_to_menu(PAINT_T *ALL);
void create_circle_restart(PAINT_T *ALL);
int change_circle_restart(PAINT_T *ALL);
void draw_circle_restart(PAINT_T *ALL, sfEvent event);
void create_circle_repaint(PAINT_T *ALL);
int change_circle_repaint(PAINT_T *ALL);
void draw_circle_repaint(PAINT_T *ALL, sfEvent event);
void create_ampoule(PAINT_T *ALL);
void create_replace_file_saved(PAINT_T *ALL);
void create_pencil(PAINT_T *ALL);
void create_back_paint_part(PAINT_T *ALL);
void manage_back_paint_part_event(PAINT_T *ALL, sfEvent event);
void go_to_menu_from_paint(PAINT_T *ALL);
void mngmt_no_idea_event(PAINT_T *ALL, sfText *text, sfEvent event);
void manage_evt_display_paint_part2(PAINT_T *ALL,
sfEvent event, sfText *text);
void create_noidea_back_button(PAINT_T *ALL);
void manage_event_display_paint_part(PAINT_T *ALL, sfEvent event);
void change_pencil(PAINT_T *ALL);
void change_replace_file_saved(PAINT_T *ALL);
void change_ampoule(PAINT_T *ALL);
void create_white_backgound(PAINT_T *ALL);
int recup_file_name(PAINT_T *ALL);
void set_pixels(PAINT_T *ALL);
int my_strlen( char const *str);
void condition_mouse_to_draw(PAINT_T *ALL, int rad, sfColor col, sfBool isD);
void draw(PAINT_T *ALL, int radius, sfColor color);
void create_file_not_saved(PAINT_T *ALL);
void mngmt_file_not_saved_event(PAINT_T *ALL, sfEvent event);
void display_file_not_saved(PAINT_T *ALL);
void draw_circle_restart_from_not_saved(PAINT_T *ALL, sfEvent event);
void create_circle_restart_from_not_saved(PAINT_T *ALL);
int change_circle_restart_from_not_saved(PAINT_T *ALL);
void go_back_to_paint_from_not_saved(PAINT_T *ALL);
void create_circle_go_to_menu_from_notsaved(PAINT_T *ALL);
int change_circle_go_to_menu_from_notsaved(PAINT_T *ALL);
void draw_circle_go_to_menu_from_notsaved(PAINT_T *ALL, sfEvent event);
void go_back_to_menu_from_not_saved(PAINT_T *ALL);
void create_first_file_rect(PAINT_T *ALL);
void create_second_file_rect(PAINT_T *ALL);
void create_third_file_rect(PAINT_T *ALL);
void create_fourth_file_rect(PAINT_T *ALL);
int condition_to_draw_file_rect_n_text(PAINT_T *ALL);
void condition_with_file_bool(PAINT_T *ALL);
void manage_file_event_mouse_clicked(PAINT_T *ALL, sfEvent event);
void init_file_bool(PAINT_T *ALL);
sfText *create_new_file_text(sfVector2f text_pos, char *string);
void create_first_edit_rect(PAINT_T *ALL);
void create_second_edit_rect(PAINT_T *ALL);
void create_third_edit_rect(PAINT_T *ALL);
int condition_to_draw_edit_rect_n_text(PAINT_T *ALL);
void condition_with_edit_bool(PAINT_T *ALL);
void init_edit_bool(PAINT_T *ALL);
void manage_edit_event_mouse_clicked(PAINT_T *ALL, sfEvent event);
void add_condition_to_save_or_not(PAINT_T *ALL);
void free_struct(PAINT_T *ALL);
void malloc_struct(PAINT_T *ALL);
void create_all_drop_down_rect(PAINT_T *ALL);
void draw_drop_down_rect_evt_paint_part(PAINT_T *ALL);
void check_press_pencil(PAINT_T *ALL, sfEvent event);
void check_press_scrub(PAINT_T *ALL, sfEvent event);

#endif /* !MY_H_ */
