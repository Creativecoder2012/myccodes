//*****************************************************************************
//                      HEADER FILE USED IN PROJECT
//*****************************************************************************


#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
//*****************************************************************************
//                       CLASS USED IN PROJECT
//*****************************************************************************
int i;
class kund
{char name[50];
int age,d,m;
long int y;
int h,mm,s;
public:
//*****************************************************************************
//                       FUNCTION DECLARATION
//*****************************************************************************

void in(void);  //function to  get data from user
void modify(void);  //function to modify entered data
void dis(void);   //function to show data on screen
void zodiac(void); //function to show western horoscope
void future(void); //function to give future of user based on chinese horoscope
void asign(void);  //function to display animal sign of zodiac
void life(void);  //function to tell life expectancy to user
void lucky(void);  //function to tell user lucky charm
void horo(void);  //function to display horoscope
}k; //class ends here

//*****************************************************************************
//                      FUNCTION TO INPUT DATA
//*****************************************************************************

void kund::in(void)

{cout<<"\nEnter detail:";
cout<<"\nFull name: ";
gets(name);
cout<<"\nAge: ";
cin>>age;
cout<<"\nBirth Day [1-31]: ";
cin>>d;
cout<<"\nBirth Month [1-12]: ";
cin>>m;
cout<<"\nBirth Year[1970-2010]:";
cin>>y;
cout<<"\nBirth time:";
cout<<"\nh:"; cin>>h;
cout<<"\nm:"; cin>>mm;
cout<<"\ns:"; cin>>s;
cout<<"\n***************************************************************************"<<endl;
}

//*****************************************************************************
//                      FUNCTION TO MODIFY DATA
//*****************************************************************************

void kund::modify(void)

{cout<<"\nEnter detail:";
cout<<"\nFull name: ";
gets(name);
cout<<"\nAge: ";
cin>>age;
cout<<"\nBirth Month [1-12]: ";
cin>>m;
cout<<"\nBirth Day [1-31]: ";
cin>>d;
cout<<"\nBirth Year[1970-2010]:";
cin>>y;
cout<<"\nBirth time:";
cout<<"\nh:"; cin>>h;
cout<<"\nm:"; cin>>mm;
cout<<"\ns:"; cin>>s;
cout<<"\n************************************************"<<endl;
}

//*****************************************************************************
//                      FUNCTION TO DISPLAY DATA
//*****************************************************************************

void kund::dis(void)

{cout<<"\nThe detail you entered is:"<<endl;
cout<<"Name:";
cout<<name<<endl;
cout<<"Age:"<<age<<endl;
cout<<"d.o.b:\ndd:";
cout<<d<<endl;
cout<<"mm:"<<m<<endl;
cout<<"yyyy:"<<y<<endl;
cout<<"\nbirth time:";
cout<<"\nh:"<<h;
cout<<"\nm:"<<mm;
cout<<"\ns:"<<s;
cout<<"\n************************************************"<<endl;

}
//*****************************************************************************
//                      FUNCTION TO DISPLAY ZODIAC
//*****************************************************************************


void kund::zodiac(void)

