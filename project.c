#include <gtk/gtk.h>
#include<windows.h>
#include <stdio.h>
#include <stdlib.h>


static void play_c(GtkWidget* widget,gpointer data)
{
    FILE *fp=fopen("piano1.txt","w");
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

static void J_B(GtkWidget* widget,gpointer data)
{

    GtkWidget *window5, *image4, *fixed4, *j_b, *jb;
    //int x;
    window5=gtk_window_new(GTK_WINDOW_TOPLEVEL); //creating new window
    image4=gtk_image_new_from_file("C:/Users/Satish Das/Desktop/Codeblocks-C/jingles.jpg");
    fixed4=gtk_fixed_new();
    gtk_container_add(GTK_CONTAINER(window5),fixed4);

    j_b=gtk_button_new_with_label("play");

    gtk_container_add(GTK_CONTAINER(fixed4),image4);

   // gtk_container_add(GTK_CONTAINER(fixed4),image1);
    gtk_fixed_put(GTK_FIXED(fixed4),j_b,250,340);
    g_signal_connect (j_b,"clicked",G_CALLBACK (jbells), NULL);
    gtk_widget_show_all(window5);


gtk_main();


//ep(784.0);



}


static void play(GtkWidget* widget,gpointer data)
{

    GtkWidget *window4, *image3,*fixed3,*JB,*TTLS;
    //int x;

    window4=gtk_window_new(GTK_WINDOW_TOPLEVEL); //creating new window
    image3=gtk_image_new_from_file("C:/Users/Satish Das/Desktop/Codeblocks-C/music.jpg");
    fixed3=gtk_fixed_new();
    gtk_container_add(GTK_CONTAINER(window4),fixed3);
    //gtk_fixed_put(GTK_FIXED(fixed3),image3,500,500)

    JB=gtk_button_new_with_label("Jingle Bells");
    TTLS=gtk_button_new_with_label("Twinkle Twinkle Little Star");

    gtk_container_add(GTK_CONTAINER(fixed3),image3);
    gtk_fixed_put(GTK_FIXED(fixed3),JB,15,200);
    gtk_fixed_put(GTK_FIXED(fixed3),TTLS,15,270);


    g_signal_connect(JB,"clicked",G_CALLBACK(J_B),NULL);
    //g_signal_connect(JB,"clicked",G_CALLBACK(J_B),NULL);

    gtk_widget_show_all(window4);
    gtk_main();
}


static void start_program(GtkWidget* widget,gpointer data)
{
    GtkWidget *window1,*image1,*fixed2,*c_but,*d_but,*e_but,*f_but,*g_but,*a_but,*b_but;
    GtkWidget *C,*D,*E,*F,*G,*A;


    window1=gtk_window_new(GTK_WINDOW_TOPLEVEL); //creating new window
    image1=gtk_image_new_from_file("C:/Users/Satish Das/Desktop/Codeblocks-C/piano_0.jpg");
    fixed2=gtk_fixed_new();
    gtk_container_add(GTK_CONTAINER(window1),fixed2);

    c_but=gtk_button_new_with_label("C");
    d_but=gtk_button_new_with_label("D");
    e_but=gtk_button_new_with_label("E");
    f_but=gtk_button_new_with_label("F");
    g_but=gtk_button_new_with_label("G");
    a_but=gtk_button_new_with_label("A");
    b_but=gtk_button_new_with_label("B");

    gtk_container_add(GTK_CONTAINER(fixed2),image1);
    gtk_fixed_put(GTK_FIXED(fixed2),c_but,15,300);
    gtk_fixed_put(GTK_FIXED(fixed2),d_but,110,300);
    gtk_fixed_put(GTK_FIXED(fixed2),e_but,205,300);
    gtk_fixed_put(GTK_FIXED(fixed2),f_but,295,300);
    gtk_fixed_put(GTK_FIXED(fixed2),g_but,380,300);
    gtk_fixed_put(GTK_FIXED(fixed2),a_but,475,300);
    gtk_fixed_put(GTK_FIXED(fixed2),b_but,570,300);

    g_signal_connect (c_but, "clicked", G_CALLBACK (play_c), NULL);
    g_signal_connect (d_but, "clicked", G_CALLBACK (play_d), NULL);
    g_signal_connect (e_but, "clicked", G_CALLBACK (play_e), NULL);
    g_signal_connect (f_but, "clicked", G_CALLBACK (play_f), NULL);
    g_signal_connect (g_but, "clicked", G_CALLBACK (play_g), NULL);
    g_signal_connect (a_but, "clicked", G_CALLBACK (play_a), NULL);
    g_signal_connect (b_but, "clicked", G_CALLBACK (play_b), NULL);

    gtk_widget_show_all(window1);
    gtk_main();

}

int main(int argc,char **argv){

gtk_init (&argc,&argv);
GtkWidget *window, *image, *button, *button_box, *fixed1,*button1,*button2,*button_box1,*button_box2;
window=gtk_window_new(GTK_WINDOW_TOPLEVEL);

image=gtk_image_new_from_file("C:/Users/Satish Das/Desktop/Codeblocks-C/piano.jpg");
fixed1=gtk_fixed_new();
gtk_container_add(GTK_CONTAINER(window),fixed1);

button_box = gtk_button_box_new (GTK_ORIENTATION_HORIZONTAL);
gtk_container_add (GTK_CONTAINER(window), button_box);

button = gtk_button_new_with_label ("Start");
g_signal_connect (button, "clicked", G_CALLBACK (start_program), NULL);
//g_signal_connect_swapped (button, "clicked", G_CALLBACK (gtk_widget_destroy), window);
gtk_container_add (GTK_CONTAINER (button_box), button);
gtk_container_add(GTK_CONTAINER(fixed1),image);
gtk_fixed_put(GTK_FIXED(fixed1),button_box,225,150);

button_box1 = gtk_button_box_new (GTK_ORIENTATION_HORIZONTAL);
gtk_container_add (GTK_CONTAINER(window), button_box1);

button1 = gtk_button_new_with_label ("Play");

g_signal_connect(window,"destroy",G_CALLBACK(gtk_main_quit),NULL);
g_signal_connect (button1, "clicked", G_CALLBACK (gtk_main_quit), NULL);
g_signal_connect (button1, "clicked", G_CALLBACK (play), NULL);
//g_signal_connect (button, "clicked", G_CALLBACK (gtk_main_quit), NULL);
//g_signal_connect_swapped (button, "clicked", G_CALLBACK (gtk_widget_destroy), window);
gtk_container_add (GTK_CONTAINER (button_box1), button1);
gtk_container_add(GTK_CONTAINER(fixed1),image);
gtk_fixed_put(GTK_FIXED(fixed1),button_box1,225,200);

button_box2 = gtk_button_box_new (GTK_ORIENTATION_HORIZONTAL);
gtk_container_add (GTK_CONTAINER(window), button_box2);
button2= gtk_button_new_with_label("Exit");
g_signal_connect(window,"destroy",G_CALLBACK(gtk_main_quit),NULL);
g_signal_connect (button2, "clicked", G_CALLBACK (gtk_main_quit), NULL);
gtk_container_add (GTK_CONTAINER (button_box2), button2);
gtk_container_add(GTK_CONTAINER(fixed1),image);
gtk_fixed_put(GTK_FIXED(fixed1),button_box2,225,250);


gtk_widget_show_all(window);//will show all the buttons created

gtk_main();
return 0;

true=5;
printf("%d",true);
}
