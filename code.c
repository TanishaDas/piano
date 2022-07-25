#include <gtk/gtk.h>
#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>


static void play_c(GtkWidget* widget,gpointer data)
{
    FILE *fp=fopen("piano1.txt","a");
    //char c[1]="C";
    fputc('C', fp);
    fputc('-', fp);
    Beep(523.251,500);
    fclose(fp);
}

static void play_d(GtkWidget* widget,gpointer data)
{
    FILE *fp=fopen("piano1.txt","a");
    fputc('D',fp);
    fputc('-',fp);
    Beep(587.330,500);
     fclose(fp);
    //printf("\tD");
}
static void play_e(GtkWidget* widget,gpointer data)
{
    FILE *fp=fopen("piano1.txt","a");
    fputc('E',fp);
    fputc('-',fp);
    Beep(659.255,500);
     fclose(fp);
}
static void play_f(GtkWidget* widget,gpointer data)
{
    FILE *fp=fopen("piano1.txt","a");
    fputc('F',fp);
    fputc('-',fp);
    Beep(698.456,500);
     fclose(fp);
}
static void play_g(GtkWidget* widget,gpointer data)
{
    FILE *fp=fopen("piano1.txt","a");
    fputc('G',fp);
    fputc('-',fp);
    Beep(783.991,500);
     fclose(fp);
}
static void play_a(GtkWidget* widget,gpointer data)
{
    FILE *fp=fopen("piano1.txt","a");
    fputc('A',fp);
    fputc('-',fp);
    Beep(880.000,500);
     fclose(fp);
}
static void play_b(GtkWidget* widget,gpointer data)
{
    FILE *fp=fopen("piano1.txt","a");
    fputc('B',fp);
    fputc('-',fp);
    Beep(987.767,500);
     fclose(fp);
}
static void play_csharp(GtkWidget* widget, gpointer data)
{
    FILE *fp=fopen("piano1,txt","a");
    fputc('C',fp);
    fputc('#',fp);
    fputc('-',fp);
    Beep(277.183,500);
}
static void play_dsharp(GtkWidget* widget, gpointer data)
{
    FILE *fp=fopen("piano1.txt","a");
    fputc('D',fp);
    fputc('#',fp);
    fputc('-',fp);
    Beep(311.127,500);
}
static void play_fsharp(GtkWidget* widget, gpointer data)
{
    FILE *fp=fopen("piano1.txt","a");
    fputc('F',fp);
    fputc('#',fp);
    fputc('-',fp);
    Beep(369.994,500);
}
static void play_gsharp(GtkWidget* widget, gpointer data)
{
    FILE *fp=fopen("piano1.txt","a");
    fputc('G',fp);
    fputc('#',fp);
    fputc('-',fp);
    Beep(415.305 ,500);
}
static void play_asharp(GtkWidget* widget, gpointer data)
{
    FILE *fp=fopen("piano1.txt","a");
    fputc('A',fp);
    fputc('#',fp);
    fputc('-',fp);
    Beep(466.164  ,500);
}