{ int date,mon;
date=d; mon=m;
if (date >= 20 && date <= 31 && mon==1 || date <= 19 && mon==2)
cout<<"\n Aquarius Aquarians are interesting and attractive people.They can be shy, sensitive, gentle and patient or enthusiastic andlively with a tendency to be exhibitionists. Both types are strong willed and forceful in their own way. Very opinionated with strong convictions, they fight for what they believe in. They will argue vehemently for what they believe to be true.\n";
else if(date >= 20 && date <=29 && mon ==2 || date <= 20 && mon==3)
cout<<"\n PiecesThe ruler of Pisces is Neptune. Its symbol represents a pair of sea horses or sea lions yoked together. They dwell in the innermost regions of the sea, which is symbolic of life after death or regeneration. The image also represents a duality, the struggle of the spiritual soul within the physical body.\n";
else if (date >=20 && date <=31 && mon ==3 || date <= 19 && mon ==4)
cout<<"\n Aries Aries is the first sign of the zodiac, and is ruled by the Mars. This represents offensive power and begins at the spring equinox. In Aries we move from the potential to the actual; from dormant to active participation. Desire, initiative, courage and action are words which best describe Aries.\n";
else if (date >=20 && date <=30 && mon ==4 || date <=20 && mon ==5)
cout<<"\n Taurus The second sign of the zodiac, Taurus is ruled by Venus. The glyph represents the Bull, Taurus's symbol. The sign is concerned with the manifestation of the self, with basic needs being the foremost. Ruled by Venus, Taurus personalities tend to be driven by their affections rather than by emotions.\n";
else if (date >=21 && date <=31 && mon ==5 || date <=20 && mon ==6)
cout<<"\n Gemini The third sign of the zodiac, Gemini is ruled by Mercury which represents intelligence inside matter. The glyph of Gemini symbolizes two pieces of wood bound together.\n";
else if (date >=21 && date <= 30 && mon ==6 || date <=22 && mon ==7)
cout<<"\n Cancer The name derives from Latin, meaning literally, the crab. The ruler of the fourth sign of the zodiac is the Moon, the Crab, its symbol. The glyph is often seen as representing the breasts, indicating the area of the body ruled by Cancer. This is also seen as two crab claws, intertwined in a way which represents the dual nature of the Cancerian personality.\n";
else if (date >=23 && date <=31 && mon ==7 || date <=22 && mon ==8)
cout<<"\n Leo The ruler of Leo is the Sun. The glyph is generally thought to represent the tail of the lion. It can also symbolize the heat or the creative energy of the Sun. On entering the sign Leo, the Sun is said to exemplify cosmic splendor. The meaning attached to this seems to be that both the good and bad characteristics associated with Leo are perpetual.\n";
else if (date >=23 && date <=31 && mon ==8 || date <=22 && mon ==9)
cout<<"\n Virgo The ruler of Virgo is Mercury. The glyph is said to be connected to the Immaculate Conception of the Messiah. It's symbol The Virgin originated from the star Spica in the constellation of Virgo.\n";
else if (date >=23 && date <=30 && mon ==9 || date <=22 && mon ==10)
cout<<"\n LIBRA Libra is the seventh sign of the zodiac and is ruled by the planet Venus which rules the natural seventh house. When a planet or house cusp contains Libra, it will show where one will strive for harmony, creativity and balance as indicated in the natal chart.\n";
else if (date >=23 && date <=31 && mon ==10 || date <=21 && mon ==11)
cout<<"\n Scorpio The ruler of Scorpio is Pluto. Prior to the discovery of the ninth planet, Scorpio was ruled by Mars, which is still considered co-ruler. The sign of cosmic purpose, Scorpio is considered to be the success sign.\n";
else if (date >=22 && date <=30 && mon ==11 || date <=21 && mon ==12)
cout<<"\n Sagittarius A t the heart of Sagittarian lore stands the centaur Chiron, the figure of philosopher and teacher within Greek mythology. As a centaur, Chiron personifies the very soul of Sagittarius.\n";
else if (date >=22 && date <=31 && mon ==12 || date <=19 && mon ==1)
cout<<"\n Capricorn Capricorn, whose constellation is known as Capricornus, is one of the oldest of the astrological interpretations.It is ruled by Saturn.Its symbol is the goat. This is sometimes depicted as a sea borne hybrid or Dolphin. The image is often an animal with the body of a goat and the tail of a fish.\n";
else
cout<<"\n INVALID birthday!\n";
}

//*****************************************************************************
//                    FUNCTION TO CALCULATE LIFE EXPECTANCY
//*****************************************************************************

void kund::life(void)

