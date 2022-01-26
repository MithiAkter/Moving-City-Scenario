#include <iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

using namespace std;
int i;
class object
{
public:
void body();

};

void object::body()
{
    int i=0;
    for(i=0; i<1300; i++)
    {

        //For Car
        setcolor(YELLOW);
        line(0,400,getmaxx(),400);
        rectangle(500,170,540,250);
        setcolor(BLUE);
        setfillstyle(SOLID_FILL,LIGHTRED);
        circle(520,190,10);
        floodfill(521,191,BLUE);
        setcolor(BLUE);
        setfillstyle(SOLID_FILL,YELLOW);
        circle(520,210,10);
        floodfill(521,211,BLUE);
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,GREEN);
        circle(520,230,10);
        floodfill(521,230,WHITE);
        rectangle(515,250,525,400);

        setcolor(GREEN);
        circle(70+i,370,28);
        setcolor(GREEN);
        arc(69+i,369,0,180,35);
        setcolor(GREEN);
        circle(240+i,370,28);
        arc(239+i,369,0,180,35);
        line(0+i,371,35+i,371);
        line(0+i,371,0+i,310);
        line(0+i,310,10+i,320);
        line(10+i,320,30+i,320);
        line(30+i,320,70+i,290);
        arc(120+i,275,198,280,50);
        line(125+i,325,317+i,325);
        ellipse(147+i,320,8,160,100,45);
        line(245+i,315,300+i,315);
        arc(280+i,371,0,70,60);
        line(105+i,371,205+i,371);
        line(275+i,371,340+i,371);

        //For Star
        setcolor(YELLOW);
        outtextxy(450,60,"'");
        outtextxy(480,50,".");
        outtextxy(200,40,"'");
        outtextxy(230,10,".");
        outtextxy(550,99,"'");
        outtextxy(100,50,"'");
        outtextxy(150,90,".");
        outtextxy(90,150,"'");
        outtextxy(150,60,".");
        outtextxy(520,99,"'");
        outtextxy(675,50,".");
        outtextxy(710,60,".");
        outtextxy(280,50,"'");
        outtextxy(850,99,"'");
        outtextxy(1000,50,"'");
        outtextxy(1150,60,".");
        outtextxy(1180,50,"'");
        outtextxy(1120,50,"'");
        outtextxy(1220,60,".");
        outtextxy(1380,50,"'");
        outtextxy(780,50,"'");
        outtextxy(800,60,".");
        outtextxy(900,50,"'");


        //For Train Road
        setcolor(LIGHTBLUE);
        line(0,450,getmaxx(),450);
        setcolor(LIGHTGRAY);

       //For back
       rectangle(30+i,340,180+i,350);
       rectangle(40+i,350,170+i,425);

       //For back wheels
       circle(70+i,437,12);
       circle(140+i,437,12);

       //For back incircle
       circle(70+i,437,8);
       circle(140+i,437,8);
       rectangle(70+i,435,140+i,439);

       //For back windows
       rectangle(55+i,365,155+i,400);
       line(83+i,365,83+i,400);
       line(122+i,365,122+i,400);

       //For join
       rectangle(170+i,400,210+i,390);

       //For engine
       rectangle(200+i,320,260+i,330);
       rectangle(210+i,330,250+i,400);
       rectangle(250+i,340,345+i,425);
       rectangle(250+i,340,330+i,410);

       //For front wheels
       circle(225+i,425,25);
       circle(320+i,437,12);
       circle(280+i,437,12);

       //For front small incircle
       circle(320+i,437,8);
       circle(280+i,437,8);
       rectangle(320+i,435,280+i,439);

       //For front big incircle
       circle(225+i,425,15);

       //for front windows
       rectangle(220+i,335,240+i,365);

       //For fire
       rectangle(300+i,300,330+i,340);
       rectangle(290+i,290,340+i,300);

       //Front tracker
       line(332+i,425,332+i,450);
       line(345+i,425,355+i,450);

       //for light
       rectangle(345+i,360,355+i,380);

        //For cycle
        setcolor(LIGHTGREEN);
        line(50+i,555,100+i,555);
        line(75+i,525,125+i,525);
        line(50+i,555,75+i,525);
        line(100+i,555,125+i,525);
        line(150+i,555,100+i,495);
        line(75+i,525,75+i,520);
        line(70+i,520,80+i,520);
        line(80+i,495,100+i,495);

        // For cycle Wheels
        circle(150+i,555,30);
        circle(50+i,555,30);

        setcolor(RED);
        circle(150+i,555,27);
        circle(50+i,555,27);

        circle(140+i,272,4);
        line(145+i,275,150+i,280);
        line(137+i,274,131+i,280);



        //For cycle Roads and Road lines
        //Road lines
        setcolor(WHITE);
        line(0,536,getmaxx(),536);
        line(0,650,getmaxx(),650);
        line(0,538,getmaxx(),538);
        line(0,652,getmaxx(),652);

        //Road
        setcolor(LIGHTRED);
        rectangle(0,590,50,596);
        rectangle(100,590,150,596);
        rectangle(200,590,250,596);
        rectangle(300,590,350,596);
        rectangle(400,590,450,596);
        rectangle(500,590,550,596);
        rectangle(600,590,650,596);
        rectangle(700,590,750,596);
        rectangle(800,590,850,596);
        rectangle(900,590,950,596);
        rectangle(1000,590,1050,596);
        rectangle(1100,590,1150,596);
        rectangle(1200,590,1250,596);


        //For windmills
        setcolor(YELLOW);
        rectangle(400,200,405,536);
        rectangle(800,200,805,536);

        setcolor(WHITE);
        line(403,150,405,200);
        line(405,150,400,200);
        line(403,205,350,230);
        line(400,200,350,230);
        line(403,205,450,230);
        line(450,230,405,200);
        line(803,150,805,200);
        line(805,150,800,200);
        line(803,205,750,230);
        line(800,200,750,230);
        line(803,205,850,230);
        line(850,230,805,200);


        //For Buildings

        setcolor(LIGHTGRAY);
        line(0,350,getmaxx(),350);

        //1st_building
        setcolor(YELLOW);
        rectangle(0,350,100,150);
        rectangle(40,350,60,300);
        rectangle(10,170,30,200);
        rectangle(70,170,90,200);
        rectangle(10,230,30,260);
        rectangle(70,230,90,260);


        //2nd building
        rectangle(100,350,180,250);
        line(100,250,140,180);
        line(180,250,140,180);
        rectangle(110,280,130,300);
        rectangle(150,280,170,300);
        rectangle(130,350,160,330);


        //3rd building
        setcolor(LIGHTRED);
        rectangle(180,350,350,300);
        rectangle(190,310,220,330);
        rectangle(340,310,310,330);


        //4th building
        rectangle(370,350,440,150);
        rectangle(385,350,405,300);
        rectangle(380,170,400,200);
        rectangle(410,170,430,200);
        rectangle(380,230,400,260);
        rectangle(410,230,430,260);


        //5th building
        rectangle(500,350,600,150);
        rectangle(540,350,560,300);
        rectangle(510,170,530,200);
        rectangle(570,170,590,200);
        rectangle(510,230,530,260);
        rectangle(570,230,590,260);


        //6th building
        setcolor(LIGHTGREEN);
        rectangle(700,350,800,150);
        rectangle(740,350,760,300);
        rectangle(710,170,730,200);
        rectangle(770,170,790,200);
        rectangle(710,230,730,260);
        rectangle(770,230,790,260);

        //7th building
        rectangle(800,350,880,250);
        line(800,250,840,180);
        line(880,250,840,180);
        rectangle(810,280,830,300);
        rectangle(850,280,870,300);
        rectangle(830,350,860,330);

        //8th building
        rectangle(880,350,1150,300);
        rectangle(890,310,920,330);
        rectangle(920,310,950,330);
        rectangle(1080,310,1110,330);
        rectangle(1110,310,1140,330);

        rectangle(1170,350,1240,150);
        rectangle(1185,350,1220,300);
        rectangle(1180,170,1200,200);
        rectangle(1210,170,1230,200);
        rectangle(1180,230,1200,260);
        rectangle(1210,230,1230,260);

        //For hills
        setcolor(LIGHTBLUE);
        line(0,200,50,150);
        line(50,150,150,200);
        line(150,200,300,100);
        line(300,100,450,175);
        line(450,175,640,125);
        line(640,125,900,200);
        line(900,200,1200,150);
        line(1200,150,1400,250);


        //For Moon
        setcolor(YELLOW);
        circle(295,60,40);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(296,70,YELLOW);
        delay(100);
        cleardevice();

        };
}
int main()
{
    int gm,i,a;
    initwindow(1300,750);
    object c;
    c.body();
    getch();
    return 0;

}