static void jbells(GtkWidget* widget,gpointer data)
{

Beep(659.3, 500);
Beep(659.3, 500);
Beep(659.3, 500);

Sleep(500);

Beep(659.3, 500);
Beep(659.3, 500);
Beep(659.3, 500);

Sleep(500);

Beep(659.3, 500);
Beep(784.0, 500);
Beep(523.3, 500);
Beep(587.3, 500);
Beep(659.3, 500);

Beep(261.6, 500);
Beep(293.7, 500);
Beep(329.6, 500);

Beep(698.5, 500);
Beep(698.5, 500);
Beep(698.5, 500);

Sleep(500);

Beep(698.5, 500);
Beep(659.3, 500);
Beep(659.3, 500);

Sleep(500);

Beep(659.3, 500);
Beep(587.3, 500);
Beep(587.3, 500);
Beep(659.3, 500);
Beep(587.3, 500);

Sleep(500);

}
//twinkle twinkle little stars
static void t_s(GtkWidget* widget,gpointer data){

Beep(523.251,500);
Beep(523.251,500);
Beep(783.991,500);
Beep(783.991,500);
Beep(880,500);
Beep(880,500);
Beep(783.991,500);

Beep(698.456,500);
Beep(698.456,500);
Beep(659.255,500);
Beep(659.255,500);
Beep(587.330,500);
Beep(587.330,500);
Beep(523.251,500);

Beep(783.991,500);
Beep(783.991,500);
Beep(698.456,500);
Beep(698.456,500);
Beep(659.255,500);
Beep(659.255,500);
Beep(587.330,500);

Beep(783.991,500);
Beep(783.991,500);
Beep(698.456,500);
Beep(698.456,500);
Beep(659.255,500);
Beep(659.255,500);
Beep(587.330,500);

Beep(523.251,500);
Beep(523.251,500);
Beep(783.991,500);
Beep(783.991,500);
Beep(880,500);
Beep(880,500);
Beep(783.991,500);

Beep(698.456,500);
Beep(698.456,500);
Beep(659.255,500);
Beep(659.255,500);
Beep(587.330,500);
Beep(587.330,500);
Beep(523.251,500);


Beep(523.251,500);
Beep(523.251,500);
Beep(698.456,500);
Beep(523.251,500);

Beep(698.456,500);
Beep(523.251,500);
Beep(783.991,500);
Beep(523.251,500);




}
//Plays Mary Had a Little Lamb

static void maryhll(GtkWidget* widget,gpointer data)
{

Beep(659.255,500);//e
Beep(587.330,500);//d
Beep(523.251,500);//c
Beep(587.330,500);
Beep(659.255,500);
Beep(659.255,500);
Beep(659.255,500);

Beep(587.330,500);
Beep(587.330,500);
Beep(587.330,500);
Beep(659.255,500);
Beep(659.255,500);
Beep(659.255,500);
Beep(659.255,500);

Beep(587.330,500);
Beep(523.251,500);
Beep(587.330,500);
Beep(659.255,500);
Beep(659.255,500);
Beep(659.255,500);

Beep(659.255,500);
Beep(587.330,500);
Beep(587.330,500);
Beep(659.255,500);
Beep(587.330,500);
Beep(523.251,500);
}

//plays Happy Birthday
static void hbday(GtkWidget *widget, gpointer data)
{
    Beep(783.991,500);
    Beep(783.991,500);
    Beep(880.000,500);
    Beep(783.991,500);
    Beep(523.251,500);
    Beep(987.767,500);

    Beep(783.991,500);
    Beep(783.991,500);
    Beep(880.000,500);
    Beep(783.991,500);
    Beep(587.330,500);
    Beep(523.251,500);

    Beep(783.991,500);
    Beep(783.991,500);
    Beep(783.991,500);
    Beep(659.255,500);
    Beep(523.251,500);
    Beep(987.767,500);
    Beep(880.000,500);

    Beep(698.456,500);
    Beep(698.456,500);
    Beep(659.255,500);
    Beep(523.251,500);
    Beep(587.330,500);
    Beep(523.251,500);
}


static void J_B(GtkWidget* widget,gpointer data)
{

    GtkWidget *window5, *image4, *fixed4, *j_b, *jb;
    //int x;
    window5=gtk_window_new(GTK_WINDOW_TOPLEVEL); //creating new window
    image4=gtk_image_new_from_file("C:/Users/Satish Das/Desktop/Codeblocks-C/jingles.jpg");
    //image4=gtk_image_new_from_file("C:/Users/swath/Documents/2ndSemCProject/test1/jingles.jpg");
    fixed4=gtk_fixed_new();
    gtk_container_add(GTK_CONTAINER(window5),fixed4);

    j_b=gtk_button_new_with_label("Play");

    gtk_container_add(GTK_CONTAINER(fixed4),image4);
    gtk_fixed_put(GTK_FIXED(fixed4),j_b,250,340);
    g_signal_connect (j_b,"clicked",G_CALLBACK (jbells), NULL);
    gtk_widget_show_all(window5);
     gtk_main();

//ep(784.0);



}
static void TT_LS(GtkWidget* widget,gpointer data)
{

    GtkWidget *window8, *image7, *fixed7, *ttls, *tt_ls;
    //int x;
    window8=gtk_window_new(GTK_WINDOW_TOPLEVEL); //creating new window
    image7=gtk_image_new_from_file("C:/Users/Satish Das/Desktop/Codeblocks-C/twinkle.jpg");
    //image4=gtk_image_new_from_file("C:/Users/swath/Documents/2ndSemCProject/test1/jingles.jpg");
    fixed7=gtk_fixed_new();
    gtk_container_add(GTK_CONTAINER(window8),fixed7);

    ttls=gtk_button_new_with_label("Play");

    gtk_container_add(GTK_CONTAINER(fixed7),image7);
    gtk_fixed_put(GTK_FIXED(fixed7),ttls,324,435);
    g_signal_connect (ttls,"clicked",G_CALLBACK (t_s), NULL);
    gtk_widget_show_all(window8);
     gtk_main();

//ep(784.0);



}