{int td,tm,ad,am,tod,tom;
double ld,lm;
long int toy,ty,ly,ay;
cout<<"\nEnter current:"<<endl;
cout<<"Date:";
cin>>td;
cout<<"\nMonth:";
cin>>tm;
cout<<"\nYear:";
cin>>ty;

//age
ay=ty-y;
ad=td-d;
am=tm-m;
cout<<"\nYour age is:"<<endl;
cout<<"Years:"<<ay;
cout<<"\nMonths:"<<am;
cout<<"\nDays:"<<ad;

//tot life
toy=y+100;

//life
ly=(toy-ay)-2000;

if(ly>60)
{cout<<"\n\nYou are going to live more......";}
else
{cout<<"\n\nCount your tasks on calender";}
cout<<"\n\nYour life is: "<<ly<<"years more";
}
//*****************************************************************************
//               FUNCTION TO CALCULATE ANIMAL HOROSCOPE
//*****************************************************************************

void kund::asign(void)

{int year;
year=y;
if (year ==1960|| year ==1972|| year ==1984|| year ==1996)
cout<<"\n RAT!!\n";
else if (year ==1961|| year ==1973|| year ==1985|| year ==1997)
cout<<"\n OX!!\n";
else if (year == 1950|| year ==1962|| year ==1974|| year ==1986|| year ==1998)
cout<<"\n TIGER!!";
else if (year == 1951|| year ==1963|| year ==1975|| year ==1987||year==1999)
cout<<"\n RABBIT!!";
else if (year ==1952|| year ==1964|| year ==1976|| year ==1988|| year ==2000)
cout<<"\n DRAGON!!";
else if (year ==1953|| year ==1965|| year ==1977|| year ==1989)
cout<<" \n SNAKE!!";
else if (year ==1954|| year ==1966|| year ==1978|| year ==1990)
cout<<"\n HORSE!!";
else if (year ==1955|| year ==1967|| year ==1979|| year ==1991)
cout<<"\n GOAT!!";
else if (year ==1956|| year ==1968|| year ==1980|| year ==1992)
cout<<"\n MONKEY!!";
else if (year ==1957|| year ==1969|| year ==1981|| year ==1993)
cout<<"\n ROOSTER!!";
else if (year ==1958|| year ==1970|| year ==1982|| year ==1994)
cout<<"\n DOG!!";
else if (year ==1959|| year ==1971|| year ==1983|| year ==1995)
cout<<"\n PIG!!";
else
cout<<"\n invalid";
}

//*****************************************************************************
//               FUNCTION TO CALCULATE FUTURE AS CHINESE HOROSCOPE
//*****************************************************************************

void kund::future(void)

{cout<<"\nEnter a no. from 1 to 786:";
int n;
cin>>n;
int r;
for(i=n;i<786;++i)
r=(random(786-1+1)+1);
if(r<345)
{cout<<"\nYou are very lucky.You must thank your God";}
else
{cout<<"\nYou are gonna trobled soon!!!Pray for your sins";}
}

//*****************************************************************************
//                    FUNCTION TO CALCULATE LUCKY CHARM
//*****************************************************************************

void kund::lucky(void)

{
cout<<"\nLucky number:";
int rnum,c;
for(i=0;i<5;++i)
rnum=((rand()%9)+1);
cout<<rnum;
cout<<"\nEnter a number(1-14):";
cin>>c;
char col[][20]={"Red","Yellow","Indigo","Orange","Green","Gold","Cyan","Voilet","Blue","Black","White","Brown","Pink","Silver"};
cout<<"\nyour lucky colour is:";
cout<<col[c];
}
//*****************************************************************************
//                    FUNCTION TO CALCULATE HOROSCOPE
//*****************************************************************************
void kund::horo(void)