//Implementation of Window for Mary Had a Little Lamb
static void MHLL(GtkWidget* widget,gpointer data)
{
  GtkWidget *window6, *image5, *fixed5, *mary, *mary1;
  window6=gtk_window_new(GTK_WINDOW_TOPLEVEL);
  image5=gtk_image_new_from_file("C:/Users/Satish Das/Desktop/Codeblocks-C/mary.jpg");
  //image5=gtk_image_new_from_file("C:/Users/swath/Documents/2ndSemCProject/test1/mary1.jpg");
  fixed5=gtk_fixed_new();
  gtk_container_add(GTK_CONTAINER(window6),fixed5);
  mary=gtk_button_new_with_label("Play");
  gtk_container_add(GTK_CONTAINER(fixed5),image5);
  gtk_fixed_put(GTK_FIXED(fixed5),mary,250,340);
  g_signal_connect (mary,"clicked",G_CALLBACK (maryhll), NULL);
  gtk_widget_show_all(window6);
  gtk_main();





}

static void HBDY(GtkWidget* widget,gpointer data)
{
  GtkWidget *window7, *image6, *fixed6, *hbd, *hbd1;
  window7=gtk_window_new(GTK_WINDOW_TOPLEVEL);
  image6=gtk_image_new_from_file("C:/Users/Satish Das/Desktop/Codeblocks-C/happy.jpg");
  //image6=gtk_image_new_from_file("C:/Users/swath/Documents/2ndSemCProject/test1/Birthdaycake.jpg");
  fixed6=gtk_fixed_new();
  gtk_container_add(GTK_CONTAINER(window7),fixed6);
  hbd=gtk_button_new_with_label("Play");
  gtk_container_add(GTK_CONTAINER(fixed6),image6);
  gtk_fixed_put(GTK_FIXED(fixed6),hbd,305,400);
  g_signal_connect (hbd,"clicked",G_CALLBACK (hbday), NULL);
  gtk_widget_show_all(window7);
  gtk_main();





}


static void play(GtkWidget* widget,gpointer data)
{

    GtkWidget *window4, *image3,*fixed3,*JB,*TTLS,*MHLL_play,*HBD_play;
    /*char name[100];
    FILE *fp=fopen("piano1.txt","a");
    //char c[1]="C";
    printf("enter the name of the song: ");
    fgets(name,sizeof(name),stdin);
    fputs(name,fp);

    fclose(fp);*/
    //int x;

    window4=gtk_window_new(GTK_WINDOW_TOPLEVEL); //creating new window
    image3=gtk_image_new_from_file("C:/Users/Satish Das/Desktop/Codeblocks-C/music.jpg");
    //image3=gtk_image_new_from_file("C:/Users/swath/Documents/2ndSemCProject/test1/music.jpg");
    fixed3=gtk_fixed_new();
    gtk_container_add(GTK_CONTAINER(window4),fixed3);
    //gtk_fixed_put(GTK_FIXED(fixed3),image3,500,500)

    JB=gtk_button_new_with_label("Jingle Bells");
    TTLS=gtk_button_new_with_label("Twinkle Twinkle Little Star");
    MHLL_play=gtk_button_new_with_label("Mary Had A Little Lamb");
    HBD_play=gtk_button_new_with_label("Happy Birthday");


    gtk_container_add(GTK_CONTAINER(fixed3),image3);
    gtk_fixed_put(GTK_FIXED(fixed3),JB,15,200);
    gtk_fixed_put(GTK_FIXED(fixed3),TTLS,15,270);
    gtk_fixed_put(GTK_FIXED(fixed3),MHLL_play,15,340);
    gtk_fixed_put(GTK_FIXED(fixed3),HBD_play,15,410);



    g_signal_connect(JB,"clicked",G_CALLBACK(J_B),NULL);
    g_signal_connect(TTLS,"clicked",G_CALLBACK(TT_LS),NULL);
    g_signal_connect(MHLL_play,"clicked",G_CALLBACK(MHLL),NULL);
    g_signal_connect(HBD_play,"clicked",G_CALLBACK(HBDY),NULL);


    //g_signal_connect(JB,"clicked",G_CALLBACK(J_B),NULL);

    gtk_widget_show_all(window4);
    gtk_main();
}

static void start_program(GtkWidget* widget,gpointer data)
{
    GtkWidget *window1,*image1,*fixed2,*c_but,*d_but,*e_but,*f_but,*g_but,*a_but,*b_but,*csharp_but,*dsharp_but,*gsharp_but,*fsharp_but,*asharp_but;
    GtkWidget *C,*D,*E,*F,*G,*A,*CSharp,*DSharp,*FSharp,*ASharp,*GSharp;
    char name[100];
    FILE *fp=fopen("piano1.txt","w+");
    //char c[1]="C";
    printf("enter the name of the song: ");
    fgets(name,sizeof(name),stdin);
    fputs(name,fp);
    //fputs(name,stdout);

    fclose(fp);

    window1=gtk_window_new(GTK_WINDOW_TOPLEVEL); //creating new window
    image1=gtk_image_new_from_file("C:/Users/Satish Das/Desktop/Codeblocks-C/piano_0.jpg");
    //image1=gtk_image_new_from_file("C:/Users/swath/Documents/2ndSemCProject/test1/piano_0.jpg");
    fixed2=gtk_fixed_new();
    gtk_container_add(GTK_CONTAINER(window1),fixed2);

    c_but=gtk_button_new_with_label("C");
    csharp_but=gtk_button_new_with_label("C#");
    d_but=gtk_button_new_with_label("D");
    dsharp_but=gtk_button_new_with_label("D#");
    e_but=gtk_button_new_with_label("E");
    f_but=gtk_button_new_with_label("F");
    fsharp_but=gtk_button_new_with_label("F#");
    g_but=gtk_button_new_with_label("G");
    gsharp_but=gtk_button_new_with_label("G#");
    a_but=gtk_button_new_with_label("A");
    asharp_but=gtk_button_new_with_label("A#");
    b_but=gtk_button_new_with_label("B");

    gtk_container_add(GTK_CONTAINER(fixed2),image1);

    //Place buttons A, B,C,D,E,F,G in positions
    gtk_fixed_put(GTK_FIXED(fixed2),c_but,15,300);
    gtk_fixed_put(GTK_FIXED(fixed2),d_but,110,300);
    gtk_fixed_put(GTK_FIXED(fixed2),e_but,205,300);
    gtk_fixed_put(GTK_FIXED(fixed2),f_but,295,300);
    gtk_fixed_put(GTK_FIXED(fixed2),g_but,380,300);
    gtk_fixed_put(GTK_FIXED(fixed2),a_but,475,300);
    gtk_fixed_put(GTK_FIXED(fixed2),b_but,570,300);

    //Place Sharp buttons : C, D, F, G, A in position
    gtk_fixed_put(GTK_FIXED(fixed2),csharp_but,66,200);
    gtk_fixed_put(GTK_FIXED(fixed2),dsharp_but,156,200);
    gtk_fixed_put(GTK_FIXED(fixed2),fsharp_but,338,200);
    gtk_fixed_put(GTK_FIXED(fixed2),gsharp_but,430,200);
    gtk_fixed_put(GTK_FIXED(fixed2),asharp_but,521,200);

    //Function to be called when button is pressed
    g_signal_connect (c_but, "clicked", G_CALLBACK (play_c), NULL);
    g_signal_connect (csharp_but, "clicked", G_CALLBACK (play_csharp), NULL);
    g_signal_connect (d_but, "clicked", G_CALLBACK (play_d), NULL);
    g_signal_connect (dsharp_but, "clicked", G_CALLBACK (play_dsharp), NULL);
    g_signal_connect (e_but, "clicked", G_CALLBACK (play_e), NULL);
    g_signal_connect (f_but, "clicked", G_CALLBACK (play_f), NULL);
    g_signal_connect (fsharp_but, "clicked", G_CALLBACK (play_fsharp), NULL);
    g_signal_connect (g_but, "clicked", G_CALLBACK (play_g), NULL);
    g_signal_connect (gsharp_but, "clicked", G_CALLBACK (play_gsharp), NULL);
    g_signal_connect (a_but, "clicked", G_CALLBACK (play_a), NULL);
    g_signal_connect (asharp_but, "clicked", G_CALLBACK (play_asharp), NULL);
    g_signal_connect (b_but, "clicked", G_CALLBACK (play_b), NULL);

    gtk_widget_show_all(window1);
    gtk_main();

}