{char zodiac[50], horoscope[50];
int month,day;
month=m;
day=d;
   if((month==1)&(day>=20)|(month==2)&(day<=18)){
	cout<<"\nZodiac Sign:Aquarius";
	cout <<"\nYour Horoscope: The Sun in your sign squares Saturn in Scorpio on April 11, while the Moon in Cancer opposes Venus in Capricorn. As a result, you're going to feel as if your logic is flying in the face of what others call logic, and yet you're still going to feel justified in your actions. You may have to be cautious in what you do early in the year, but you're not going to be happy just bowing to the wishes of people around you, either. ";
    }
    else if ((month==2)&(day>=19)|(month==3)&(day<=20)){
	cout<<"\nZodiac Sign:Pisces";
	cout <<"\nYour Horoscope:One thing to remember is to pace yourself. Some people might be trying to take advantage of your good nature. With Mars and Saturn both in Scorpio in August, someone might not even be too subtle about using you. Keep your distance as best as you can, even if the devious person in question is the friend of someone you care about. ";
    }
    else if ((month==3)&(day>=21)|(month==4)&(day<=19)){
	cout<<"\nZodiac Sign:Aries";
	cout <<"\nYour Horoscope: if you thought 2017 would be dull, think again. And again. And again! Because, for certain, this will be a year when you'll do a lot of reassessment. For some people, especially the Aries, this could threaten to sink into self-absorption. But with all that's happening, especially with the Capricorn Moon in late January causing a flurry of excessive self-examination, you certainly have the right to be introspective.";
    }
    else if ((month==4)&(day>=20)|(month==5)&(day<=20)){
	cout<<"\nZodiac Sign:Taurus";
	cout <<"\nYour Horoscope: The Annular Solar Eclipse on April 28-29 should bring your social and private life to a pleasant and steady rhythm. The summer promises a more synchronized and steady routine that will allow you to stay focused on important tasks and chores while granting you the free time to get out and have fun with friends. ";
    }
    else if ((month==5)&(day>=21)|(month==6)&(day<=20)){
	cout<<"\nZodiac Sign:Gemini";
	cout <<"Your Horoscope: Your aims this year are going to make you very single-minded. You will likely have a personal financial goal that will prompt a do-or-die feeling all year. You're going to face a number of planetary influences that will have you measuring your progress, thus giving you a concrete feeling of moving ahead. ";
    }
    else if ((month==6)&(day>=21)|(month==7)&(day<=22)){
	cout<<"\nZodiac Sign:Cancer";
	cout <<"\nYour Horoscope: Dreams, ideas, and personal connections are going to be extremely valuable to you at the beginning of this year. You have a lot of ideas to sort through, and your friends can be very helpful in making this happen. Some of these ideas can seem very powerful, and others can seem a bit peculiar, but none of them should be dismissed. Jupiter is in your sign at the beginning of the year, and he's giving an approving nod to your idea-making. ";
    }
    else if ((month==7)&(day>=23)|(month==8)&(day<=22)){
	cout<<"\nZodiac Sign:Leo";
	cout <<"\nYour Horoscope: Because of this, you're going to be faced with fresh, interesting new challenges that might require you to be on your toes more often. Friends may come to you with interesting puzzles for you to solve. Family may be looking to you for advice that will help a loved one out of a crisis. ";
    }
    else if ((month==8)&(day>=23)|(month==9)&(day<=22)){
	cout<<"\nZodiac Sign:Virgo";
	cout <<"\nYour Horoscope:A friend or acquaintance will be amazed at what a treasure trove of helpful information you are. At first, you may be dismissive because you'll have so much on your plate you can barely think about yourself! But in the end, this could well be a channel for a new network of friends or acquaintances, thus opening up a new world for you! This is one of those times when just being yourself will pay off a hundredfold. ";
    }
    else if ((month==9)&(day>=23)|(month==10)&(day<=22)){
	cout<<"\nZodiac Sign:Libra";
	cout <<"\nYour Horoscope: On one hand, this is going to increase your personal network. On the other hand, you could find that people who need your skills will be coming to you more often. While you definitely like to help now and again, you're going to have to learn to say no occasionally if it severely interferes with your life. ";
    }
    else if ((month==10)&(day>=23)|(month==11)&(day<=21)){
	cout<<"\nZodiac Sign:Scorpio";
	cout <<"\nYour Horoscope: The level of familiarity you might have with friends, acquaintances, and neighbors might be equally unnerving and exhilarating. But don't worry! You'll be getting something out of it as well. ";
    }
    else if ((month==11)&(day>=22)|(month==12)&(day<=21)){
	cout<<"\nZodiac Sign:Sagittarius";
	cout <<"\nYour Horoscope: Some of your more personal goals may take a while to achieve, but the path to solving them is strewn with solutions to questions you'd lost hope in answering. Your personal energy level may slide a little in periods here and there in the summer, but you've got enough going so that friends can carry you during those low points. ";
    }
    else if ((month==12)&(day>=22)|(month==1)&(day<=19)){
	cout<<"\nZodiac Sign:Capricorn";
	cout <<"\nYour Horoscope: With Jupiter in Cancer most of the year and opposing planets in your sign at every turn, you may find yourself knee deep in home maintenance. And this doesn't just mean upkeep of your physical residence. It also means keeping family and romantic ties strong with a certain amount of effort. The work required will often be pleasant, but if you've ever wanted a reason to avoid laziness, this is it. ";
    }
    else{
	cout <<"\nINVALID MONTH OR DAY" <<endl;

    }
    }