static void saved_file(GtkWidget* widget,gpointer data){

GtkWidget *window10,*image10,*fixed10,*c_but,*d_but,*e_but,*f_but,*g_but,*a_but,*b_but,*csharp_but,*dsharp_but,*gsharp_but,*fsharp_but,*asharp_but;
    GtkWidget *C,*D,*E,*F,*G,*A,*CSharp,*DSharp,*FSharp,*ASharp,*GSharp;
    window10=gtk_window_new(GTK_WINDOW_TOPLEVEL); //creating new window
    image10=gtk_image_new_from_file("C:/Users/Satish Das/Desktop/Codeblocks-C/piano_0.jpg");
    fixed10=gtk_fixed_new();
    gtk_container_add(GTK_CONTAINER(window10),fixed10);

gtk_container_add(GTK_CONTAINER(window10),fixed10);

    c_but=gtk_button_new_with_label("C");
    csharp_but=gtk_button_new_with_label("C#");
    d_but=gtk_button_new_with_label("D");
    dsharp_but=gtk_button_new_with_label("D#");
    e_but=gtk_button_new_with_label("E");
    f_but=gtk_button_new_with_label("F");
    fsharp_but=gtk_button_new_with_label("F#");
    g_but=gtk_button_new_with_label("G");
    gsharp_but=gtk_button_new_with_label("G#");
    a_but=gtk_button_new_with_label("A");
    asharp_but=gtk_button_new_with_label("A#");
    b_but=gtk_button_new_with_label("B");

    gtk_container_add(GTK_CONTAINER(fixed10),image10);

    //Place buttons A, B,C,D,E,F,G in positions
    gtk_fixed_put(GTK_FIXED(fixed10),c_but,15,300);
    gtk_fixed_put(GTK_FIXED(fixed10),d_but,110,300);
    gtk_fixed_put(GTK_FIXED(fixed10),e_but,205,300);
    gtk_fixed_put(GTK_FIXED(fixed10),f_but,295,300);
    gtk_fixed_put(GTK_FIXED(fixed10),g_but,380,300);
    gtk_fixed_put(GTK_FIXED(fixed10),a_but,475,300);
    gtk_fixed_put(GTK_FIXED(fixed10),b_but,570,300);

    //Place Sharp buttons : C, D, F, G, A in position
    gtk_fixed_put(GTK_FIXED(fixed10),csharp_but,66,200);
    gtk_fixed_put(GTK_FIXED(fixed10),dsharp_but,156,200);
    gtk_fixed_put(GTK_FIXED(fixed10),fsharp_but,338,200);
    gtk_fixed_put(GTK_FIXED(fixed10),gsharp_but,430,200);
    gtk_fixed_put(GTK_FIXED(fixed10),asharp_but,521,200);

    //Function to be called when button is pressed
    g_signal_connect (c_but, "clicked", G_CALLBACK (play_c), NULL);
    g_signal_connect (csharp_but, "clicked", G_CALLBACK (play_csharp), NULL);
    g_signal_connect (d_but, "clicked", G_CALLBACK (play_d), NULL);
    g_signal_connect (dsharp_but, "clicked", G_CALLBACK (play_dsharp), NULL);
    g_signal_connect (e_but, "clicked", G_CALLBACK (play_e), NULL);
    g_signal_connect (f_but, "clicked", G_CALLBACK (play_f), NULL);
    g_signal_connect (fsharp_but, "clicked", G_CALLBACK (play_fsharp), NULL);
    g_signal_connect (g_but, "clicked", G_CALLBACK (play_g), NULL);
    g_signal_connect (gsharp_but, "clicked", G_CALLBACK (play_gsharp), NULL);
    g_signal_connect (a_but, "clicked", G_CALLBACK (play_a), NULL);
    g_signal_connect (asharp_but, "clicked", G_CALLBACK (play_asharp), NULL);
    g_signal_connect (b_but, "clicked", G_CALLBACK (play_b), NULL);

    gtk_widget_show_all(window10);
    gtk_main();




}

int main(int argc,char **argv){


gtk_init (&argc,&argv);
GtkWidget *window, *image, *button, *button_box, *fixed1,*button1,*button2,*button_box1,*button_box2,*button_box3,*button3;
window=gtk_window_new(GTK_WINDOW_TOPLEVEL);

image=gtk_image_new_from_file("C:/Users/Satish Das/Desktop/Codeblocks-C/piano.jpg");
//image=gtk_image_new_from_file("C:/Users/swath/Documents/2ndSemCProject/test1/piano.jpg");
fixed1=gtk_fixed_new();

//CREATE WINDOW
gtk_container_add(GTK_CONTAINER(window),fixed1);
g_signal_connect(window,"destroy",G_CALLBACK(gtk_main_quit),NULL);

//CREATE START BUTTON
button_box = gtk_button_box_new (GTK_ORIENTATION_HORIZONTAL);
gtk_container_add (GTK_CONTAINER(window), button_box);
button = gtk_button_new_with_label ("Start");
g_signal_connect (button, "clicked", G_CALLBACK (start_program), NULL);
gtk_container_add (GTK_CONTAINER (button_box), button);
gtk_container_add(GTK_CONTAINER(fixed1),image);
gtk_fixed_put(GTK_FIXED(fixed1),button_box,225,150);

//CREATE PLAY BUTTON
button_box1 = gtk_button_box_new (GTK_ORIENTATION_HORIZONTAL);
gtk_container_add (GTK_CONTAINER(window), button_box1);
button1 = gtk_button_new_with_label ("Play");
g_signal_connect (button1, "clicked", G_CALLBACK (play), NULL);
gtk_container_add (GTK_CONTAINER (button_box1), button1);
gtk_container_add(GTK_CONTAINER(fixed1),image);
gtk_fixed_put(GTK_FIXED(fixed1),button_box1,225,200);

/*//CREATE DISPLAY BUTTON
button_box3 = gtk_button_box_new (GTK_ORIENTATION_HORIZONTAL);
gtk_container_add (GTK_CONTAINER(window), button_box3);
button3 = gtk_button_new_with_label ("SAVED SONGS");
g_signal_connect (button3, "clicked", G_CALLBACK (saved_file), NULL);
gtk_container_add (GTK_CONTAINER (button_box3), button3);
gtk_container_add(GTK_CONTAINER(fixed1),image);
gtk_fixed_put(GTK_FIXED(fixed1),button_box3,225,250);
*/

//CREATE EXIT BUTTON
button_box2 = gtk_button_box_new (GTK_ORIENTATION_HORIZONTAL);
gtk_container_add (GTK_CONTAINER(window), button_box2);
button2= gtk_button_new_with_label("Exit");


g_signal_connect(window,"destroy",G_CALLBACK(gtk_main_quit),NULL);
g_signal_connect (button2, "clicked", G_CALLBACK (gtk_main_quit), NULL);
gtk_container_add (GTK_CONTAINER (button_box2), button2);
gtk_container_add (GTK_CONTAINER (button_box2), button2);
gtk_container_add (GTK_CONTAINER (button_box2), button2);
gtk_container_add(GTK_CONTAINER(fixed1),image);
gtk_fixed_put(GTK_FIXED(fixed1),button_box2,225,250);


gtk_widget_show_all(window);//will show all the buttons created

gtk_main();
return 0;

}