//*****************************************************************************
//                           MAIN FUNCTION OF PROGRAM
//*****************************************************************************

void main()
{int mm=0,ch=0;
char cch,see,mo;
do{clrscr();
//*****************************************************************************
//                      FUNCTION TO DISPLAY WELCOME SCREEN
//*****************************************************************************
cout<<"**************************WELCOME TO ASTROLOGY SOFTWARE*************************";
cout<<"\n Features:\nLifetime\nFuture Predictions\nLucky charm\nHoroscope"<<endl;
cout<<"*******************************************************************************\n";
cout<<"\n1.ENTER DETAILS\n2.DISPLAY DETAILS\n3.MODIFY DETAILS\n4.EXIT";
cout<<"\nEnter your choice(1-4):";
cin>>mm;
switch (mm)
{case 1:k.in();
cout<<"\nWant to see data you entered??Press s:";
cin>>see;
if(see=='s'||see=='S')
goto se;
else
goto rty;
break;
case 2:se:
k.dis();
cout<<"\nWant to modify your details...press m:";
cin>>mo;
if(mo=='m'||mo=='M')
goto modife;
else
goto rty;
break;
case 3:modife:
k.modify();  goto rty;
break;
case 4:exit(0);
break;
default:cout<<"\nYou have entered a wrong choice!!!!\nPlease enter a valid input";
break;}
//welcome screen ends
rty:    //label to main menu
cout<<"\n*******************************************************************************\n";
cout<<"\nMAIN MENU:\n\n1.Zodiac Horoscope\n2.Lifetime\n3.Future\n4.Animal Sign\n5.Lucky charm\n6.Horoscope\n7.EXIT";
cout<<"\nEnter your choice(1-7)";
cin>>ch;
switch (ch)
{case 1:k.zodiac(); goto rty;
break;
case 2:k.life(); goto rty;
break;
case 3:k.future(); goto rty;
break;
case 4:cout<<"\nYour animal sign is:";
k.asign(); goto rty;
break;
case 5:k.lucky();  goto rty;
break;
case 6:k.horo();   goto rty;
break;
case 7:exit(0);
break;
default:cout<<"\nWRONG CHOICE!!!\t\nYOU WILL NOW DIE SOON"<<endl;
break;
}
//main menu ends
cout<<"\nWant to enter more:";
cin>>cch;
}while(cch=='y'&&cch=='Y');
getch();
}

//*****************************************************************************
//                                PROGRAM OVER
//*****************************************************************************